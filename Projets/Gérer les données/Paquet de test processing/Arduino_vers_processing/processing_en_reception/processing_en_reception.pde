
import processing.serial.*;
String sb;
Serial myPort;

void setup() {

  size(720, 720);  
  myPort = new Serial(this, Serial.list()[ ], 9600);
}

void draw() {
  while (myPort.available() > 0) {

    sb = myPort.readStringUntil('\n');
    if (sb == null)
    {
      sb="0";
    } else
    {
      background(255);
      fill(#2c74ba);
      translate(width/2-150, height/2);
      textSize(32);
      text(sb, 0, 0);
    }
  }
}