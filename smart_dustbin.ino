#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <ESP32Servo.h>
#include <ArduinoJson.h>

// --- WiFi & Telegram Config ---
const char* ssid = "Redmi 15 5G";
const char* password = "12345678";
#define BOTtoken "8591598857:AAED1hQnJteAoL6ikC2iPBX2hzp8SprVWSk"
#define CHAT_ID "1921780515"

// --- Pin Definitions ---
const int trigA = 13; const int echoA = 12; // Servo Sensor
const int trigB = 27; const int echoB = 26; // Telegram Sensor
const int servoPin = 14;

// --- Servo Calibration (360 Degree) ---
const int STOP = 1500;
const int OPEN_SPEED = 1680;
const int CLOSE_SPEED = 1460;
int openTime = 700;
int closeTime = 700; // Adjusted for that "return" drift we discussed

Servo myServo;
WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

bool motorActive = false;
bool telegramSent = false;
unsigned long motorStartTime = 0;

// Function to read distance from a specific sensor
float getDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long duration = pulseIn(echo, HIGH, 30000); // 30ms timeout
  return duration * 0.0343 / 2;
}

void setup() {
  Serial.begin(115200);
  pinMode(trigA, OUTPUT); pinMode(echoA, INPUT);
  pinMode(trigB, OUTPUT); pinMode(echoB, INPUT);

  // Servo Setup
  ESP32PWM::allocateTimer(0);
  myServo.attach(servoPin, 500, 2400);
  myServo.writeMicroseconds(STOP);

  // WiFi Setup
  WiFi.begin(ssid, password);
  client.setInsecure(); 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500); Serial.print(".");
  }
  Serial.println("\nSystem Online");
}

void loop() {
  // --- SENSOR A: SERVO CONTROL ---
  float distA = getDistance(trigA, echoA);
  if (distA > 0 && distA < 5 && !motorActive) {
    Serial.println("Sensor A Triggered: Opening");
    myServo.writeMicroseconds(OPEN_SPEED);
    delay(openTime);
    myServo.writeMicroseconds(STOP);
    motorActive = true;
    motorStartTime = millis();
  }

  if (motorActive && (millis() - motorStartTime >= 2000)) {
    Serial.println("Timer End: Closing");
    myServo.writeMicroseconds(CLOSE_SPEED);
    delay(closeTime);
    myServo.writeMicroseconds(STOP);
    motorActive = false;
  }

  // --- SENSOR B: TELEGRAM ALERT ---
  float distB = getDistance(trigB, echoB);
  if (distB > 0 && distB < 5 && !telegramSent) {
    String msg = "Alert! The Trash Bin is Full!";
    if (bot.sendMessage(CHAT_ID, msg, "")) {
      Serial.println("Telegram Alert Sent!");
      telegramSent = true;
    }
  }
  
  // Reset telegram flag if area is clear
  if (distB > 5) telegramSent = false;

  delay(100); 
}
