/*PLAISIR ARDUINO*/ 
/*La Boucle for*/ 
/*Travaux de mise en pratique*/ 

void setup() {
 Serial.begin(9600); //Ouverture et configuration de la vitesse de transmission du port serie.
 Serial.println("*** La boucle for ***"); // Affichage au moniteur (test).  
 } // fin de setup.

void loop() {
 
 for (int i= 0; i< 8 ;i++){ //Mise en place de la boule.
  Serial.print("Execution de la boucle i vaut "); //Affichage d'un message complementaire a la valeur de "i".
  Serial.println(i); //Affichage de la valeur de "i".

  delay(2000); //Arret temporisé du programme pour une lecture des éxecutions.
 }//fin de for.

 Serial.print("Fin de la boucle elle a atteint son but");

 while(1); //Arret forcé du programme.
  
}//fin de loop.

