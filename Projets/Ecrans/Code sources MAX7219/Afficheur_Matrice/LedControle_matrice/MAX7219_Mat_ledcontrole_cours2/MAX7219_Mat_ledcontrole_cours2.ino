/*************************** PLAISIR ARDUINO ***************************
 *********************** MATRCICE 8x8 et MAX7219 ***********************
  Le 18/10/2016. http://plaisirarduino.fr/

    Dans ce programme nous utiliserons la bibliothèque "ledControl.h" pour
    expoloiter un afficheur à leds matricielle au travers d'un decodeur.

    *************** Matériels ***************
    µ Arduino UNO.
    Décodeur MAX7219.
    Afficheur 1588bs.
    Resistance 220kohms.
    Condensateur 0,1µf.

    *************** Synoptique de branchement ***************

  /***** Reperage des broches *****

  pin 11 arduino ==> DataIn  MAX7219
  pin 13 arduino ==> the CLK  MAX7219
  pin 10  arduino ==> LOAD  MAX7219
*/

/***** Inclusion des bibliothèques utiles *****/

#include <LedControl.h> //Permet l'exploitation des afficheurs.



LedControl MatriceMax = LedControl(11, 13, 10, 1);

byte MatData[8] =  
{  B11001100,	B11001100, B00110011, B00110011, B11001100, B11001100, B00110011, B00110011,};


void setup() {

  /***** CONFIGURATION *****/

  //MAX7219.
  MatriceMax.shutdown(0, false); // le mode shutdown est desactiver
  MatriceMax.clearDisplay(0);
  MatriceMax.setIntensity(0, 8);
}

//------------LOOP----------------------
void loop() {

  for (int i = 0; i < 8; i++) {
    MatriceMax.setColumn (0, i  , MatData[i]);
  }

}


