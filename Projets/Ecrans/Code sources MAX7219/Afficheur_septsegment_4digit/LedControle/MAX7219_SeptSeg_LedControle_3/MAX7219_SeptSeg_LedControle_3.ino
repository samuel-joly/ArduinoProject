/* Plaisirarduino.fr
 
  Bute du programme:
  Réaliser un afficheur digitale;


  Materiels:
   Puce MAX7219
   Afficheurdigits KYX5461AS x1.
   Carte arduino UNO.

  Note utiles: Câblages des broches à titre indicatif.
  | Arduino    | MAX7219 |
  | ---------  | -----------
  | Broche 11  => DIN         Data.(données)
  | Broche 13  => CLK        Horloge.(cadence des Bits. Broche de sortie arduino configuré pour ce travail en intern)
  | Broche  10  => LOAD/CS    Chargement.(Activation du chargement des données dans la puce).
   Pour les broches "ICSP" Du mode "SPI voir doc Carte Arduino.

  Mettre en place 10K home minimum de resistance cablées en "Iset" (18-MAX729). (limitation de courants dans les LEDs).
  Transfert de données sur 2 octets.
*/ 

/* inclusion de la librairie */
#include "LedControl.h"


LedControl septSegMax = LedControl(11, 13, 10, 1);


void setup() {
 
  septSegMax.shutdown(0, false);
 
  septSegMax.setIntensity(0, 15);
  septSegMax.setScanLimit(0,3);

  septSegMax.clearDisplay(0);
}


void loop() {

septSegMax.setDigit(0,0,1,false); 
septSegMax.setDigit(0,1,2,false); 
septSegMax.setDigit(0,2,3,false); 
septSegMax.setDigit(0,3,4,false); 

delay (4000);
 septSegMax.clearDisplay(0);

for (int i = -8; i < 5; i++) {
septSegMax.setRow(0,i+7,0x77); //A
septSegMax.setRow(0,i+6,0x05); //r
septSegMax.setRow(0,i+5,0x3D); //d
septSegMax.setRow(0,i+4,0x1C); //u
septSegMax.setRow(0,i+3,0x10); //i
septSegMax.setRow(0,i+2,0x15); //n
septSegMax.setRow(0,i+1,0x1D); //o
septSegMax.setRow(0,i+0,0x00); //blank

delay (500);
}




}
