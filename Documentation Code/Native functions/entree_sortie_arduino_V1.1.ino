
/****************************************************************************

ce programme reagis comme un bargraphe 
il allume les DEL en fonction de la valeur du potentiometre.

modified 23 Septembre 2015
  by contact@plaisirarduino.fr


*******************************************************************************/




int PinSelec = A0;    



void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);



}

void loop() {

  int InBroche = analogRead(PinSelec)/4;

  if ( InBroche > 64 )
  {
    digitalWrite(13, HIGH);   
  }
  else if ( InBroche < 64 )
  {
    digitalWrite(13, LOW);
  }
  
  if ( InBroche > 128 )
  {
    digitalWrite(12, HIGH);   
  }
  else if (InBroche < 128)
  {
    digitalWrite(12, LOW);
  }

  if ( InBroche > 192 )
  {
    digitalWrite(11, HIGH);   
  }
   else if (InBroche < 192)
  {
    digitalWrite(11, LOW);
  }
  
  if ( InBroche > 254 )
  {
    digitalWrite(10, HIGH);
  }
  
else if (InBroche < 254)
  {
    digitalWrite(10, LOW);
  }


 


}
