#include <Arduino.h>
int value = 0;
void setup() {
    Serial.begin(9600);
    pinMode(A0,OUTPUT);
// write your initialization code here
}

void loop() {
// write your code here
    value = analogRead(A0);
    Serial.println(value);
    delay(500);
}