/****************************************************************************

Ce programme est un chenillard de DEL qui varie ne fonction du potentiometre.


modified 23 Septembre 2015
  by contact@plaisirarduino.fr

*******************************************************************************/



int analog = A0;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
 
 
}

void loop() {
          
    for (int i=10; i<14; i++)
    {
    digitalWrite(i, HIGH);
    int AnaTime = analogRead(analog);
    delay(AnaTime);

    }

     for (int i=10; i<14; i++)
    {
    digitalWrite(i, LOW);
    int AnaTime = analogRead(analog);
    delay(AnaTime);
    }


   

}





