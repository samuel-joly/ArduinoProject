//***** PLAISIR ARDUINO *****//
//***** L'afficheur LCD *****//

/* A travers cet exemple découvrez
   Comment exploiter votre afficheur LCD.
*/

/****** INITIALISATIONS ******/
//***** Bibliothèques.
#include <LiquidCrystal.h> //Gestion de l'afficheur LCD

//***** Déclaration des variables.
//LCD.
#define RS 12 //Broche de syncronisation.
#define E  11 //Broche d'activation de transmission
#define D4 5  //Broche de donnée.
#define D5 4  //Broche de donnée.
#define D6 3  //Broche de donnée.
#define D7 2  //Broche de donnée.
//Note ici notre aficheur fonctionne sous quatre bits.

//Paramétrage de la classe et instanciation.
LiquidCrystal lcd (RS, E, D4, D5, D6, D7);

//***** Tableau de caractères spèciaux.
//Faire un coeur.
byte coeur[8] = {0b00000, 0b01010, 0b11111, 0b11111, 0b11111, 0b01110, 0b00100, 0b00000};

/****** CONFIGURATIONS ******/
void setup() {
  //***Moniteur série.
  Serial.begin(9600); //Configuration du moniteur série.

  //***LCD.
  lcd.begin(16, 2); //Configuration LCD.
  lcd.createChar(1, coeur); //Appel du tableau coeur par l'indice 1.

  /***** TEST *****/

  //Moniteur série.
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.

  //LCD
  lcd.setCursor(0, 0);
  lcd.print("****BONJOUR****"); //Affichage d'un message.
  lcd.setCursor(0, 1);          //Positionnment du curseur.
  lcd.print("** LCD pret **");  //Affichage d'un message.
  delay(4000);                  //Temporisation.
  lcd.clear();                  //Effacement de l'afficheur.
  delay(80);                    //Temporisation.

  //***** Petit message d'acceuil
  lcd.setCursor(0, 0);
  lcd.print("PLAISIR ARDUINO"); //Affichage d'un message.
  lcd.setCursor(0, 1);          //Positionnement du curseur.
  lcd.print("    PRESENTE    ");//Affichage d'un message.
  delay(2500);                  //Temporisation.
  lcd.clear();                  //Effacement de l'afficheur.
  delay(80);                    //Temporisation.
  lcd.setCursor(0, 0);          //Positionnement du curseur.
  lcd.print("L'afficheur LCD ");//Affichage d'un message.
  delay(2000);                  //Temporisation.
  lcd.clear();                  //Effacement de l'afficheur.
  delay(80);                    //Temporisation.
  lcd.setCursor(0, 0);          //Positionnement du curseur.
  lcd.print("ouvrez le"); //Affichage d'un message.
  lcd.setCursor(0, 1);          //Positionnement du curseur.
  lcd.print("moniteur"); //Affichage d'un message.
  delay(2000);                  //Temporisation.
  lcd.setCursor(0, 0);          //Positionnement du curseur.
  lcd.print("Tapez un mot au"); //Affichage d'un message.
  lcd.setCursor(0, 1);          //Positionnement du curseur.
  lcd.print("moniteur serie "); //Affichage d'un message.
  delay(2000);                  //Temporisation.

}//Fin de setup.

void loop() {

  //***** Reception de données séries *****//
  /*Utiliser le moniteur série
    configuré sur "pas de fin ligne"
    Envoyez un mot (<16). */

  if (Serial.available()) { //Conditionnement et contrôle de la réception de données.
    delay(100);             //Temporisation de traitement.
    lcd.clear();            //Effacement de l'afficheur.

    while (Serial.available() > 0) { //L'ecture du buffer.
      lcd.write(Serial.read());      //Envoie des données lus a l'afficheur.

    }
    delay(2000); //Temporisation d'affichage.

    //***** Defilement *****//

    //Défilement automatique vers la droite.
    for (int i = 0; i < 16; i++) { //Boucle de répétition de défilement.
      /* Défilement sur les 16 positions de l'afficheur*/
      lcd.scrollDisplayRight();    //Methode de défilement
      delay(250);                  //Temporisation.
    }//for.

    //Défilement automatique vers la gauche.
    for (int i = 0; i < 16; i++) { //Boucle de répétition de défilement.
      /* Défilement sur les 16 positions de l'afficheur*/
      lcd.scrollDisplayLeft();     //Methode de défilement.
      delay(250);                  //Temporisation.
    }//for.

    //***** Caractère spécial *****//
    lcd.setCursor(0, 1);  //Positionnement du curseur.
    lcd.write(1);         //Le coeur.
    delay(2000);          //Temporisation.

    //***** Repetition d'un caractère *****//
    for (int i = 0 ; i < 16 ; i++) {
      lcd.setCursor(i, 1);  //Positionnement du curseur en fonction de i.
      lcd.write(1);         //Envoie du tableau = Le coeur.
      delay(150);           //Temporisation.
    }//for.

    lcd.clear();                  //Effacement de l'afficheur.
    lcd.setCursor(0, 0);          //Positionnement du curseur.
    lcd.print("   !!Bravo!!  ");  //Affichage d'un message.

  }//if.

  //***** Clignotement de l'afficheur *****//
  lcd.noDisplay();              //Exctinction de l'affichage.
  delay(500);                   //Temporisation.
  lcd.display();                //Réactivation de l'affichage
  delay(500);                   //Temporisation.

  //***** FIN ******//
  
}//fin de Loop.

