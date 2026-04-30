# 🗑️ Smart Dustbin (ESP32-Based Automatic Waste Management System)

## 📌 Overview

The **Smart Dustbin** is an automated waste disposal system designed to improve hygiene and efficiency in everyday waste management. By using an ultrasonic sensor and a servo motor, the dustbin lid opens automatically when a user approaches, eliminating the need for physical contact.

This project addresses common issues with traditional dustbins such as germ spread, unpleasant odors, and overflow due to lack of monitoring.

---

## 🎯 Objectives

* Promote **hygienic waste disposal** through touchless interaction
* Reduce **cross-contamination and germ spread**
* Improve **user convenience and efficiency**
* Support **cleaner and smarter environments**

---

## ❗ Problem Statement

Traditional dustbins require physical contact, increasing the risk of spreading bacteria and viruses. Additionally, users are often unaware when bins are full, leading to overflow and unpleasant odors.

---

## 💡 Proposed Solution

This project introduces a **smart dustbin** with:

* Automatic lid opening using motion detection
* Waste detection system
* Potential notification system for bin status

---

## ⚙️ How It Works

1. The ultrasonic sensor detects an object (e.g., a hand) near the bin
2. The ESP32 processes the signal
3. The servo motor opens the lid automatically
4. After a short delay, the lid closes

---

## 🧰 Hardware Components

* ESP32 microcontroller
* Ultrasonic sensor (HC-SR04)
* Servo motor
* Jumper wires
* Power supply

* ## 🧰 Hardware Components

| Component          | Quantity | Description                          | Purpose in Project                   |
| ------------------ | -------- | ------------------------------------ | ------------------------------------ |
| ESP32              | 1        | Microcontroller with WiFi capability | Controls the entire system           |
| Ultrasonic Sensor  | 1        | HC-SR04 distance measurement module  | Detects hand/object near the dustbin |
| Servo Motor        | 1        | Rotational actuator (e.g., SG90)     | Opens and closes the lid             |
| Jumper Wires       | Several  | Electrical connection wires          | Connect components together          |
| Power Supply       | 1        | Battery or USB power source          | Provides power to the system         |
| Dustbin (Physical) | 1        | Container for waste                  | Main structure of the project        |


| Component          | Qty | Est. Cost (RM) | Purpose                  |
|--------------------|-----|----------------|--------------------------|
| ESP32              | 1   | 25             | Main controller          |
| Ultrasonic Sensor  | 1   | 5              | Distance detection       |
| Servo Motor        | 1   | 8              | Lid movement             |

---

## 💻 Software & Technologies

* Arduino IDE
* Embedded C/C++
* ESP32 libraries

---

## 🔌 Circuit & Wiring

Refer to the [`hardware/`](./hardware/) folder for:

* Circuit diagrams
* Wiring guide
* Component explanations

---

## 📂 Project Structure

```
smart-dustbin/
├── docs/               # Reports, presentation, images
├── hardware/           # Circuit diagrams and wiring
├── software/           # ESP32 source code
├── features/           # Feature documentation
├── team/               # Team roles & contributions
└── future-improvements.md
```

---

## 🚀 Features

* ✅ Automatic lid opening
* ✅ Contactless operation
* ✅ Energy-efficient design
* 🔄 Expandable for IoT integration

---

## 🧪 Testing

The system was tested for:

* Sensor detection accuracy
* Servo response timing
* Stability under continuous use

Results show reliable and consistent performance for everyday usage.

---

## 👥 Team Members

* Chin Ze You
* Ho Pinllip
* Tee Min Ern
* Nitishraaj Elanggovan
* Thanush Kumar Sinnathamby

---

## 📈 Future Improvements

* IoT integration (mobile app monitoring)
* Fill-level detection with notifications
* Solar-powered system
* Larger capacity design

---

## 📚 References

1. Arduino Official Website – Servo Motor Control
2. Electronics Tutorials – Ultrasonic Sensor Working Principle
3. EE025 Electrical and Electronics Engineering Module
4. Smart Dustbin DIY Project (YouTube)

---

## 📸 Final Product

Images and demonstration can be found in the [`docs/images`](./docs/images/) folder.

---

## 📄 License

This project is for educational purposes. Feel free to use and modify with proper credit.

---
