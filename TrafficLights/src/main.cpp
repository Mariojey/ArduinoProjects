#include <Arduino.h>
void setup() {

    Serial.begin(9600);

    pinMode(8, OUTPUT); //RED
    pinMode(9, OUTPUT); //YELLOW
    pinMode(10, OUTPUT); //GREEN
}

void loop() {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);

    Serial.println("Wait");

    delay(1000);

    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);

    Serial.println("Be Ready!");

    delay(1000);

    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    Serial.println("Go!");

    delay(1000);

    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);

    Serial.println("Stop!");

    delay(1000);
}