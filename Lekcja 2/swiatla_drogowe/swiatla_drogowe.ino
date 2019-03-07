void setup()
{
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(7, INPUT_PULLUP);

  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

void loop()
{
  digitalWrite(10, LOW); //Czerwona
  digitalWrite(9, LOW);  //Pomarańczowa
  digitalWrite(8, HIGH); //Zielona

  delay(1000); //Zatrzymujemy program przed wejsciem do pętli na 1 sekunde
  while (digitalRead(7) == HIGH)
  {
  } //Czekaj na wciśnięcie przycisku

  digitalWrite(10, LOW); //Czerwona
  digitalWrite(9, HIGH); //Pomarańczowa
  digitalWrite(8, LOW);  //Zielona

  delay(1000); //Zatrzymujemy program przed wejsciem do pętli na 1 sekunde
  while (digitalRead(7) == HIGH)
  {
  } //Czekaj na wciśnięcie przycisku

  digitalWrite(10, HIGH); //Czerwona
  digitalWrite(9, LOW);   //Pomarańczowa
  digitalWrite(8, LOW);   //Zielona

  delay(1000); //Zatrzymujemy program przed wejsciem do pętli na 1 sekunde
  while (digitalRead(7) == HIGH)
  {
  } //Czekaj na wciśnięcie przycisku

  digitalWrite(10, HIGH); //Czerwona
  digitalWrite(9, HIGH);  //Pomarańczowa
  digitalWrite(8, LOW);   //Zielona

  delay(1000); //Zatrzymujemy program przed wejsciem do pętli na 1 sekunde
  while (digitalRead(7) == HIGH)
  {
  } //Czekaj na wciśnięcie przycisku
}
