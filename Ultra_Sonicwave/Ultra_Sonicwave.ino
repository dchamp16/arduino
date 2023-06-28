// This code measures the distance to an object using an ultrasonic sensor.
// The ultrasonic sensor emits a sound wave and measures the time it takes
// for the sound wave to travel to the object and back.

int inches = 0; // This variable will store the distance in inches.
int cm = 0;     // This variable will store the distance in centimeters.

// This function measures the time it takes for a sound wave to travel to an object and back.
// The triggerPin is the pin that sends the sound wave, and the echoPin is the pin
// that receives the sound wave.
int readUltrasonicDistance(int triggerPin, int echoPin)
{

    // Set the trigger pin as an output.
    // This means that the Arduino can send a signal to the trigger pin.
    pinMode(triggerPin, OUTPUT);

    // Send a short pulse to the trigger pin.
    // The pulse will be 2 microseconds long, followed by a 10 microsecond delay.
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);

    // Set the echo pin as an input.
    // This means that the Arduino can listen for a signal on the echo pin.
    pinMode(echoPin, INPUT);

    // Return the time it takes for the echo pin to go high.
    // The time is measured in microseconds.
    return pulseIn(echoPin, HIGH);
}

// This function is called once when the Arduino starts up.
// It initializes the serial port so that we can print the results to the computer.
void setup()
{
    // Initialize the serial port at 9600 baud.
    Serial.begin(9600);
}

// This function is called repeatedly until the Arduino is turned off.
// It measures the distance in centimeters, converts it to inches, and prints the results to the computer.
void loop()
{
    // Measure the distance in centimeters.
    cm = 0.01723 * readUltrasonicDistance(7, 7);

    // Convert the distance to inches.
    inches = (cm / 2.54);

    // Create a string that contains the distance in inches and centimeters.
    String distanceString = String(inches) + " in, " + String(cm) + " cm";

    // Print the distance string to the serial port.
    Serial.println(distanceString);
    // Wait 100 milliseconds before measuring the distance again.
    delay(100);
}
