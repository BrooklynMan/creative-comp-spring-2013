/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * 5 LED anodes (long leg) attached to digital output 13-9
 * 5 LED cathode (short leg) attached to ground via a 220 ohm resistor
 
 * Note: because most Arduinos have a built-in LED attached 
 to pin 13 on the board, the LED is optional.
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */
#include "pitches.h"

int sensorPin = A0;      // select the input pin for the potentiometer

int ledPin1 = 9;         // select the pins for the LEDs
int ledPin2 = 10;
int ledPin3 = 11;
int ledPin4 = 12;
int ledPin5 = 13;
int buttonPin = 2;        // the number of the pushbutton pin

int melody[] = {          // notes in the melody:
  NOTE_C4, 
  NOTE_G3,
  NOTE_G3,
  NOTE_A3,
  NOTE_G3,0, 
  NOTE_B3, 
  NOTE_C4
};

int noteDurations[] = {    // note durations: 4 = quarter note, 8 = eighth note, etc.:
  4, 8, 8, 4,4,4,4,4 
};

// variables will change:
int buttonState = 0;        // variable for reading the pushbutton status
int sensorValue = 0;        // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);  
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);  
  pinMode(ledPin4, OUTPUT);  
  pinMode(ledPin5, OUTPUT);  

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT); 
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) { 

    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);   

    // turn the ledPin on and then off
    digitalWrite(ledPin1, HIGH); 
    tone(8, NOTE_A4,1000);
    delay(sensorValue); 
    digitalWrite(ledPin1, LOW);
    noTone(8);

    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue);          

    // turn the ledPin on and then off
    digitalWrite(ledPin2, HIGH); 
    tone(8, NOTE_B4,1000);
    delay(sensorValue); 
    digitalWrite(ledPin2, LOW); 
    noTone(8);



    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue);          

    // turn the ledPin on and then off
    digitalWrite(ledPin3, HIGH);
    tone(8, NOTE_C4,1000); 
    delay(sensorValue); 
    digitalWrite(ledPin3, LOW); 
    noTone(8);

    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue);          

    // turn the ledPin on and then off
    digitalWrite(ledPin4, HIGH);
    tone(8, NOTE_D4,1000); 
    delay(sensorValue); 
    digitalWrite(ledPin4, LOW); 
    noTone(8);

    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue);          

    // turn the ledPin on and then off
    digitalWrite(ledPin5, HIGH);
    tone(8, NOTE_E4,1000); 
    delay(sensorValue); 
    digitalWrite(ledPin5, LOW); 
    noTone(8);

    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue); 
  }  

}







