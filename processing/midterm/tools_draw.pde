void drawTools() {
  //drawing

  //easing
  float targetX = mouseX;
  x += (targetX - x) * easing;
  float targetY = mouseY;
  y += (targetY - y) * easing;

  //draw funtion
  strokeWeight(myStrokeWeight);
  if (mousePressed) {
    line(x, y, px, py);
  }
  py = y;
  px = x;
}

