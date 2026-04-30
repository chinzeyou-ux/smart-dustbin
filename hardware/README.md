## 🔋 Power Supply

The Smart Dustbin is powered using a standard **5V USB-A connection**, making it highly convenient and portable.

### ⚡ Power Options

The system can be powered by:

* 🔌 USB wall adapter
* 💻 Computer USB port
* 🔋 Power bank

### 🔧 Specifications

* **Voltage:** 5V
* **Interface:** USB-A
* **Recommended Current:** ≥ 1A for stable servo operation

### 💡 Notes

* A stable power supply is important to ensure smooth servo motor movement
* Power banks make the system portable and suitable for real-world use
* Avoid low-current sources as they may cause the servo to behave inconsistently

---

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
