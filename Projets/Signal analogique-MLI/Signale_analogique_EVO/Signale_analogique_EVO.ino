/*************************** PLAISIR ARDUINO ***************************
********************* SIGNAL ANALOGIQUE EVOLUTION *********************
  Le 09/12/2016.

    Ce projet consiste à faire varier la luminosité d'une LED
    en fonction d'un potentiomètre.

    L'objectif est de comprendre et d'exploiter un signal analogique
    en entrées et de le moduler en sorties.

    Évolution du projet. Afficher seulement les variations utiles de données
    au moniteur série.

    *************** Matériels ***************
    Arduino UNO.
    Potentiomètre 10K ohms.
    LED rouge.
    Résistance 220 ohms.

    *************** Synoptique de branchement ***************

    Arduino +5     o----------------o Potar.
    Arduino A0     o----------------o Potar curseur.
    Arduino GND    o----------------o Potar.

    Arduino PMW 3~ o----o R 220 ohms o-----o Led o----o GND.

*************************** PLAISIR ARDUINO ***************************/

/***** Déclarations des variables globales *****/
int potar = A0; //Variable d'acquisition du signal analogique.
int val_potar; //Variable de traitement du signal analogique.
int LED = 3; //Variable utile a l'exploitation de la LED.
int memoire = 0; //Variable servant de mémoire.
int time_interval = 200; //Valeur de temporisation d'interval lecture.

void setup() {
  /***** CONFIGURATION *****/

  //Moniteur.
  Serial.begin(9600); //Port série.
  Serial.println("************* CONFIGURATIONS **************");

  //Moniteur série.
  Serial.println("************** Moniteur pret **************"); //Affichage d'un message.
  Serial.println("** EVOLUTION // Projet signal analogique **"); //Affichage d'un message.
  Serial.println();//Saut de ligne.
  delay(time_interval); //Temporisation d'affichage.

  //LED
  pinMode(LED, OUTPUT); //Configuration de la broche 3 en sortie.

  /***** TEST *****/
  //Contrôle des branchements et configurations.

  Serial.println("******************* TEST ******************"); //Affichage d'un message.
  delay(time_interval); //Temporisation.

  //Fair clignoter la LED trois fois pour test.
  Serial.println("LED ");
  for (int i = 0; i < 3; i++) {
    digitalWrite( LED, HIGH); //Allumage de la led.
    delay(400); //Temporisation.
    digitalWrite( LED, LOW); //Extinction de la led.
    delay(400); //Temporisation.
    Serial.print("*"); //Saut de ligne.
  }//for*/
  delay(time_interval); //Temporisation.
  Serial.println();

  //Potentiometre
  Serial.println("POTENTIOMETRE");
  Serial.println("SVP Mettre le potentiometre en butee a droite ou a gauche"); //Affichage d'un message.
  delay(8000); //Temporisation.
  //Acquisition du signal et chargement dans la variable de traitement
  val_potar = analogRead(potar); //Lecture de la donnée brut.
  if (val_potar == 0 || val_potar == 1023) {
    Serial.print("Valeur du potentiometre actuelle: "); //Affichage d'un message.
    Serial.println( val_potar); //Affichage de la mesure.
    Serial.println(); //Saut de ligne.
  }
  else {
    Serial.println("!!! Controler le potentiometre !!!: "); //Affichage d'un message.
    Serial.println(); //Saut de ligne.
    while (1); //Arrêt programme.
  }
  delay(time_interval); //Temporisation.

  //INITIALISATION//
  memoire = val_potar;//Chargement de la valeur actuelle.

  Serial.println("**************** PROGRAMME ****************"); //Affichage d'un message.
  Serial.println("Faite evoluer le potentiometre !! "); //Affichage d'un message.
  Serial.println(); //Saut de ligne.
  delay(time_interval); //Temporisation.

}//Fin de setup.

void loop() {

  //***** Déclarations des variables locales *****//
  int val_led; //Variable utile au traitement du signal.
  double K_in = 0.0049; //Coefficient de conversion = Tension d'exploitation (5v) / 1024.
  double K_out = 0.01953; //Coefficient de conversion = Tension de sortie (5v) / 255.

  //Lecture de la valeur brut du potentiomètre.
  val_potar = analogRead(A0); //Lecture de la broches.

  //Conditionnement de l'affichage des données filtrée a + ou - 2 points pour stabilité de lecture.
  if ( val_potar > memoire + 2 || val_potar < memoire - 2) {
    Serial.print("ACTUALISATION // Valeur du potentiomètre actuelle: "); //Affichage d'un message.
    Serial.println(val_potar); //Affichage de la mesure.

    //***** Acquisition du signal *****//

    //Conversion de la valeur brut en volt.
    double equiv_potar = val_potar * K_in; //Conversion des bits en volts.
    Serial.print("Tension d'entree: "); //Affichage d'un message.
    Serial.print(equiv_potar); //Affichage de la mesure.
    Serial.println(" V"); //Affichage de l’unité.

    //Mise à l'echelle du signal de sortie avec le signal d'entrée.
    val_led = map(val_potar, 0, 1023, 0, 255);
    Serial.print("Valeur mise a l'echelle: "); //Affichage d'un message.
    Serial.println(val_led); //Affichage de la mesure.

    //Mise en butée de la valeur brute de sortie.
    /*Permet de ne pas dépasser des valeurs qui garantissent
      le bon fonctionnement d'un projet.*/

    /*Mise en butée du signal.
      Mini à 50 et Maxi à 210.*/
    val_led = constrain(val_led, 50, 210); //Valeur de butée mini à 50 et maxi à 210
    Serial.print("Valeur de butee Mini/Maxi: "); //Affichage d'un message.
    Serial.print(val_led); //Affichage de la mesure.
    Serial.println(); //Saut de ligne.

    //Conversion de la valeur brute de sortie en volts.
    Serial.print("Tension en sortie pilote: "); //Affichage d'un message.
    double val_convert_out = val_led * K_out; //Conversion des bits en volts.
    Serial.print(val_convert_out); //Affichage de la mesure.
    Serial.println(" V"); //Affichage de l’unité.
    Serial.println(); //Saut de ligne.

    //***** Exploitation du signal traité. *****//

    //Application de la consigne de pilotage à la LED.
    analogWrite(LED, val_led);//Activation de la led suivant consigne.
  }//fin de if.

  //Chargement de la valeur actualisé de potar => Mise en "mémoire".
  memoire = val_potar ;

  delay(200);//Temporisation utile au transfert et stabilité de lecture.
}//Fin de loop.
