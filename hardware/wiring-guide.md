# 🔌 Wiring Guide

## Ultrasonic Sensor 1 (For object detection) (HC-SR04)
- VCC → 5V
- GND → GND
- Trig → GPIO 13
- Echo → GPIO 12

## Ultrasonic Sensor 2 (For capacity detection) (HC-SR04)
- VCC → 5V
- GND → GND
- Trig → GPIO 27
- Echo → GPIO 26


## Servo Motor
- VCC → 5V
- GND → GND
- Signal → GPIO 14

## ESP32
Main controller handling sensor input and motor output.
