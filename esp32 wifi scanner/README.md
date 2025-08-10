# ESP32 WiFi Scanner

## Description
A basic project using ESP32. It scans wifi networks around and displays SSID and RSSI through Serial Monitor.

## Features
- Scan Wifi networks.
- Display:
  - Number of networks found.
  - SSID.
  - RSSI.
- Automatically scan after a period of time.

## How to use

### Step 1:
1. Installing PlatformIO IDE (or Arduino IDE)
2. Installing USB Driver for ESP32

### Step 2: 
1. Connect to ESP32 through COM port

### Step 3: Upload Code
1. Build project
2. Upload code to ESP32

### Step 4:
1. Open Serial Monitor
2. Baud rate == 115200

## Results
```
setup done. Starting WiFi scan...
Scanning for WiFi networks...
3 networks found:
MyNetwork
Signal strength: -65 dBm
HomeWiFi
Signal strength: -72 dBm
Office_Network
Signal strength: -80 dBm
Scan complete!...
-------------------------------------
```
