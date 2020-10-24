/*************************** PLAISIR ARDUINO ***************************
 *********************** MATRCICE 8x8 et MAX7219 ***********************
  Le 18/10/2016. http://plaisirarduino.fr/

    Dans ce programme nous utiliserons la bibliothèque "ledControl.h" pour
    expoloiter un afficheur à leds matricielle au travers d'un decodeur.

    *************** Matériels ***************
    µ Arduino UNO. https://www.arduino.cc/
    Décodeur MAX7219.
    Afficheur 1588bs.
    Resistance 220kohms.
    Condensateur 0,1µf.

    *************** Synoptique de branchement ***************

  /*
  Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
  pin 13 is connected to the DataIn
  pin 11 is connected to the CLK 13
  pin 10 is connected to LOAD 10
  We have only a single MAX72XX.
*/

/***** Inclusion des bibliothèques utiles *****/
#include <LedControl.h> //Permet l'exploitation des afficheurs.

/***** Déclarations des objets *****/
LedControl lc = LedControl(11, 13, 10, 1);


void setup() {

  /***** CONFIGURATION *****/

  //MAX7219.
  lc.shutdown(0, false);//Extinction de l'afficheur selectionné en mode veille si "true".(économie d'énergie)
  lc.clearDisplay(0);//Efface les instructions d'affichage contenu en mémoire dans MAX.
  lc.setIntensity(0, 8);//Ajustement de la luminosité de l'afficheur.
  lc.setScanLimit(0, 8); //Défini le nombre de chiffres (ou lignes) à afficher.//--*/

}//fin de setup.

//------------LOOP----------------------
void loop() {
  lc.clearDisplay(0);
  

  for (int i = 0; i < 8; i++) {
    lc.setLed(0, i, i, true); //allumé les leds  en diagonale
    delay(200);
  }

  for (int i = 8; i > -1; i--) {//retour
   
    delay(200);
    lc.setLed(0, i, i, false);//extinction des leds  en diagonale
  }//---*/

  lc.clearDisplay(0);


}//------------------Fin de LOOP---------------------


