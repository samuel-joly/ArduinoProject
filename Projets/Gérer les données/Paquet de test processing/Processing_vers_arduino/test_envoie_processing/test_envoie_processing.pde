import processing.serial.*;
Serial myPort;  // Nomdu port serie


void setup() {
  size(640, 360);
  myPort = new Serial(this, Serial.list()[ ], 9600);
}

void draw() {



  myPort.write('1');

  delay(1000);
  myPort.write('0');
  delay(1000);
}  