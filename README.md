# 🚀 ProximitySense

> An Arduino-based proximity detection system that automatically actuates a servo motor using an ultrasonic sensor.

---

## 📖 Overview

**ProximitySense** is a basic embedded systems project developed using **Arduino Uno** and **Tinkercad**.

The system continuously measures the distance between the ultrasonic sensor and nearby objects. When an object is detected within a predefined distance (20 cm), the servo motor rotates to simulate opening a lid. Once the object moves away, the servo returns to its initial position after a short delay.

---

## ✨ Features

- 📏 Ultrasonic distance measurement
- 🤏 Touchless object detection
- ⚙️ Automatic servo actuation
- ⏱️ 4-second delay before closing
- 🧪 Simulated using Tinkercad

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|---------:|
| Arduino Uno | 1 |
| Ultrasonic Sensor (PING))) | 1 |
| Servo Motor | 1 |
| Jumper Wires | As required |

---

## ⚡ Working Principle

1. The ultrasonic sensor continuously measures the distance to nearby objects.
2. If the detected distance is **20 cm or less**, the servo rotates to **90°** (open position).
3. The servo remains in the open position while an object is detected.
4. Once the object moves away, the system waits **4 seconds** before returning the servo to **0°** (closed position).

---

## 📂 Project Files

- 📷 Circuit Screenshot
- 📷 Closed-State Screenshot
- 📷 Open-State Screenshot
- 🎥 Simulation Demo
- 💻 Arduino Source Code (.ino)

---

## 🔮 Future Scope

Some possible future enhancements include:

- 🔋 Rechargeable battery-powered operation
- 📶 IoT connectivity using ESP32
- 📊 Dust level monitoring
- 🔔 LED/Buzzer status indication
- 📱 Mobile app integration

---

 👩‍💻Developed By
**Hajira**

Electronics and Communication Engineering (ECE)

---

⭐ *This repository documents one of my first embedded systems projects and marks the beginning of my hands-on Arduino journey.*
