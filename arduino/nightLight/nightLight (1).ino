/*

 digital input from a button to digital output to an LED to turn on or 
 off & another digital out LED which blinks.
 
 
 The circuit:
 * button connected to digital pin 2 to 10K resistor to ground
 * LED connected from digital pin 9 to 220 resistor to ground
 * LED connected from digital pin 10 to 220 resistor to ground
 * LED connected from digital pin 11 to 220 resistor to ground
 * Photoresistor attached to analog input 0 to 4.7k resistor to ground
 * one side pin (either one) to ground
 * the other side pin to +5V
 
 created by adam mcbride
 4 april 2013
 
 */

const int button = 2;             // the number of the button pin
const int ledPin1 = 9;      // Analog output pin that the LED is attached to
const int ledPin2 = 10;     // Analog output pin that the LED is attached to
const int ledPin3 = 11;     // Analog output pin that the LED is attached to
const int sensorPin = A0;      // select the input pin for the potentiometer

int sensorValue = 0;              // variable to store the value coming from the potentiometer
int outputValue = 0;              // value output to the PWM (analog out)

int buttonState = 0;
int ledState = LOW;             // ledState used to set the LED

long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval; 

void setup() {
  pinMode(ledPin1, OUTPUT);      
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT);
  pinMode(button, INPUT);     
  
  Serial.begin(9600);
}

void loop(){
  int sensorReading = analogRead(A0);
  
  Serial.println(sensorReading);
}












