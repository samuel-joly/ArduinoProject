
void ecritureSD(int ledrouge, int ledbleu, int ledverte) {

  File myFile = SD.open("pagehtml.txt", FILE_WRITE);

  // if the file opened okay, write to it:
  if (myFile) {

   if (ledrouge == 1) {
      myFile.seek(413);
      myFile.println("checked");
      myFile.seek(477);
      myFile.println("       ");
   }
    if (ledrouge == 0) {
      myFile.seek(413);
      myFile.println("       ");
      myFile.seek(477);
      myFile.println("checked");
    }
   if (ledbleu == 1) {
      myFile.seek(559);
     myFile.println("checked");
     myFile.seek(623);
      myFile.println("       ");
  }
    if (ledbleu == 0) {
      myFile.seek(559);
      myFile.println("       ");
      myFile.seek(623);
      myFile.println("checked");
    }
    if (ledverte == 1) {

      myFile.seek(704);
      myFile.println("checked");

      myFile.seek(769);
      myFile.println("       ");
    } 
    if (ledverte == 0) {
      myFile.seek(704);
      myFile.println("       ");

      myFile.seek(769);
      myFile.println("checked");
    }

  // close the file:
  myFile.close();
  Serial.println("done.");
} else {
  // if the file didn't open, print an error:
  Serial.println("error opening test.txt");
}

}
