
void monurl(EthernetClient cl) {

  char lecturedata;

  lecturedata = cl.read();

  while (lecturedata != '\n') {

    mydata += lecturedata;
    lecturedata = cl.read();

  }
  Serial.print("mydata");
  Serial.println(mydata);
}
