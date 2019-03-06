void setup() {
  pinMode(8, OUTPUT); //Konfiguracja pinu 8 jako wyjście
}

void loop() {
  digitalWrite(8, HIGH); //Włączenie diody
  delay(1000); //Odczekanie 1 sekundy
  digitalWrite(8, LOW); //Wyłączenie diody
  delay(1000); //Odczekanie jednej sekundy
}
