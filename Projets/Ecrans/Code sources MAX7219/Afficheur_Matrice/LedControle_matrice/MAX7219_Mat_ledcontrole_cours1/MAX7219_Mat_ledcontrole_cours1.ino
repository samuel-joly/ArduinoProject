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

  /***** Reperage des broches *****

  pin 13 arduino ==> DataIn 11 MAX7219
  pin 11 arduino ==> the CLK 13 MAX7219
  pin 10  arduino ==> LOAD 10 MAX7219
*/

/***** Inclusion des bibliothèques utiles *****/

#include <LedControl.h> //Permet l'exploitation des afficheurs.



LedControl MatriceMax = LedControl(11, 13, 10, 1);




void setup() {

  /***** CONFIGURATION *****/

  //MAX7219.
  MatriceMax.shutdown(0, false); // le mode shutdown est desactiver
  MatriceMax.clearDisplay(0);
  MatriceMax.setIntensity(0, 8);
}

//------------LOOP----------------------
void loop() {

  
    MatriceMax.setLed(0,0,0,true);  // Adresse; ligne; colonne; allumé à true 
 

}


