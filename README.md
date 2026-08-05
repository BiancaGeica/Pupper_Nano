# Pupper_Nano
Arduino Nano-based sensor module for Pupper. Handles communication between the main Raspberry Pi and external hardware. 


## Overview
This repository contains the source code and hardware documentation for the module based on Arduino Nano mounted on the back of the Pupper robot. Its main purpose is to offload sensor data and transmit the processed data to the main Raspberry Pi via USB.

## 1. Prerequisites & Installation

### **For Windows Users:**
1. Download the latest Arduino IDE from the [official Arduino website](https://www.arduino.cc/en/software).
2. Run the installer and follow the standard setup steps.

### **For Linux Users (Ubuntu/Debian-based):**
1. Download the Arduino IDE `.AppImage` file from the official website.
2. **Fix the AppImage FUSE error:** Ubuntu 22.04 require `libfuse2` to run AppImages. Open a terminal and run:
   ```bash
   sudo apt update
   sudo apt install libfuse2
3. **Make the file executable:**
    ```bash
    chmod +x arduino-ide_*_Linux_64bit.AppImage

## 2. Pinout & Wiring Map

### Power Pins (Alimentare)
*   **5V:** **[OCCUPIED]** - MQ-5 Gas Sensor (VCC)
*   **3.3V:** Available
*   **GND (3 pins available):** **[1 OCCUPIED]** - MQ-5 Gas Sensor (GND). *2 GND pins remaining available.*
*   **VIN:** Available
*   **IOREF:** Available
*   **RESET:** Available

### Analog Pins (Input)
*   **A0:** **[OCCUPIED]** - MQ-5 Gas Sensor (AOUT)
*   **A1:** Available
*   **A2:** Available
*   **A3:** Available
*   **A4 (SDA):** Available
*   **A5 (SCL):** Available

### Digital Pins (I/O)
*   **D0 (RX):** Available
*   **D1 (TX):** Available
*   **D2:** Available
*   **D3 (PWM):** Available
*   **D4:** Available
*   **D5 (PWM):** Available
*   **D6 (PWM):** Available
*   **D7:** Available
*   **D8:** Available
*   **D9 (PWM):** Available
*   **D10 (PWM / SPI SS):** Available
*   **D11 (PWM / SPI MOSI):** Available
*   **D12 (SPI MISO):** Available
*   **D13 (SPI SCK / Built-in LED):** Available

**IMPORTANT NOTE:** If you wire a new component to the board, update the list below, pretty please!