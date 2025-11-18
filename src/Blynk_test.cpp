// In your Arduino code
#define BLYNK_TEMPLATE_ID "Your_Template_ID" // From Blynk dashboard
#define BLYNK_TEMPLATE_NAME "Your_Template_Name" // From Blynk dashboard
#define BLYNK_AUTH_TOKEN "Your_Auth_Token" // From email

#include <WiFi.h>
#include <Arduino.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// On-board LED is often on GPIO 2
#define LED_PIN 2

char ssid[] = "your ssid";
char pass[] = "your_password";

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
