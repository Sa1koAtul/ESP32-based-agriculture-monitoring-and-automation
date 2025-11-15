#include <WiFi.h>
#include "sensor.h"
#include <sensor.h>
#include <ESPAsyncWebServer.h>
#include "sensors.h" // <-- Include your sensor file
const char* ssid = "hello"; // CHANGE IT 
const char* password = "password"; // CHANGE IT 


AsyncWebServer server(80);

void handleRoot(AsyncWebServerRequest *request) {
    // Call the functions from sensors.h to get current values
    String html = "<h1>Sensor Data</h1>";
    html += "<p>Temperature: " + String(temperature) + "</p>";
    html += "<p>Humidity: " + String(humidity) + "</p>";
    html += "<p>SoilMoisture: " + String(soilMoisture) + "</p>";
    request->send(200, "text/html", html);
}

void startWebServer() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
    }
    Serial.print("ESP32 Web Server's IP address: "); 
    Serial.println(WiFi.localIP()); 


    server.on("/", HTTP_GET, handleRoot);
    server.begin();
}