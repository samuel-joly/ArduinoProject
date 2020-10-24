
void MonHTML(EthernetClient cl) {
  cl.println("HTTP/1.1 200 OK"); // type du HTML
  File monFichier = SD.open("pagehtml.txt", FILE_READ);
  char c;
  while (c != -1) {
    cl.write(c);
     c = monFichier.read();
      
   
  }
  monFichier.close();
}
