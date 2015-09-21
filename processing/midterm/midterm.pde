// creative computing
// spring, 2013
// midterm project: enhanced drawing app
// adam mcbride
// started: 3/7/2013
// finished: 

// variables
  // integer
    // buttons - color
      int btnX = 20;
      int btn1Y = 20;
      int btn2Y = 50;
      int btn3Y = 80;
      int btn4Y = 110;
      int btn5Y = 140;
      int btn6Y = 170;
      int btn7Y = 200;
      int btnHW = 25;
    // buttons - tools
      int btn8Y = 260;
      int btn9Y = 290;
      boolean click = false;
    // other
      int myStrokeWeight = 1;
  
  // floating-point
      float x;
      float y;
      float px;
      float py;
      float easing = 0.2;
  // string
  

// setup
void setup() {
  size(500,500);
  smooth();
  stroke(1);
  background(200);
}

// main draw function
void draw() {
  buttonSetColor();
  buttonSetTools();
  drawTools();
  println(click);
}




