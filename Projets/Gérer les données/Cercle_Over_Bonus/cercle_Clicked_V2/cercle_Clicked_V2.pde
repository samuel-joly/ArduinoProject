import processing.serial.*;
Serial myPort;  // Nomdu port serie

int circleSize = 200;   // Diametre du cercle
int circleOver = 0;

void setup() {
  size(640, 360);
  myPort = new Serial(this, Serial.list()[ ], 9600);
  fill(255);
  ellipse(540, height/2, circleSize, circleSize);
  ellipse(100, height/2, circleSize, circleSize);
  ellipse(width/2, height/2, circleSize, circleSize);
}

void draw() {

  if ( circleOver == 1) 
  {
    myPort.write('R');
    fill(255, 0, 0);
    ellipse(100, height/2, circleSize, circleSize);
    fill(255);
    ellipse(width/2, height/2, circleSize, circleSize);
    ellipse(540, height/2, circleSize, circleSize);
  }
  if ( circleOver == 2) 
  {
    myPort.write('V');
    fill(0, 255, 0);
    ellipse(width/2, height/2, circleSize, circleSize);
    fill(255);
    ellipse(100, height/2, circleSize, circleSize);
    ellipse(540, height/2, circleSize, circleSize);
    
  } else if ( circleOver ==3 ) {
    myPort.write("B");
    fill(0, 0, 255);
    ellipse(540, height/2, circleSize, circleSize);
    fill(255);
    ellipse(100, height/2, circleSize, circleSize);
    ellipse(width/2, height/2, circleSize, circleSize);
    
  } else if ( circleOver == 0)  {
   
    fill(255);
    ellipse(100, height/2, circleSize, circleSize);
    ellipse(width/2, height/2, circleSize, circleSize);
    ellipse(540, height/2, circleSize, circleSize);
  }
}


void mousePressed() {
  if ( overCircle(100, height/2, circleSize) ) {
    circleOver = 1;
  } else if (  overCircle(width/2, height/2, circleSize) ) {
    circleOver = 2;
  } else if (  overCircle(540, height/2, circleSize) ) {
    circleOver = 3;
  }
  else
   {
    circleOver = 0;
  }
}





boolean overCircle(int x, int y, int diameter) {
  float disX = x - mouseX;
  float disY = y - mouseY;
  if (sqrt(sq(disX) + sq(disY)) < diameter/2 ) {
    return true;
  } else {
    return false;
  }
}