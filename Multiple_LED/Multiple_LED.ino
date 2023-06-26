int temprature = 20;
int ledRed = 4;
int ledGreen = 3;
int ledBlue = 2;

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  Serial.begin(9600);
  
  //run once
   if(temprature > 50){
    Serial.println("Red LED turnon");
  } else if(temprature <= 50 && temprature >=30){
    Serial.println("green LED turnon");
  } else {
    Serial.println("blue LED turnon");
  }

}

void loop()
{
  // runs multiple times
  if(temprature > 50){
    digitalWrite(ledRed, HIGH);
  } else if(temprature <= 50 && temprature >=30){
    digitalWrite(ledGreen, HIGH);
  } else {
    digitalWrite(ledBlue, HIGH);
  }
}