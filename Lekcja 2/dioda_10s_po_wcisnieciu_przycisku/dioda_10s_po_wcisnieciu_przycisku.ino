void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  digitalWrite(8, LOW);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(7) == LOW) {
    digitalWrite(8, HIGH);
    delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
        delay(1000);
    blink();
  } 
}

void blink() {
    digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
}
