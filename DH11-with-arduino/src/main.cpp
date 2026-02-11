#include <Arduino.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht (DHTPIN,DHTTYPE);
void setup() {
// write your initialization code her
    delay(2000);
    Serial.begin(9600);
    dht.begin();
    Serial.print("DHT11 Sensor Intialized");

// e

}

void loop() {
// write your code here
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
        return;
    }
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" *C ");
    delay(2000);
}