int x;
int y;

float bodyHeight;

int buttonX;
int buttonY;

void setup() {
  size(800, 800);
  background(100);
  smooth();
  ellipseMode(RADIUS);
  strokeWeight(1);
}

void draw() {
  background(100);
  
  bodyHeight = height-mouseY;
  
  if (bodyHeight >= 500) {
    bodyHeight = 500;
  } else if (bodyHeight <= 200) {
    bodyHeight = 200;
  }
  
  // body
  fill(75,23,99);
  rect(275, 300, 250, bodyHeight);
  
  // head
  fill(200,28,2);
  ellipse(400, 200, 100, 100);
  
  // feet
  fill(125,84,92);
  rect(200, 600, 400, 50);
  
  //button
  fill(255);
  rect(350, 700, 100, 50);
  
}
