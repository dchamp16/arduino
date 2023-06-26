static int temprature;
int ledRed = 4;
int ledGreen = 3;
int ledBlue = 2;

void setup()
{

  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  Serial.begin(9600);

  temprature = random(100);
  Serial.println(temprature);

  // run once
  if (temprature > 50)
  {
    Serial.println("Red LED turnon: " + temprature);
  }
  else if (temprature <= 50 && temprature >= 30)
  {
    Serial.println("green LED turnon: " + temprature);
  }
  else
  {
    Serial.println("blue LED turnon: " + temprature);
  }
}

void loop()
{
  // runs multiple times
  if (temprature > 50)
  {
    digitalWrite(ledRed, HIGH);
  }
  else if (temprature <= 50 && temprature >= 30)
  {
    digitalWrite(ledGreen, HIGH);
  }
  else
  {
    digitalWrite(ledBlue, HIGH);
  }
}