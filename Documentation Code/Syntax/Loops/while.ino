/***** PLAISIR ARDUINO *****/

/***** La boucle while *****/
/*Tant que la valeur de resultat calculé est inférieur à 100.
  les actions programmées sont exécutées. */

/*Declaration des variables globales*/
int resultat = 0; //Variable de contrôle de while().

void setup() {

  /****** CONFIGURATIONS ******/
  Serial.begin(9600); //Configuration du moniteur série.

  /****** INITIALISATIONS ******/

  /****** TEST *****/
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  Serial.println("***** PROGRAMME WHILE *****");//Affichage d'un message
  Serial.println();//Saut de ligne.

}//Fin de setup()

void loop() {//Programme principal.

  /***** PROGRAMME *****/
  Serial.println("***** Execution de loop()*****");//Affichage d'un message.
  delay(1000);//Temporisation de lecture.

  //Affichage d'un message d'information.
  if (resultat == 0) { //Conditionnement du message seulement pour le début.
    Serial.println("Tant que la valeur de resultat est inferieur a 50");
    delay(3000);//Temporisation de lecture.
    Serial.println("les actions programmees sont executees en boucle.");
    delay(3000);//Temporisation de lecture.
    Serial.println();//Saut de ligne.
    Serial.print("Resulat = "); Serial.println(resultat);//Affichage d'un message + resultat.
    Serial.println();//Saut de ligne.
    delay(3000);//Temporisation de lecture.
  }//if

  /*Déclaration des variables globales*/
  int var1 = 10;//Variable utile au calcul.

  /*Boucle while*/
  //Condition d’exécution de la boucle.
  while (resultat < 50) {//Dédut du bloc while.
    //Actions programmées => Calcul.
    resultat = resultat + var1;
    //Actions programmées => Affichage de resultat.
    Serial.print("Execution en boucle des instructions du bloc while. Resultat = ");
    Serial.println(resultat);
    delay(1000);//Temporisation de lecture.
  } //Fin du bloc while.

  //Affichage en sotie de boucle.
  Serial.println();//Saut de ligne.
  Serial.println("La condition de while() est fausse: resultat > 50");
  delay(3000);//Temporisation de lecture.
  Serial.println("Execution du calcul numeros 2 dans le programme principale loop()");
  Serial.println();//Saut de ligne.
  delay(3000);//Temporisation de lecture.

  //Calcul numéros 2 dans le programme principale.
  resultat = resultat + 1; //Calcul.
  Serial.print("Resulat = "); Serial.println(resultat);
  Serial.println();//Saut de ligne.
  delay(3000);//Temporisation de lecture.

  //Remise à zéro => Pour un retour d'exécution en boucle de while.
  if (resultat >= 53) { //Quant resultat atteindra 110.
    resultat = 0;//Mise a zéro de resutlat.
    //Affichage d'un message d'information.
    Serial.println("===================================================");
    Serial.println("Resultat > 53 ===========> Mise a zero de resutlat");
    Serial.println("===================================================");
    Serial.println();//Saut de ligne.
    delay(3000);//Temporisation de lecture.
    Serial.print("Resulat = "); Serial.println(resultat);
    Serial.println();//Saut de ligne.
    delay(3000);//Temporisation de lecture.
  }//if
}//Fin de loop()
