/*
const int LED = 13; defines a constant named LED that is equal to 13. This means that the value of LED will always be 13, and it cannot be changed.

const int BUTTON = 7; defines a constant named BUTTON that is equal to 7. This means that the value of BUTTON will always be 7, and it cannot be changed.

int val = 0; defines a variable named val that is initialized to 0. This means that the value of val will start out at 0, and it can be changed later on.

void setup() { This line marks the beginning of the setup() function. The setup() function is called once, when the Arduino starts up. It is used to initialize the Arduino and set up any necessary settings.

pinMode(LED, OUTPUT); This line sets the LED pin as an output. This means that the Arduino can send a signal to the LED pin.

pinMode(BUTTON, INPUT); This line sets the BUTTON pin as an input. This means that the Arduino can read the value of the BUTTON pin.

Serial.begin(9600); This line initializes the serial communication at 9600 baud. This means that the Arduino can send and receive data at a rate of 9600 bits per second.

void loop() { This line marks the beginning of the loop() function. The loop() function is called repeatedly, forever. It is used to run the main code of the Arduino program.

val = digitalRead(BUTTON); This line reads the value of the BUTTON pin. The value of the BUTTON pin will be either HIGH or LOW.
Serial.print(val); This line prints the value of the BUTTON pin to the serial monitor. The serial monitor is a window that shows the output of the Arduino program.

if (val == HIGH) { This line checks if the value of the BUTTON pin is HIGH. If it is, the code inside the if statement will be executed.
digitalWrite(LED, HIGH); This line turns on the LED.

else { This line is executed if the value of the BUTTON pin is not HIGH.

digitalWrite(LED, LOW); This line turns off the LED.
*/

// This code defines a LED connected to pin 13 and a button connected to pin 7.
const int LED = 13;
const int BUTTON = 7;
int val = 0;

void setup()
{                           // This function is called once, when the Arduino starts up.
    pinMode(LED, OUTPUT);   // This line sets the LED pin as an output.
    pinMode(BUTTON, INPUT); // This line sets the button pin as an input.
    Serial.begin(9600);     // This line initializes the serial communication at 9600 baud.
}

void loop()
{                              // This function is called repeatedly, forever.
    val = digitalRead(BUTTON); // This line reads the value of the button pin.
    Serial.print(val);         // This line prints the value of the button pin to the serial monitor.
    if (val == HIGH)
    {                            // This line checks if the value of the button pin is HIGH.
        digitalWrite(LED, HIGH); // If the value of the button pin is HIGH, this line turns on the LED.
    }
    else
    { // Otherwise, this line turns off the LED.
        digitalWrite(LED, LOW);
    }
}