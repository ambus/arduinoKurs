#define diodaCzerwona 8
#define diodaZielona 9
#define czujnikOkna 10


void setup()
{
    Serial.begin(9600);
    pinMode(diodaCzerwona, OUTPUT);
    pinMode(diodaZielona, OUTPUT);
    pinMode(czujnikOkna, INPUT_PULLUP);

    digitalWrite(diodaCzerwona, LOW);
    digitalWrite(diodaZielona, LOW);
}

void loop()
{
    if (digitalRead(czujnikOkna) == LOW)
    {
        digitalWrite(diodaZielona, HIGH);
        digitalWrite(diodaCzerwona, LOW);
    }
    else
    {
        digitalWrite(diodaZielona, LOW);
        digitalWrite(diodaCzerwona, HIGH);
        Serial.println("UWAGA! Alarm! Okno nie jest zamknięte");
        while(digitalRead(czujnikOkna) == HIGH) {
            delay(25);
        }
    }
}