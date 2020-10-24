/***** PLAISIR ARDUINO *****/
/*Le bute de ce projet est de transmetre et de recevoir
  des donées via le moniteur série.

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
  String chaineCaractere; //Objet recevant les chaînes de caractères.
 
  //Contrôle de la présence de données dans le buffer.
  while (Serial.available() != 0) { //Condition d'execution de while.
    //Lecture du buffer et chargement des données.
    acquis_donnees = Serial.read(); //Chargement des données.
    //Chargement des données dans l'objet.
    chaineCaractere = chaineCaractere + acquis_donnees;
    delay(80);//Temporisation de traitement.
  }//while.

  //Affichage finale.
  if (chaineCaractere != 0) { //Contrôle la présence de données.
    //Affichage d'un message + objet.
    Serial.println("La donnee envoye est : " + chaineCaractere );
  }//if.

}//Fin de loop()
