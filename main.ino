#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Replace with your WiFi credentials
char ssid[] = "Your_WiFi_Name";
char pass[] = "Your_WiFi_Password";

// Replace with your Blynk Auth Token
char auth[] = "Your_Blynk_Auth_Token";

// Pin definitions
#define LIGHT_PIN D1
#define FAN_PIN D2

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Setup pins
  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);

  // Start Blynk
  Blynk.begin(auth, ssid, pass);
}

// Light Control
BLYNK_WRITE(V0)
{
  int value = param.asInt(); // Get value from Blynk app
  digitalWrite(LIGHT_PIN, value);
}

// Fan Control
BLYNK_WRITE(V1)
{
  int value = param.asInt();
  digitalWrite(FAN_PIN, value);
}

void loop()
{
  Blynk.run();
}
