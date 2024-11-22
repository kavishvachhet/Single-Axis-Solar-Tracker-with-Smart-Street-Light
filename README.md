# ENR107 Digital Electronics and Microprocessors  
## 2024-2025 (Monsoon Semester)  

**Single-Axis-Solar-Tracker-with-Smart-Street-Light README**  
**Submitted to faculty:** Maryam Kaveshgar  
**Date of submission:** [Insert Date]  
**Group Number:** 5  

| Roll No.   | Name of the Student   | Contribution |
|------------|-----------------------|--------------|
| AU2340190  | Kavish K Vachheta      | Arduino Code, Report, Components requirement |
| AU2340052 | Ramkrishna Mangukiya       | Circuit Connection, error solving |
| AU2340106 | Shrey Chaklasiya                | Arduino Code, Circuit Connection, Error solving |
| AU2340098 | Avadh Nandasana               | Circuit connection, components requirement |
| AU2340004 | Hritik Shah               | Circuit connection, Report |




---

## README for Single-Axis Solar Tracker with Smart Street Light  

### **Introduction**

A **Smart Street Light-based Single-Axis Solar Tracker** combines a solar energy eco-friendly outdoor lighting solution with maximized efficiency in the utilization of solar energy and adaptive street illumination. The prototype is intended to increase efficiency in this aspect, as the mechanism of tracking the sun would be paired with an intelligent lighting system.

#### **Main Features**:

- **Solar Tracking**:  
  It adjusts the position of the photovoltaic panel relative to the sun and aligns it properly with the movement of the sun using a single-axis mechanism.

- **Smart Lighting**:  
  LED lights that capture the sun's energy automatically turn on at night. Based on the available energy, the lighting system intelligently works with intelligent regulation:
  - **All lights turn on** when there is sufficient energy.
  - **Alternate lights activate** during low-energy conditions to conserve power.

- **Energy Management**:  
  The **Arduino UNO** controls the entire system, balancing energy usage between solar tracking and smart lighting efficiently.

#### **Problem Solved**:
This prototype responds to a demand for outdoor lighting that is both sustainable and energy-efficient, especially in regions with either restricted power sources or expensive power sources. Combining the solar power optimisation with adaptive lighting technologies, it helps avoid energy waste and provides a viable, eco-friendly source of outdoor illumination under changing environmental conditions.

---

### **Getting Started**  

#### **Prerequisites**  
To work with this prototype, the following are required:

- **Software**:
  - Arduino IDE (version 2.3.2)
  
- **Libraries**:
  - Servo library (pre-installed in Arduino IDE)

- **Hardware**:
  - Arduino UNO
  - 3 LDRs (Light Dependent Resistors)
  - Servo motor (for solar tracking)
  - LEDs and resistors (for smart lighting)
  - Breadboard and jumper wires
  - Power source for Arduino and LEDs
  - Solar panel

 
---


### **Installation Guide**  
Follow these steps to set up the prototype:


- **Step 1: Download Arduino IDE**:
  - Go to the [Arduino Official Website](https://www.arduino.cc/en/software)
  - Download the Arduino IDE suitable for your operating system.
  - Install the Arduino IDE by following the on-screen instructions.
 
- **Step 2: Open the Code**:
  - Save the provided Arduino code file (solar_tracking.ino) to your computer.
  - Launch the Arduino IDE.
  - Open the saved solar_tracking.ino file in the Arduino IDE by selecting:
      - File > Open and navigating to the file location.

- **Step 3: Connect the Arduino**:
  - Use a USB cable to connect the Arduino UNO to your computer.
  - Ensure the correct board and port are selected in the Arduino IDE:
      - Go to Tools > Board > Arduino UNO.
      - Navigate to Tools > Port and select the port corresponding to the connected Arduino.
   
- **Step 4: Upload the Code**:
  - Click the Upload button (⮉) in the Arduino IDE toolbar to transfer the code to the Arduino.
  - Wait for the upload to complete. The message "Done uploading" will appear in the IDE console.
 

---
 
### **Important Notes**  
  - **Ensure Power Supply**: The Arduino must remain connected to a power source (USB or external power supply) for the system to operate.
  - **Code Execution**: If the Arduino is not connected to a power source, it will run the last uploaded code when powered up again.
  - If you need to update the code, repeat Steps 2–4 to overwrite the previous program on the Arduino.
   
---

### **Accessing the README**
You can find the README file and other details in the project GitHub repository :
 [GitHub Repository Link](https://github.com/kavishvachhet/Single-Axis-Solar-Tracker-with-Smart-Street-Light)


