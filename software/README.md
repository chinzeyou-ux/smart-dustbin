# 💻 Software (ESP32)

## 📌 Overview

This folder contains the source code for the Smart Dustbin system, implemented using a single Arduino file for the ESP32.

The program controls the ultrasonic sensor, servo motor, and optional Telegram notification system.

---

## 📂 File

* `smart_dustbin.ino` → Main and only source file containing all logic

---

## ⚙️ Features Implemented

* Distance detection using ultrasonic sensor
* Automatic lid opening and closing
* Optional Telegram notification system

---

## 🔔 Telegram Integration (Important Note)

This project includes support for sending notifications via Telegram.

However, for **privacy and security reasons**, sensitive credentials are not shared in this repository.

Inside `smart_dustbin.ino`, the values are replaced with:

```cpp id="c4w6po"
#define BOTtoken "xxx"
#define CHAT_ID "xxx"
```

⚠️ **Note:**
To enable Telegram notifications, you must:

1. Create your own bot using Telegram
2. Obtain your **Bot Token**
3. Get your **Chat ID**
4. Replace `"XXXX"` in the code with your actual values

---

## 🔄 System Logic

1. Ultrasonic sensor detects distance
2. If an object is within a set range → trigger action
3. Servo motor opens the lid
4. After a delay → lid closes
5. (Optional) Send notification via Telegram

---

## 🧪 Testing

All functionality is tested within the main `.ino` file:

* Sensor readings are validated through Serial Monitor
* Servo movement is tested with different angles

---

## ⚠️ Notes

* Ensure correct GPIO pin configuration inside the `.ino` file
* Use a stable power supply for the servo motor
* Do not upload real Telegram credentials to public repositories

---
