#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 4      // DHT data pin connected to ESP32 GPIO4
#define DHTTYPE DHT22 // DHT 22 (AM2302)

DHT dht(DHTPIN, DHTTYPE);

/* void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT22 Test!"));
  dht.begin();
}
 */
/**void loop() {
  delay(2000); // Wait a few seconds between measurements.

  float h = dht.readHumidity();
  float t = dht.readTemperature(); // Read temperature as Celsius (the default)
  // float f = dht.readTemperature(true); // Read temperature as Fahrenheit

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Celsius or Fahrenheit.
  // float hic = dht.computeHeatIndex(t, h, false);
  // float hif = dht.computeHeatIndex(f, h);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  // Serial.print(f);
  // Serial.print(F("°F  Heat index: "));
  // Serial.print(hic);
  // Serial.print(F("°C "));
  // Serial.print(hif);
  // Serial.println(F("°F"));
  Serial.println();
}**/