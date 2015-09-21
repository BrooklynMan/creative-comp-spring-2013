 const int buttonPin = 2;     // the number of the pushbutton pin
int buttonPushCounter = 1;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button
int photoPin = 5;// Photoresistor - light detector
int photoVal = 0;
const int ledPin = 10; // orange LED
int ledVal = LOW;
const int ledPinG = 11; // green LED
int ledValG = LOW;
const int ledPinB = 9; // blue LED
int ledValB = LOW;
long Time = 0; // 20 min time count.
long twoMinDark = 0;
long twoMinLight = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(buttonPin, INPUT);   
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly: 
  photoVal = analogRead(photoPin); // translates the photoresistor's values into LED values.
  buttonState = digitalRead(buttonPin);
//the button controls different tasks because of the buttonPushCounter:
    if (buttonState != lastButtonState) { // if the state has changed, increment the counter
      if (buttonState == HIGH) { // if the current state is HIGH then the button went from off to on:
        buttonPushCounter++;
        if (buttonPushCounter == 4) {
          buttonPushCounter = 1;  
        }
      } 
    }
  if(photoVal<100){
    Time ++; //when it gets dark, time starts to count.
    if( Time > 1 && Time < 500 && buttonPushCounter == 1 ) { // during the 20 min count, the blue LED is on.
      digitalWrite(ledPinB, HIGH);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPinG, LOW);
    }
    if( Time > 1 && Time < 500 && buttonPushCounter == 2 ) {// during the 20 min count, the green LED is on.
      digitalWrite(ledPinB, LOW);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPinG, HIGH);
    }
    if(Time > 1 && Time < 500 && buttonPushCounter == 3) { // during the 20 min count, the orange LED is on.
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPinB, LOW);
      digitalWrite(ledPinG, LOW);
    }
    if(Time > 500) { // when 20 min have passed since it got dark, the LED turns off.
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPinB, LOW);
      digitalWrite(ledPinG, LOW);
    }
// blue LED lights for a second when it's dark, after 20 min have passed
    if( Time >  500 && buttonPushCounter == 1) { // during the 20 min count, the LED is on.
      twoMinDark ++; // if the room is still dark and but 20 min have passed,
      //when the button is pressed - start another time counter, and turn on the light for a couple of seconds just to change the color.
      if(twoMinDark > 1 && twoMinDark < 100){
        digitalWrite(ledPinB, HIGH);
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPinG, LOW);
      }
      else if(twoMinDark > 100) {
        digitalWrite(ledPinB, LOW); 
      } 
      if (buttonState == HIGH && Time > 500) {
        twoMinDark = 0;
      } 
    }
// green LED lights for a second when it's dark, after 20 min have passed
    if( Time >  500 && buttonPushCounter == 2) { // during the 20 min count, the LED is on.
      twoMinDark ++; // if the room is still dark and but 20 min have passed,
      //when the button is pressed - start another time counter, and turn on the light for a couple of seconds just to change the color.
      if(twoMinDark > 1 && twoMinDark < 100){
        digitalWrite(ledPinB, LOW);
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPinG, HIGH);
      }
      else if(twoMinDark > 100) {
        digitalWrite(ledPinG, LOW); 
      } 
      if (buttonState == HIGH && Time > 500) {
        twoMinDark = 0;
      } 
    }
// orange LED lights for a second when it's dark, after 20 min have passed
    if( Time >  500 && buttonPushCounter == 3) { // during the 20 min count, the LED is on.
      twoMinDark ++; // if the room is still dark and but 20 min have passed,
      //when the button is pressed - start another time counter, and turn on the light for a couple of seconds just to change the color.
      if(twoMinDark > 1 && twoMinDark < 100){
        digitalWrite(ledPinB, LOW);
        digitalWrite(ledPin, HIGH);
        digitalWrite(ledPinG, LOW);
      }
      else if(twoMinDark > 100) {
        digitalWrite(ledPin, LOW); 
      } 
      if (buttonState == HIGH && Time > 500) {
        twoMinDark = 0;
      } 
    }
    Serial.println(Time);
  }
  else{ // if the room is lit:
    digitalWrite(ledPin, LOW);  
    digitalWrite(ledPinB, LOW);
    digitalWrite(ledPinG, LOW);
    Time = 0; // when the room is lit, Time is going back to zero, and all LED are off.
 
 
     if(buttonPushCounter == 1) { // during the 20 min count, the LED is on.
      twoMinLight ++; // 
      //when the button is pressed - start another time counter, and turn on the light for a couple of seconds just to change the color.
      if(twoMinLight > 1 && twoMinLight < 500){
        digitalWrite(ledPinB, HIGH);
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPinG, LOW);
      }
      else if(twoMinLight > 500) {
        digitalWrite(ledPinB, LOW); 
      } 
      if (buttonState == HIGH && Time == 0) {
        twoMinLight = 0;
      } 
    }
 
 
 
   if(buttonPushCounter == 2) { // during the 20 min count, the LED is on.
      twoMinLight ++; // 
      //when the button is pressed - start another time counter, and turn on the light for a couple of seconds just to change the color.
      if(twoMinLight > 1 && twoMinLight < 500){
        digitalWrite(ledPinB, LOW);
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPinG, HIGH);
      }
      else if(twoMinLight > 500) {
        digitalWrite(ledPinG, LOW); 
      } 
      if (buttonState == HIGH && photoVal > 100) {
        twoMinLight = 0;
      } 
    }   
 
 
    if(buttonPushCounter == 3) { // during the 20 min count, the LED is on.
      twoMinLight ++; // 
      //when the button is pressed - start another time counter, and turn on the light for a couple of seconds just to change the color.
      if(twoMinLight > 1 && twoMinLight < 500){
        digitalWrite(ledPinB, LOW);
        digitalWrite(ledPin, HIGH);
        digitalWrite(ledPinG, LOW);
      }
      else if(twoMinLight > 500) {
        digitalWrite(ledPin, LOW); 
      } 
      if (buttonState == HIGH && photoVal > 100) {
        twoMinLight = 0;
      } 
    }
 
  }
  lastButtonState = buttonState;
}
