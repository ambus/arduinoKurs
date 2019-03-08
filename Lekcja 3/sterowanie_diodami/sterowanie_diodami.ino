#define zielonaDioda 9
#define czerwonaDioda 8

String odebraneDane = "";

void setup()
{
    Serial.begin(9600);
    pinMode(zielonaDioda, OUTPUT);
    pinMode(czerwonaDioda, OUTPUT);

    digitalWrite(zielonaDioda, LOW);
    digitalWrite(czerwonaDioda, LOW);
}

void loop()
{
    if (Serial.available() > 0)
    {
        odebraneDane = Serial.readStringUntil('\n');
        Serial.println("Odebrano dane " + odebraneDane);

        if (odebraneDane == "zielona")
        {
            digitalWrite(zielonaDioda, HIGH);
            delay(1000);
            digitalWrite(zielonaDioda, LOW);
        }
        if (odebraneDane == "czerwona")
        {
            digitalWrite(czerwonaDioda, HIGH);
            delay(1000);
            digitalWrite(czerwonaDioda, LOW);
        }
    }
}