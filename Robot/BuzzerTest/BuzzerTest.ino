#define LED 13
#define BUZZER 10
#define BUTTON 2


void setup() {

  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);

  digitalWrite(LED, LOW);
  digitalWrite(BUZZER, LOW);

  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}

void loop() {
  if(digitalRead(BUTTON) == LOW){
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(500);
  }else{
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);
  }

}
