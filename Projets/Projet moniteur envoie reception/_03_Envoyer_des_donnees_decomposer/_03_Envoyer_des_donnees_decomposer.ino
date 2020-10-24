/***** PLAISIR ARDUINO *****/

/*Projet: Le Moniteur serie.
  Exercice de décomposition d'une phrase.
  Ce programme affiche un à un chaque mot d'une phrase envoyé par le moniteur.
  La décomposition ce fait en référence au code ASCII 10 et 32.
  10 = au fin de ligne et 32 = au espaces.

  Une fois le la décomposition faite nous affichons la phrase envoyé.

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

  //Déclaration locale des variable utiles.
  char acquis_donnees; //Variable recevant les données transmise.

  //Déclaration local d'objet.
  String chaineCaractere = ""; //Objet recevant les chaînes de caractères.
  String chaineCaractere2 = ""; //Objet recevant les chaînes de caractères.

  //Contrôle de la présence de données dans le buffer.
  while (Serial.available() > 0) { //Condition d'execution de while.
    //Lecture du buffer et chargement des données.
    acquis_donnees = Serial.read(); //Chargement des données.
    //Chargement des données dans l'objet.
    chaineCaractere = chaineCaractere + acquis_donnees;//Données complète.
    chaineCaractere2 = chaineCaractere2 + acquis_donnees;//Donnée séparée.
    delay(80);//Temporisation de traitement.

    /*Si la varaible "acquis_donnees" est égale à 32 OU 10.
      10 = Sauts de lignes - 32 = Espaces.
      || = opérateur OU */
    if ( acquis_donnees  == 32 || acquis_donnees  == 10  ) {//Contrôle des conditions.
      Serial.print("Espace (32) => ");//Affichage du message complémentaire.
      //Affichage du message complémentaire  + Donnée.
      Serial.println("Les donnees transmises par le moniteur : " + chaineCaractere2);
      chaineCaractere2 = ""; //Remis a zéro de l'objet.
    } //Fin de if.

    /* //Si la variable "acquis_donnees" contient une données égale à 10.
        10 = Saut de ligne */
    if ( acquis_donnees  == 10) {//Contrôle des conditions.
      Serial.print("Saut de ligne (10) => ");//Affichage du message complémentaire.
      //Affichage du message complémentaire + Donnée.
      Serial.print("Les donnees transmises par le moniteur : " + chaineCaractere);
    } //Fin de if.
  }//while.


}//Fin de loop()
