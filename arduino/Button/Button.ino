/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 12 to 100 resistor to ground 
 * LED attached from pin 13 to 100 resistor to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 * Speaker attached from pin 8 to Speaker to 100 resistor to ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

#include "pitches.h"

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin1 =  13;      // the number of the LED pin 1
const int ledPin2 =  12;      // the number of the LED pin 2

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
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin1, HIGH);  
    digitalWrite(ledPin2, HIGH);

    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 8; thisNote++) {

      // to calculate the note duration, take one second 
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000/noteDurations[thisNote];
      tone(8, melody[thisNote],noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }

  } 
  else {
    // turn LED off:
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW); 
  }
}





