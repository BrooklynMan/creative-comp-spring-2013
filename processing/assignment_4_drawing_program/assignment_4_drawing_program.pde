//adam mcbride
//assignment 4
//drawing program

int strokeWeight = 1;

int btnX = 20;
int btn1Y = 20;
int btn2Y = 50;
int btn3Y = 80;
int btn4Y = 110;
int btn5Y = 140;
int btn6Y = 170;
int btnHW = 25;



float x;
float y;
float px;
float py;
float easing = 0.2;

void setup() {
  size(500, 500);
  smooth();
  stroke(strokeWeight);
}

void draw() {
  // buttons
    //button 1
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn1Y) && (mouseY < btn1Y+btnHW) && (mousePressed)) {
      fill(0);
    } 
    else {
      fill(255,0,0);
    }
    rect(20, btn1Y, btnHW, btnHW);
    
    //button 2
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn2Y) && (mouseY < btn2Y+btnHW) && (mousePressed)) {
      fill(0);
      stroke(0,255,0);
    } 
    else {
      fill(0,255,0);
    }
    rect(20, btn2Y, btnHW, btnHW);
    
    //button 3
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn3Y) && (mouseY < btn3Y+btnHW) && (mousePressed)) {
      fill(0);
      stroke(0,0,255);
    } 
    else {
      fill(0,0,255);
    }
    rect(20, btn3Y, btnHW, btnHW);      
    
    //button 4
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn4Y) && (mouseY < btn4Y+btnHW) && (mousePressed)) {
      fill(0);
      stroke(255,255,255);
    } 
    else {
      fill(255);
    }
    rect(20, btn4Y, btnHW, btnHW);

    //button 5
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn5Y) && (mouseY < btn5Y+btnHW) && (mousePressed)) {
      fill(0);
      stroke(0,0,0);
    } 
    else {
      fill(0);
    }
    rect(20, btn5Y, btnHW, btnHW);
    
    //button 6
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn6Y) && (mouseY < btn6Y+btnHW) && (mousePressed)) {
      fill(0);
      stroke(0,0,0);
      background(200);
    } 
    else {
      fill(255);
    }
    rect(20, btn6Y, btnHW, btnHW);
    line(20, btn6Y, 45, btn6Y + 25);
    
  //drawing
  
    //easing
    float targetX = mouseX;
    x += (targetX - x) * easing;
    float targetY = mouseY;
    y += (targetY - y) * easing;
    
    //draw funtion
    if (mousePressed) {
      line(x, y, px, py);
    }
    py = y;
    px = x;
}

