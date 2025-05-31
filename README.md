# HOME-AUTOMATION-SYSTEM
*company: CODETECH IT SOLUTIONS

NAME : THOKA.MARY KUMARI

INTERN ID: CT04DL770

DOMAIN: IOT

DURATION:4 WEEKS

MENTOR:NEELA SANTHOSH

Project Description: 
Home Automation System using Blynk & NodeMCU
This project is a Home Automation System prototype that allows users to control basic home appliances such as lights and fans using a smartphone app via the Blynk IoT platform. The system is built using the NodeMCU (ESP8266) microcontroller and demonstrates the use of IoT for remote control of electronic devices.

📱 Features
✅ Control Light (LED) and Fan (Motor or LED) using smartphone

✅ Built on Blynk IoT app with WiFi-enabled NodeMCU

✅ Clean and simple Arduino-based code

✅ Works in real time via Blynk virtual pins (V0 & V1)

✅ Easy to extend for real-world appliances using relays

🔧 Technologies Used
NodeMCU ESP8266

Arduino IDE / VS Code

Blynk IoT App

C++ (Arduino Language)

WiFi Communication

📦 Components
NodeMCU (ESP8266)

LED (for Light)

Motor or LED (for Fan)

Jumper Wires

Breadboard

Smartphone with Blynk App

⚙️ How It Works
NodeMCU connects to your home WiFi and to the Blynk cloud.

The Blynk app sends commands to turn on/off devices via Virtual Pins (V0 for light, V1 for fan).

The code reads those commands and switches devices accordingly.

📲 Mobile App Setup
Install Blynk IoT app (Google Play / App Store)

Create project with ESP8266 as device

Add 2 buttons:

Button 1 → Virtual Pin V0 → Light

Button 2 → Virtual Pin V1 → Fan

Copy the Auth Token sent to your email and paste into the code

🧠 How to Run
Paste code into main.ino

Replace WiFi credentials and Blynk Auth Token

Upload to NodeMCU using Arduino IDE or PlatformIO in VS Code

Open Blynk App and tap buttons to control devices

💡 Demo Use Cases
Turn on/off room lights and fans

Extend for real-world automation using relays and sensors

Build a smart home prototype
