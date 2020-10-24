/*PLAISIR ARDUINO*/
/*La Boucle for*/
/*Travaux de mise en pratique*/

void setup() {
  Serial.begin(9600); //Ouverture et configuration de la vitesse de transmission du port serie.
  Serial.println("*** La boucle for ***"); // Affichage au moniteur (test).
} // fin de setup.

void loop() {
  //Configuration des broches de l'Arduino.
  for (int i = 4; i < 8 ; i++) { //Mise en place de la boucle.
    pinMode(i , OUTPUT); //Configuration des broches à la valeur de "i".
    Serial.print("La broche "); Serial.print(i); Serial.println(" est configuree en sortie."); //Affichage du message.
    delay(2000); //Arret temporisé du programme pour une lecture des éxecutions.
  }//fin de for.

  Serial.print("Fin de la boucle elle a atteint son but");

  while (1); //Arret forcé du programme.

}//fin de loop.

