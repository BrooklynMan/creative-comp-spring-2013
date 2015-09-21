// bouncing ball program
// class example


// variable declarations
  int posX1;
  int posY1;
  
  int posX2;
  int posY2;
  
  int speedX1;
  int speedY1;
  
  int speedX2;
  int speedY2;  
  
  int ballRadius1 = 25;
  int ballRadius2 = 10;


void setup() {

  size(400,400);
  background(255);
  
  posX1 = width/2;
  posY1 = height/2;

  posX2 = width/2;
  posY2 = height/2;

  speedX1 = 3;    // horizontal speed
  speedY1 = 4;    // vertical speed
  
  speedX2 = 2;    // horizontal speed
  speedY2 = 5;    // vertical speed
  
}

void draw() {
  
  background(255);

  // balls
    ellipse(posX1, posY1, ballRadius1*2, ballRadius1*2);        // ball 1
    ellipse(posX2, posY2, ballRadius2*2, ballRadius2*2);    // ball 2
  
  // ball 1 bounce function
  
    if (posX1 >= (width - ballRadius1) || posX1 <= (0 + ballRadius1)) {      
      speedX1 = -speedX1;      
    } else if (posY1 >= (height - ballRadius1) || posY1 <= (0 + ballRadius1)) {      
      speedY1 = -speedY1;      
    }  
    
  // ball 2 bounce function
  
    if (posX2 >= (width - ballRadius2) || posX2 <= (0 + ballRadius2)) {      
      speedX2 = -speedX2;
    } else if (posY2 >= (height - ballRadius2) || posY2 <= (0 + ballRadius2)) {
      speedY2 = -speedY2;
    }
  
  // change balls' position based on speed

    // ball 1
      posX1 += speedX1;    // posX1 = posX1 + speedX1
      posY1 += speedY1;    // posY1 = posY1 = speedY1
    
    // ball 2
      posX2 += speedX2;    // posX1 = posX1 + speedX12
      posY2 += speedY2;    // posY1 = posY1 = speedY1
    
}
