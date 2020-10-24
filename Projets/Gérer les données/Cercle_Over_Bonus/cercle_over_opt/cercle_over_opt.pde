import processing.serial.*;
Serial myPort;  // The serial port


int circleSize = 200;   // Diametre du cercle

void setup() {
  size(640, 360);
  myPort = new Serial(this, Serial.list()[ ], 9600);
}

void draw() {


  stroke(0);



  switch (update()) {
  case 0:
    fill(255);
    ellipse(540, height/2, circleSize, circleSize);
    ellipse(100, height/2, circleSize, circleSize);
    ellipse(width/2, height/2, circleSize, circleSize);
    break;

  case 1:
    myPort.write('R');
    fill(255, 0, 0);
    ellipse(100, height/2, circleSize, circleSize);
    break;


  case 2:
    myPort.write("V");
    fill(0, 255, 0);
    ellipse(width/2, height/2, circleSize, circleSize);
    break;


  case 3:
    myPort.write("B");
    fill(0, 0, 255);
    ellipse(540, height/2, circleSize, circleSize);
    break;
  }
}


int update() {
     if ( overCircle(100, height/2, circleSize) ) {
      return 1;
    } else if (  overCircle(width/2, height/2, circleSize) ) {
      return 2;
    } else if (  overCircle(540, height/2, circleSize) ) {
      return 3;
    } else {
      return 0;
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