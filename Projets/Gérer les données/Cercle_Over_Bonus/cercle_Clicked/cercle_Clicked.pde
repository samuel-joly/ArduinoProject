import processing.serial.*;
Serial myPort;  // Nomdu port serie

int circleSize = 200;   // Diametre du cercle
int circleRouge = 0;
int circleVert = 0;
int circleBleu = 0;
int circleOver = 0;
void setup() {
  size(640, 360);
  myPort = new Serial(this, Serial.list()[ ], 9600);
  fill(255);
  ellipse(100, height/2, circleSize, circleSize);
  ellipse(width/2, height/2, circleSize, circleSize);
  ellipse(540, height/2, circleSize, circleSize);
}

void draw() {

  if ( circleRouge == 1 ) 
  {


    myPort.write('R');
    fill(255, 0, 0);
    ellipse(100, height/2, circleSize, circleSize);
  }
  else if ( circleRouge == 0 ) 
  {

    fill(255);
    ellipse(100, height/2, circleSize, circleSize);
  }


  if ( circleVert == 1) 
  {
    myPort.write('V');
    fill(0, 255, 0);
    ellipse(width/2, height/2, circleSize, circleSize);
  } 

  else if ( circleVert == 0 ) 
  {

    fill(255);
    ellipse(width/2, height/2, circleSize, circleSize);
  } 
  if ( circleBleu == 1 ) {
    myPort.write("B");
    fill(0, 0, 255);
    ellipse(540, height/2, circleSize, circleSize);
  } 
 else if ( circleBleu == 0 ) 
  {

    fill(255);
    ellipse(540, height/2, circleSize, circleSize);
  }
}


void mousePressed() {
  if ( (overCircle(100, height/2, circleSize) )) {
    if (circleRouge == 1)
    {
      circleRouge = 0;
    } else
    {
      circleRouge = 1;
    }
  } else if (  overCircle(width/2, height/2, circleSize) ) {

    if (circleVert == 1)
    {
      circleVert = 0;
    } else 

    {
      circleVert = 1;
    }
  } else if (  overCircle(540, height/2, circleSize) ) {
    if (circleBleu == 1)
    {
      circleBleu = 0;
    } else 

    {
      circleBleu = 1;
    }
  }
  else
  {
  
  circleBleu = 0;
  circleVert = 0;
  circleRouge = 0;
  
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