#define RED_LED 8
#define YELLOW_LED 9
#define GREEN_LED 10

String data = "";

void setup() {
    Serial.begin(9600);
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);

    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
}
void loop() {
    if (Serial.available() > 0) {
        data = Serial.readStringUntil('\n');

        Serial.println("Start of streaming data");
        Serial.println(data);
        Serial.println("End of streaming data");


        if (data == "RED_ON") {
            digitalWrite(RED_LED, HIGH);
        }
        else if (data == "YELLOW_ON") {
            digitalWrite(YELLOW_LED, HIGH);
        }
        else if (data == "GREEN_ON") {
            digitalWrite(GREEN_LED, HIGH);
        }
        else if (data == "RED_OFF") {
            digitalWrite(RED_LED, LOW);
        }
        else if (data == "YELLOW_OFF") {
            digitalWrite(YELLOW_LED, LOW);
        }
        else if (data == "GREEN_OFF") {
            digitalWrite(GREEN_LED, LOW);
        }
        else if (data == "OFF") {
            digitalWrite(RED_LED, LOW);
            digitalWrite(YELLOW_LED, LOW);
            digitalWrite(GREEN_LED, LOW);
        }
        else if (data == "ON") {
            digitalWrite(RED_LED, HIGH);
            digitalWrite(YELLOW_LED, HIGH);
            digitalWrite(GREEN_LED, HIGH);
        }
        else {
            digitalWrite(RED_LED, HIGH);
            delay(500);
            digitalWrite(RED_LED, LOW);
            delay(500);
            digitalWrite(RED_LED, HIGH);
            delay(500);
        }
    }
}
