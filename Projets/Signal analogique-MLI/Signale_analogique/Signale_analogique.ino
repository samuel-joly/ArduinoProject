/*************************** PLAISIR ARDUINO ***************************
 ************************** SIGNAL ANALOGIQUE **************************
  Le 09/12/2016.

    Ce projet consiste à faire varier la luminosité d'une LED
    en fonction d'un potentiomètre.

    L'objectif est de comprendre et d'exploiter un signal analogique
    en entrées et de le moduler en sorties.

    *************** Matériels ***************
    Arduino UNO.
    Potentiometre 10K ohms.
    LED rouge.
    Résistance 220 ohms.

    *************** Synoptique de branchement ***************

    Arduino +5V    o----------------o Potar.
    Arduino A0     o----------------o Curseur.
    Arduino GND    o----------------o Potar.

    Arduino PMW 3~ o----o R 220 ohms o-----o Led o----o GND.

*************************** PLAISIR ARDUINO ***************************/

/***** Déclarations des variables globales *****/
int potar = A0; //Variable d'acquisition du signal analogique.
int val_potar; //Variable de traitement du signal analogique.
int LED = 3; //Variable utile a l'exploitation de la LED.

void setup() {

  /***** Déclarations des variables locales *****/
  int time_interval = 2000; //Temporisation d'affichage.

  /***** CONFIGURATION *****/
  //Moniteur.
  Serial.begin(9600); //Port serie.
  Serial.println("************* CONFIGURATIONS **************"); //Affichage d'un message.

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
  if (val_potar == 0 || val_potar == 1023) { //Test la valeur du potar sur position fixe en butée.
    Serial.print("Valeur du potentiometre actuelle: "); //Affichage d'un message.
    Serial.println( val_potar); //Affichage de la mesure.
    Serial.println(); //Saut de ligne.
  }
  else { //Si les valeurs ne sont pas corrects = Arret du programme car pas de fonctionnement logique.
    Serial.println("!!! Controler le potentiometre !!!: "); //Affichage d'un message.
    Serial.println(); //Saut de ligne.
    while (1); //Arrêt forcé du programme +> Contrôle + Relancer le programme par un appuie sur le boutons reset.
  }
  delay(time_interval); //Temporisation.

  //INITIALISATION//
  //Pas d'initialisation ici.

  Serial.println("**************** PROGRAMME ****************"); //Affichage d'un message.
  Serial.println("Faite evoluer le potentiometre !! "); //Affichage d'un message.
  Serial.println(); //Saut de ligne.
  delay(time_interval); //Temporisation.

}//Fin de setup.

void loop() {

  //***** Déclarations des variables locales *****//
  int val_led; //Variable utile au traitement du signal.
  float K_in = 0.00489; //Coéfficient de conversion = Tension d'exploitation (5v) / 1024.
  float K_out = 0.0195; //Coéfficient de conversion = Tension de sortie (5v) / 255.

  //***** Acquisition du signal *****//

  //Valeur brut en bit du potentiomètre.
  val_potar = analogRead(A0); //Lecture de la broches
  Serial.print("***** Valeur brut du potentiometre: "); //Affichage d'un message.
  Serial.println(val_potar); //Affichage de la mesure.

  //***** Traitement du signal. *****//

  //Conversion de la valeur brut en volt.
  float equiv_potar = val_potar * K_in; //Conversion des bits en volts.
  Serial.print("Tension d'entree: "); //Affichage d'un message.
  Serial.print(equiv_potar); //Affichage de la mesure.
  Serial.println(" V");//Affichage de l'unité.

  //Mise à l'échelle du signal d'entrée avec le signal de sortie  .
  val_led = map(val_potar, 0, 1023, 0, 255);
  Serial.print("Valeur mise a l'echelle: "); //Affichage d'un message.
  Serial.println(val_led); //Affichage de la mesure.

  //Mise en butée de la valeur brute de sortie.
  /*Permet de ne pas dépasser certaines valeurs qui garantissent
    le bon fonctionnement d'un projet.*/

  //Mise en butée du signal.
  val_led = constrain(val_led, 50, 210); //Valeur de butée mini à 50 et maxi à 210
  Serial.print("Valeur de butee Mini/Maxi: "); //Affichage d'un message.
  Serial.print(val_led); //Affichage de la mesure.
  Serial.println();//Saut de ligne.

  //Conversion de la valeur brute de sortie en volts.
  Serial.print("Tension en sortie pilote: "); //Affichage d'un message.
  float val_convert_out = val_led * K_out; //Conversion des bits en volts.
  Serial.print(val_convert_out); //Affichage de la mesure.
  Serial.println(" V");//Affichage de l'unité.
  Serial.println();//Saut de ligne.

  //***** Exploitation du signal traité. *****//

  //Application de la consigne de pilotage à la LED.
  analogWrite(LED, val_led);//Activation de la led suivant consigne.

  delay(200);//Temporisation de lecture.
}//Fin de loop.
