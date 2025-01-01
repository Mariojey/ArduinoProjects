int readedValue = 0;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  readedValue = analogRead(A5);
  readedValue = map(readedValue, 0, 1023, 1, 3);

  switch (readedValue) {
    case 1:
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      break;
    case 2:
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      break;
    case 3:
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      break;
  }
  delay(120);

}
