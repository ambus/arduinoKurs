void setup() {
    Serial.begin(9600);
    Serial.println("Witaj w Forbocie!");
}

void loop() {
    delay(5000);
    Serial.println("Mineło 5 sekund");
}