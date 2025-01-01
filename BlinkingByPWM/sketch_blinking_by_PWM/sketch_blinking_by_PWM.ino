int signalFilling = 0;
int change = 10;
bool reduce = false;

void setup() {
  pinMode(3, OUTPUT);

}

void loop() {
  analogWrite(3, signalFilling);

  if (reduce){
      if(signalFilling > 0){
        signalFilling = signalFilling  - change;
      }else{
        reduce = false;
      }
  }else{
      if(signalFilling < 255){
        signalFilling = signalFilling  + change;
      }else{
        reduce = true;
      }
  }

  delay(50);

}
