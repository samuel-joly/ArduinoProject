/***** PLAISIR ARDUINO *****/

/*Projet: Le Moniteur serie.
  Exercice de retour d'informations au moniteur.
  Ce programme affiche des phrases complementaires et le résultat d'un calcul.
  Puis il renvoie la valeur du résultat sous differents format.

  Matériels:
  - Carte Arduino UNO => http://www.arduino.cc/en/Main/ArduinoBoardUno
*/
void setup() {//Programme de configuration, initialisation et test.

  /****** CONFIGURATIONS ******/
  Serial.begin(9600); //Configuration du moniteur série.

  /****** INITIALISATIONS ******/

  /****** TEST *****/
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.

}//Fin de setup().

void loop() {//Programme principal.
  Serial.println("***** Execution de loop() *****");//Affichage d'un message.

  //Déclarations des variables utiles.
  int X = 55; //Variable utile au calcul.
  int Y = 88; //Variable utile au calcul.
  int resultat; //Variable utile au resultat.

  //Exploitation des variables.
  resultat = X * Y; //Multiplication.
  /*Affichage de la phrase complemantaire avec un espace
    en fin de prhase*/
  Serial.print("Le resultat est: ");
  /*Affichage de la donnée contenu dans la variable "resultat".
    Avec un saut a la ligne avec println. */
  Serial.println(resultat);
  Serial.println(); //Saut à la ligne vierge.

  /*Affichage des trois formats de la donnée contenu dans la variable "resultat".
     Avec un saut a la ligne avec println. */
  //Affichage de la phrase complémantaire.
  Serial.print("Le resultat Decimale est: ");
  Serial.println(resultat, DEC); //Affichage au format Décimale.
  //Affichage de la phrase complémantaire.
  Serial.print("Le resultat Hexadecimale est: ");
  Serial.println(resultat, HEX); //Affichage au format Héxadécimale.
  //Affichage de la phrase complémantaire.
  Serial.print("Le resultat Binaire est: ");
  Serial.println(resultat, BIN); //Affichage au format Binaire.
  Serial.println(); //Saut à la ligne vierge.

  //Saut a la ligne avec l'autre methode "\n".
  Serial.print("Fin de programme \n");
  Serial.println(); //Saut à la ligne vierge.
  delay(3000); //Temporisation à la lecture (3s).

  while (1); //Arret forcé du programme.

}//Fin de loop()
