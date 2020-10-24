/****************************************************************************

Ce programme ne fait rien d'autre que d'afficher sur
le moniteur serie la valeur en entree analogique A0 (modifiable).
Je l'utilise quand je veux regler ou connaitre la valeur entee d'une entree analogique
Une fois le reglage fait relancer le moniteur serie pour voir si la valeur est identique.



modified 23 Septembre 2015
  by contact@plaisirarduino.fr
*******************************************************************************/
int analog = A0;











int tbl[2] {0, 0};
int time = 10;


void setup() {
  
  Serial.begin(9600);
  
  int init_tbl = analogRead(analog); // variable de travail.
  
  tbl[0] = init_tbl; // Initialisation de la 1er valeurs du tableau.
  
 Serial.print("La valeur de A0 : ");Serial.print(tbl[0]*(5.0/1024));Serial.print(" V : "); Serial.println(init_tbl); //Affichage de la 1er valeur du tableau.
  
}

void loop() {
    
     int analog_val = analogRead(analog); //Lecture de l'entrée analogique.
      delay(time);//pause 
      tbl[0] = analog_val;//Integration de la valeur dans la 1er donnée du tableau
      //Serial.print("la valeur de tbl[0] est : ");Serial.println(tbl[0]);
      delay(333);//pause traitement
    
      analog_val = analogRead(analog);//Lecture de l'entrée analogique.
      delay(time);//pause
      tbl[1] = analog_val;//Integration de la valeur dans la 2em donnée du tableau
      //Serial.print("la valeur de tbl[1] est : ");Serial.println(tbl[1]);
      delay(time);//pause traitement
    
      if (tbl[1] < tbl[0] - 2 || tbl[1] > tbl[0] + 2) { //Conditionnment par comparaison des données du tableau.
        analog_val = analogRead(analog);//Lecture de l'entrée analogique.
        float scale = analog_val * (5.0/1024);//Mise à l'echelle.
        Serial.print("La valeur de A0 :  "); Serial.print(scale);Serial.print(" V : ");Serial.println(analog_val);//affichage au moniteur serie.



  }


}
