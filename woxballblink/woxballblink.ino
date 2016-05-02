/*
  Button

.
 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin

int led1 = 5;
int led2 = 6;
int led3 = 10;
int led4 = 11; // LED sequin
int led5 = 12;  // LED sequin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
    // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
   // initialize the first LED pin as an output.
  pinMode(led2, OUTPUT);
   // initialize the second LED pin as an output.
  pinMode(led3, OUTPUT);
   // initialize the third LED pin as an output. 
  pinMode(led4, OUTPUT);
   // initialize the fourth LED pin as an output.
  pinMode(led5, OUTPUT);
   // initialize the fourth LED pin as an output.
}

void blink() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  
  delay(300); 
  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);
  
  delay(300);
  digitalWrite(led3, HIGH);
  delay(300);
  digitalWrite(led3, LOW);
  
  delay(300); 
  digitalWrite(led4, HIGH);
  delay(300);
  digitalWrite(led4, LOW);
  
  delay(300); 
  digitalWrite(led5, HIGH);
  delay(300);
  digitalWrite(led5, LOW);
  delay(300); 
}


void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
   blink(); 
  } else {
    // turn LED off:
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
}
