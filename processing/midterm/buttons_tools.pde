// button function - tools
void buttonSetTools() {

  mouseClicked() {
    // pen size - increase
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn8Y) && (mouseY < btn8Y+btnHW) && (mousePressed)) {
      if (!click) {  
        myStrokeWeight++;
        click = true;
        println("click to true");
      }
    } else {
      click =false;
    }



    // pen size - decrease
    if ((mouseX > btnX) && (mouseX < btnX+btnHW) &&
      (mouseY > btn9Y) && (mouseY < btn9Y+btnHW) && (mousePressed)) {
      if (click) {  
        myStrokeWeight--;
        click = false;
      } 
      else {
        click = true;
      }
    }
  }
}
rect(20, btn8Y, btnHW, btnHW);
rect(20, btn9Y, btnHW, btnHW);

