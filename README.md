# Smart-study-Environment-Assistant
*Smart Study Environment Assistant – An IoT-based project using NodeMCU ESP8266, DHT11, and a light sensor to monitor temperature, humidity, and lighting conditions, with real-time feedback through an I2C LCD and buzzer alerts.
An IoT-based environment monitoring system built using **NodeMCU ESP8266**. The project monitors temperature, humidity, and light conditions and provides real-time feedback through an I2C LCD and buzzer.

## 📌 Project Overview

The **Smart Study Environment Assistant** is designed to monitor basic environmental conditions around a study area.

The system uses sensors to collect environmental data, processes the readings using the NodeMCU ESP8266, and displays the results on a 16×2 I2C LCD.

For example:

* When sufficient light is available, the system displays **"Study: GOOD"**.
* When the light level becomes low, the system displays **"Light: LOW"** and activates an alert.

This project demonstrates how sensors, a microcontroller, and output devices can work together for real-time monitoring.

## 🔧 Components Used

* NodeMCU ESP8266
* DHT11 Temperature & Humidity Sensor
* Light Sensor Module
* 16×2 I2C LCD Display
* Buzzer
* Breadboard
* Jumper Wires
* USB Cable

## ⚙️ Working Principle

The system follows this basic process:

**Sensors → NodeMCU → Data Processing → LCD / Buzzer**

1. The **DHT11** measures temperature and humidity.
2. The **light sensor** detects the surrounding light level.
3. The **NodeMCU ESP8266** reads and processes the sensor data.
4. The **I2C LCD** displays the environmental readings and status.
5. The **buzzer** provides an alert when the defined condition requires it.

## 💻 Software & Technologies

* Arduino IDE
* Embedded C/C++
* ESP8266
* I2C Communication
* Sensor Interfacing

## 📊 Example Output

The LCD displays information such as:

```text
T = 28.90 °C
H = 70.00 %
Status: GOOD
```

When the light level becomes low:

```text
Light: LOW
```

The buzzer provides an additional alert.

## 🎯 Applications

* Study rooms
* Classrooms
* Libraries
* Smart indoor environment monitoring
* IoT learning and educational projects

## 🚀 Future Improvements

The project can be extended by adding automatic control of devices such as lights or fans based on sensor readings.

For example:

**Low light → Automatically turn ON light**

**High temperature → Automatically activate a fan**

This would extend the project from simple monitoring to **automatic environmental control**.

## 📚 Learning Outcomes

Through this project, I gained practical experience in:

* Sensor interfacing
* NodeMCU ESP8266 programming
* Embedded C/C++
* I2C communication
* Real-time sensor monitoring
* Hardware-software integration
* Debugging and troubleshooting



⭐ If you find this project useful, feel free to explore the code and learn from it.
