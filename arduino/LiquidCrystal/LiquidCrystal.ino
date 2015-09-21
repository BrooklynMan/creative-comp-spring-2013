/*

 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 6 from +5V
 * 10K resistor attached to pin 2 from ground
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 
 */


// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 6;     // the number of the pushbutton pin

// variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT); 

  // Print a message to the LCD.
  // lcd.print("hello, world!");


}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  delay(500);

  if (buttonState != lastButtonState) { // if the state has changed, increment the counter
    if (buttonState == HIGH) { // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      if (buttonPushCounter == 4) {
        buttonPushCounter = 0;  

      }
    } 
  }


  if(buttonPushCounter == 0){
    lcd.setCursor(0,0);
    lcd.print("hello, world");
    lcd.setCursor(0, 1);
    lcd.print("#5 is alive!");
  }
  if(buttonPushCounter == 1){
    lcd.setCursor(0,0);
    lcd.print("super duper!");
    lcd.setCursor(0, 1);
    lcd.print("that's nice!");
  }
  if(buttonPushCounter == 2){
    lcd.setCursor(0,0);
    lcd.print("if you love ");
    lcd.setCursor(0, 1);
    lcd.print("it, kiss it!");
  }
  if(buttonPushCounter == 3){
    lcd.setCursor(0,0);
    lcd.print("000000000000");
    lcd.setCursor(0, 1);
    lcd.print("------------");
  }

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  // lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  // lcd.print(millis()/1000);
}








