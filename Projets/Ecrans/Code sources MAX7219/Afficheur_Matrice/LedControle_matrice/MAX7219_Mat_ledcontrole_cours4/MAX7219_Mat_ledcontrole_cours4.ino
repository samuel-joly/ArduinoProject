/*************************** PLAISIR ARDUINO ***************************
 *********************** MATRCICE 8x8 et MAX7219 ***********************
  Le 18/10/2016. http://plaisirarduino.fr/

    Dans ce programme nous utiliserons la bibliothèque "ledControl.h" pour
    expoloiter un afficheur à leds matricielle au travers d'un decodeur.

    *************** Matériels ***************
    µ Arduino UNO. https://www.arduino.cc/
    Décodeur MAX7219. https://datasheets.maximintegrated.com/en/ds/MAX7219-MAX7221.pdf
    Afficheur 1588bs.
    Resistance 220kohms.
    Condensateur 0,1µf.

    *************** Synoptique de branchement ***************

  /***** Reperage des broches *****
  pin 11 arduino => DataIn Max7219
  pin 13 arduino => CLK Max7219
  pin 10 arduino => LOAD/CS Max7219

*/

/***** Inclusion des bibliothèques utiles *****/
#include <LedControl.h> //Permet l'exploitation des afficheurs.



LedControl MatriceMax = LedControl(11, 13, 10, 1);

byte tablecolonne[3] [8] = {
  {  B00000000,	B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, //blank
  {  B01100110, B10011001, B10011001, B10000001, B01000010, B01000010, B00100100, B00011000}, //coeur
  {  B01111110, B10000001, B10100101, B10000001, B10100101, B10011001, B10000001, B01111110,}// :)

};

byte tableligne[3] [8] = {
  {  B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000,}, //blank
  {  B01110000, B10001100, B10000010, B01000001, B01000001, B10000010, B10001100, B01110000,}, //coeur
  {  B01111110, B10000001, B10101001, B10000101, B10000101, B10101001, B10000001, B01111110,}// :)

};
void setup() {

  /***** CONFIGURATION *****/

  //MAX7219.
  MatriceMax.shutdown(0, false); // le mode shutdown est desactiver
  MatriceMax.clearDisplay(0);
  MatriceMax.setIntensity(0, 8);
}

//------------LOOP----------------------
void loop() {

  defversbas(1);
  defvershaut(2);

  defversdroite(2);
  defversgauche(1);

}

void defversbas(int tblsymb) {

  int j = tblsymb;


  for (int i = -8; i < 9; i++) {
    MatriceMax.clearDisplay(0);


    MatriceMax.setColumn (0, i + 7  , tablecolonne[j][7]);
    MatriceMax.setColumn(0, i + 6 , tablecolonne[j][6]);
    MatriceMax.setColumn(0, i + 5 , tablecolonne[j][5]);
    MatriceMax.setColumn(0, i + 4 , tablecolonne[j][4]);
    MatriceMax.setColumn(0, i + 3  , tablecolonne[j][3]);
    MatriceMax.setColumn(0, i + 2 , tablecolonne[j][2]);
    MatriceMax.setColumn(0, i + 1 , tablecolonne[j][1]);
    MatriceMax.setColumn(0, i + 0 , tablecolonne[j][0]);


    delay (100);
  }
}


void defvershaut(int tblsymb) {

  int j = tblsymb;


  for (int i = 8; i > -9; i--) {

    MatriceMax.setColumn(0, i + 0 , tablecolonne[j][0]);
    MatriceMax.setColumn(0, i + 1 , tablecolonne[j][1]);
    MatriceMax.setColumn(0, i + 2, tablecolonne[j][2]);
    MatriceMax.setColumn(0, i + 3, tablecolonne[j][3]);
    MatriceMax.setColumn(0, i + 4 , tablecolonne[j][4]);
    MatriceMax.setColumn(0, i + 5 , tablecolonne[j][5]);
    MatriceMax.setColumn(0, i + 6, tablecolonne[j][6]);
    MatriceMax.setColumn(0, i + 7,  tablecolonne[j][7]);
    MatriceMax.setColumn(0, i + 8 , tablecolonne[0][0]);

    delay (100);

  }
}




void defversdroite(int tblsymb) {

  int j = tblsymb;


  for (int i = -8; i < 9; i++) {
    MatriceMax.clearDisplay(0);


    MatriceMax.setRow (0, i + 7  , tableligne[j][7]);
    MatriceMax.setRow(0, i + 6 , tableligne[j][6]);
    MatriceMax.setRow(0, i + 5 , tableligne[j][5]);
    MatriceMax.setRow(0, i + 4 , tableligne[j][4]);
    MatriceMax.setRow(0, i + 3  , tableligne[j][3]);
    MatriceMax.setRow(0, i + 2 , tableligne[j][2]);
    MatriceMax.setRow(0, i + 1 , tableligne[j][1]);
    MatriceMax.setRow(0, i + 0 , tableligne[j][0]);


    delay (100);
  }
}

void defversgauche(int tblsymb) {

  int j = tblsymb;


  for (int i = 8; i > -9; i--) {

    MatriceMax.setRow(0, i + 0 , tableligne[j][0]);
    MatriceMax.setRow(0, i + 1 , tableligne[j][1]);
    MatriceMax.setRow(0, i + 2, tableligne[j][2]);
    MatriceMax.setRow(0, i + 3, tableligne[j][3]);
    MatriceMax.setRow(0, i + 4 , tableligne[j][4]);
    MatriceMax.setRow(0, i + 5 , tableligne[j][5]);
    MatriceMax.setRow(0, i + 6, tableligne[j][6]);
    MatriceMax.setRow(0, i + 7,  tableligne[j][7]);
    MatriceMax.setRow(0, i + 8 , tableligne[0][0]);

    delay (100);

  }
}

