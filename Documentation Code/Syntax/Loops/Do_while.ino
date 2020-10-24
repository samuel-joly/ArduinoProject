/***** PLAISIR ARDUINO *****/

/***** La boucle do while *****/
/*Tant que la valeur de resultat calculé est inférieur à 100.
  les actions programmées sont exécutées en boucle.
  Une fois la condition de while() fausse
  une lecture seule de la boucle do sera effectué par passsage*/

/*Declaration des variables globales*/
int resultat = 0;

void setup() {
  /*Declaration des variables globales*/
  int resultat = 0; //Variable de contrôle de while().

  /****** CONFIGURATIONS ******/
  Serial.begin(9600); //Configuration du moniteur série.

  /****** INITIALISATIONS ******/

  /****** TEST *****/
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  Serial.println("***** PROGRAMME DO WHILE *****");//Affichage d'un message
  Serial.println();//Saut de ligne.

}//Fin de setup()

void loop() {

  /***** PROGRAMME *****/
  Serial.println("***** Execution de loop()*****");//Affichage d'un message.
  Serial.println();//Saut de ligne.
  delay(1500);//Temporisation de lecture.

  /*Declaration des variables globales*/
  int var1 = 10;//Variable utile au calcul.

  //Affichage d'un message d'information.
  if (resultat == 0) { //Conditionnement du message seulement pour le début.
    Serial.println("Tant que la valeur de resultat est inferieur a 100");
    Serial.println("les actions programmees sont executees en boucle.");
    Serial.println();//Saut de ligne.
    delay(5000);//Temporisation de lecture.
  }//if

  /*Boucle do while*/
  do {//Début du bloc do.
    //Actions programmées => Calcul.
    resultat = resultat + var1;
    //Actions programmées => Affichage du message complémentaire + resultat.
    Serial.print("Execution du bloc DO => resultat = ");
    Serial.println(resultat);
    delay(2000);//Temporisation de lecture.
  } //fin du bloc do.
  while (resultat < 100); //Condition d'éxecution en boucle de do.

  //Affichage en sotie de boucle.
  Serial.println();//Saut de ligne.
  Serial.println("La condition de while() est fausse");
  Serial.println("Une seule execution de la boucle do est effectue.");
  Serial.println();//Saut de ligne.
  delay(3000);//Temporisation de lecture.

  //Remise à zéro => Pour un retour d'exécution en boucle de do.
  if (resultat >= 130) { //Quant resultat atteindra 130.
    resultat = 0;//Mise a zéro de resutlat.
    //Affichage d'un message d'information.
    Serial.println("===================================================");
    Serial.println("Resultat > 130 ===========> Mise a zero de resutlat");
    Serial.println("===================================================");
    delay(3000);//Temporisation de lecture.
    Serial.println();//Saut de ligne.
  }//if

}//Fin de loop()
