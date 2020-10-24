/***** PLAISIR ARDUINO *****/

/***** L'instruction break *****/
/*Arreter avec l'instruction break l'executution en boucle 
du bloc {} d'instructions while().*/

/*Declaration des variables globales*/
int resultat = 0; //Variable de contrôle de while().

void setup() {//Fonction de configuration, initialisation et test.

  /****** CONFIGURATIONS ******/
  Serial.begin(9600); //Configuration du moniteur série.

  /****** INITIALISATIONS ******/

  /****** TEST *****/
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  Serial.println("***** PROGRAMME BREAK *****");//Affichage d'un message
  Serial.println();//Saut de ligne.

}//Fin de setup()

void loop() {//Programme principal.

  /***** PROGRAMME *****/
  Serial.println("***** Execution de loop()*****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  delay(2000);//Temporisation de lecture.

  //Affichage du message d'information.
  if (resultat == 0) { //Conditionnement du message seulement pour le début.
    Serial.println("Tant que la valeur de resultat calcule est inferieur a 100");
    Serial.println("les actions programmees sont executees en boucle.");
    Serial.println();//Saut de ligne.

    //Affichage de la valeur de resultat en début de programme.
    Serial.print("Resulat = "); Serial.println(resultat);//Affichage d'un message + resultat.
    Serial.println();//Saut de ligne.
    delay(3000);//Temporisation de lecture.
  }//if

  /*Déclaration des variables globales*/
  int var1 = 10;//Variable utile au calcul n°1.

  /*Boucle while*/
  //Condition d’exécution de la boucle.
  while (resultat < 100) {//Début de bloc while.

    //Contrôle de la condition de if.
    if (resultat >= 50) {//Début du bloc if
      //Affichage du message complémentaire.
      Serial.println("Resultat >= 50 ==> break ==> Arret du bouclage.");
      Serial.println();//Saut de ligne.
      delay(2000);//Temporisation de lecture.
      break; //Arrêt du bouclage & sortie de bloc.
    }//fin du bloc if

    //Actions programmées => Calcul.
    resultat = resultat + var1;
    //Actions programmées => Affichage du message complémentaire + de resultat n°1.
    Serial.println("Execution du bloc d'instructions en boucle.");
    Serial.print("Calcul N1 resultat 1 = "); Serial.println(resultat);
    delay(2000);//Temporisation de lecture.

  } //Fin du bloc while.

  //Affichage  du message complémentaire en sortie du bloc while.
  Serial.println("Execution du calcul N2 dans le programme principale");

  //Execution du calcul dans le programme principale.
  resultat = resultat + 1; //Calcul.
  //Affichage du message complémentaire + du resultat n°2.
  Serial.print("Resulat 2 = "); Serial.println(resultat);
  Serial.println();//Saut de ligne.
  delay(6000);//Temporisation de lecture.

  //Remise à zéro => Pour un retour d'exécution en boucle de while.
  //Contrôle de la condition.
  if (resultat >= 53) {//Début du bloc if
    resultat = 0;//Mise a zéro de resutlat.
    //Affichage d'un message d'information.
    Serial.println("==================================================");
    Serial.println("Resultat > 53 ===========> Mise a zero de resutlat");
    Serial.println("==================================================");
    Serial.println();//Saut de ligne.
    delay(4000);//Temporisation de lecture.
  }//fin du bloc if

}//Fin de loop()
