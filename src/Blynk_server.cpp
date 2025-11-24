#define BLYNK_TEMPLATE_ID "SOMETHING_SOMETHING"
#define BLYNK_TEMPLATE_NAME "SOMETHING_SOMETHING2"
#define BLYNK_AUTH_TOKEN "SOMETHING_SOMETHING_AGAIN"

#include <WiFi.h>
#include "sensors.h"
#include <sensors.h>
#include <Arduino.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

int output_value;
int moisturelevel;

int notified = 0;
int timedelay= 60000L;

void Sensors(){
    Blynk.virtualWrite(V0, soilMoisture);
    Blynk.virtualWrite(V1, temperature);
    Blynk.virtualWrite(V2, humidity);
}

char ssid[] = "your_ssid";
char password[] = "your_password";

BlynkTimer timer;

void setup(){
    Serial.begin(115200);
    Blynk.begin( BLYNK_AUTH_TOKEN,ssid, password);
    timer.setInterval(timedelay, Sensors);
}

void loop(){
    Blynk.run();
    timer.run();
}
