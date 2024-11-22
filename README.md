# ENR107 Digital Electronics and Microprocessors  
## 2024-2025 (Monsoon Semester)  

**Single-Axis-Solar-Tracker-with-Smart-Street-Light README**  
**Submitted to faculty:** Maryam Kaveshgar  
**Date of submission:** [Insert Date]  
**Group Number:** 5  

| Roll No.   | Name of the Student   | Contribution |
|------------|-----------------------|--------------|
| AU2340190  | KAVISH K VACHHETA      | [Your Contribution] |
| [Roll No.] | [Name]                 | [Contribution] |
| [Roll No.] | [Name]                 | [Contribution] |

---

## README for Single-Axis Solar Tracker with Smart Street Light  

### **Introduction**

The **Single-Axis Solar Tracker with Smart Street Light** is a smart outdoor lighting solution that integrates solar energy optimization with adaptive street illumination. This prototype combines a solar tracker mechanism with intelligent lighting systems to maximize the utilization of solar energy.

#### **Main Features**:

- **Solar Tracking**:  
  The system uses a single-axis mechanism to adjust the solar panel's position, ensuring it remains aligned with the sun throughout the day to capture maximum sunlight and optimize energy generation.

- **Smart Lighting**:  
  The streetlights powered by the harvested solar energy automatically activate at night. The system intelligently manages the lighting based on available energy:
  - **All lights turn on** when there is sufficient energy.
  - **Alternate lights activate** during low-energy conditions to conserve power.

- **Energy Management**:  
  The **Arduino UNO** controls the entire system, balancing energy usage between solar tracking and smart lighting efficiently.

#### **Problem Solved**:
This prototype addresses the need for sustainable and energy-efficient outdoor lighting, especially in areas with limited or costly power supply. By combining solar energy optimization with adaptive lighting, it reduces energy waste and provides a reliable, eco-friendly solution for outdoor illumination under diverse environmental conditions.

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

#### **Installation**  
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
 
- **Important Notes**:
  - **Ensure Power Supply**: The Arduino must remain connected to a power source (USB or external power supply) for the system to operate.
  - **Code Execution**: If the Arduino is not connected to a power source, it will run the last uploaded code when powered up again.
  - If you need to update the code, repeat Steps 2–4 to overwrite the previous program on the Arduino.


