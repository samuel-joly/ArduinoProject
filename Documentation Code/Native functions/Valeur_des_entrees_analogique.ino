/****************************************************************************

Ce programme ne fait rien d'autre que d'afficher sur
le moniteur serie la valeur des entrees de A0 a A5.
Je l'utilise quand je veux connaitre la valeur de toutes mes entrees analogique.

modified 23 Septembre 2015
  by contact@plaisirarduino.fr
  
*******************************************************************************/



int vartable[6] {0,0,0,0,0,0};



void setup() {
  
  Serial.begin(9600);
delay (100);
  for (int i = 0; i < 6; i++)
  {
  
     int varAssign = analogRead(i); // variable de travail.
     vartable[i] = varAssign;
    Serial.print("La valeur est de A"); Serial.print(i); Serial.print(": ");Serial.print(vartable[i] * (5.0 / 1024)); Serial.print(" V : "); Serial.println(vartable[i]); //Affichage de la 1er valeur du tableau.
  }
}

void loop() {

  
  }



