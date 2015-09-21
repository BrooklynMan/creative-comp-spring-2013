// button function - colors
void buttonSetColor() {

  //button 1
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn1Y) && (mouseY < btn1Y+btnHW) && (mousePressed)) {
    fill(0);
    stroke(255, 0, 0);
  } 
  else {
    fill(255, 0, 0);
  }
  rect(20, btn1Y, btnHW, btnHW);


  //button 2 - green
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn2Y) && (mouseY < btn2Y+btnHW) && (mousePressed)) {
    fill(0);
    stroke(0, 255, 0);
  } 
  else {
    fill(0, 255, 0);
  }
  rect(20, btn2Y, btnHW, btnHW);

  //button 3 - blue
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn3Y) && (mouseY < btn3Y+btnHW) && (mousePressed)) {
    fill(0);
    stroke(0, 0, 255);
  } 
  else {
    fill(0, 0, 255);
  }
  rect(20, btn3Y, btnHW, btnHW);      

  //button 4 - white
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn4Y) && (mouseY < btn4Y+btnHW) && (mousePressed)) {
    fill(0);
    stroke(255, 255, 255);
  } 
  else {
    fill(255);
  }
  rect(20, btn4Y, btnHW, btnHW);

  //button 5 - black
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn5Y) && (mouseY < btn5Y+btnHW) && (mousePressed)) {
    fill(0);
    stroke(0, 0, 0);
  } 
  else {
    fill(0);
  }
  rect(20, btn5Y, btnHW, btnHW);

  //button 6 - eraser tool
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn6Y) && (mouseY < btn6Y+btnHW) && (mousePressed)) {
    fill(200);
    stroke(200);
  } 
  else {
    fill(190);
  }
  rect(20, btn6Y, btnHW, btnHW);

  //button 7 - clear tool
  if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
    (mouseY > btn7Y) && (mouseY < btn7Y+btnHW) && (mousePressed)) {
    fill(0);
    stroke(0, 0, 0);
    background(200);
  } 
  else {
    fill(255);
  }
  rect(20, btn7Y, btnHW, btnHW);
  line(20, btn7Y, 45, btn7Y + 25);
}

