const int LED = 7;
const int BUTTON = 6;

void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop()
{
    if (digitalRead(BUTTON) == 1)
    {
        digitalWrite(LED, HIGH);
        Serial.println(digitalRead(BUTTON));
        Serial.println("Peter");
    }
    else
    {
        digitalWrite(LED, LOW);
        Serial.println("Lauren");
    }
}