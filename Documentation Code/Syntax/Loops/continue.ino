/***** PLAISIR ARDUINO *****/

/***** L'instruction continue *****/
/*Inhiber des instructions dans le bloc d'une boucle */

/*Declaration des variables globales*/
int resultat = 0; //Variable de contrôle de while().

void setup() {//Fonction de configuration, initialisation et test.

  /****** CONFIGURATIONS ******/
  Serial.begin(9600); //Configuration du moniteur série.

  /****** INITIALISATIONS ******/

  /****** TEST *****/
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  Serial.println("***** PROGRAMME CONTINUE *****");//Affichage d'un message
  Serial.println();//Saut de ligne.

}//Fin de setup()

void loop() {//Programme principal.

  /***** PROGRAMME *****/
  Serial.println("***** Execution de loop()*****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  delay(800);//Temporisation de lecture.

  //Affichage d'un message d'information.
  if (resultat == 0) { //Conditionnement du message seulement pour le début.
    Serial.println("Tant que la valeur de resultat calcule est inferieur a 100");
    Serial.println("les actions programmees sont executees en boucle.");
    Serial.println();//Saut de ligne.
    Serial.print("Resulat = "); Serial.println(resultat);//Affichage d'un message + resultat.
    Serial.println();//Saut de ligne.
    delay(3000);//Temporisation de lecture.
  }//if

  /*Déclaration des variables globales*/
  int var1 = 5;//Variable utile au calcul N°1.
  int var2 = 10;//Variable utile au calcul N°2.

  /*Boucle while*/
  //Condition d’exécution de la boucle.
  while (resultat < 100) {//Début du bloc while.

    //Actions programmées => Calcul N°1.
    resultat = resultat + var1;
    //Actions programmées => Affichage message & resultat.
    Serial.print("Execution de boucle. Resultat1 = ");
    Serial.println(resultat);
    delay(500);//Temporisation de lecture.

    //Conditionnement de l'activation de continue.
    if (resultat >= 50 && resultat <= 70 ) {
      //Affichage d'un message d'information.
      Serial.println("condition d'execution vrais ==> continue");
      delay(3000);//Temporisation de lecture.
      Serial.println("Ignore les instructions du calcul numeros 2 ");
      Serial.println();//Saut de ligne.
      delay(3000);//Temporisation de lecture.
      continue; //Ignore les instructions qui vont suivre et reboucler au début.
    }/*if ===> Toute les instructions sous cette ligne dans la boucle
    sont ignorées et non executées. */

    //Actions programmées => Calcul N°2.
    resultat = resultat + var2;
    //Actions programmées => Affichage message & resultat.
    Serial.print("Execution de boucle. Resultat2 = ");
    Serial.println(resultat);
    Serial.println();//Saut de ligne.
    delay(2000);//Temporisation de lecture.

  } //fin du bloc while.

  //Affichage en sotie de boucle.
  Serial.println();//Saut de ligne.
  Serial.println("Execution du calcul numeros 2 dans le programme principale");
  //Serial.println();//Saut de ligne.
  delay(3000);//Temporisation de lecture.

  //Execution du calcul N°2 dans le programme principale.
  resultat = resultat + 1;//Calcul.
  Serial.print("Resulat = "); Serial.println(resultat);
  Serial.println();//Saut de ligne.

  //Remise à zéro => Pour un retour d'exécution en boucle de while.
  if (resultat >= 105) {//Contrôle de la condition.
    resultat = 0;//Mise a zéro de resutlat.
    //Affichage d'un message d'information.
    Serial.println("===================================================");
    Serial.println("Resultat > 105 ===========> Mise a zero de resutlat");
    Serial.println("===================================================");
     delay(3000);//Temporisation de lecture.
    Serial.println();//Saut de ligne.
  }//if
}//Fin de loop()
