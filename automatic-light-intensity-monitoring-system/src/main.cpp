#include <Arduino.h>
#define ldr_pin A0
void setup() {
// write your initialization code here
pinMode(ldr_pin,INPUT);
    Serial.begin(9600);
    Serial.println("LDR Sensor Test");
}

void loop() {
// write your code here
    int ldr_value = analogRead(ldr_pin);
    int light_percent = map(ldr_value,0,1023,0,100);
    Serial.print("LDR RAW: ");
    Serial.print(ldr_value);
    Serial.print(" | Light: ");
    Serial.print(light_percent);
    Serial.println("%");
    delay(500);

}