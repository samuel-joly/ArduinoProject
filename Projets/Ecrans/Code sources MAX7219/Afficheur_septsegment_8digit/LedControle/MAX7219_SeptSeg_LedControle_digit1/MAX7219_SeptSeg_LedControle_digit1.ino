/* Plaisirarduino.fr
 
  Bute du programme:
  Réaliser un afficheur digitale;


  Materiels:
   Puce MAX7219
   Afficheurdigits KYX5461AS x2.
   Carte arduino UNO.

  Note utiles: Câblages des broches à titre indicatif.
  | Arduino    | MAX7219 |
  | ---------  | -----------
  | Broche 11  => DIN         Data.(données)
  | Broche 13  => CLK        Horloge.(cadence des Bits. Broche de sortie arduino configuré pour ce travail en intern)
  | Broche  10  => LOAD/CS    Chargement.(Activation du chargement des données dans la puce).
   Pour les broches "ICSP" Du mode "SPI voir doc Carte Arduino.

  Mettre en place 10K home minimum de resistance cablées en "Iset" (18-MAX729). (limitation de courants dans les LEDs).
  Transfert de donées sur 2 octets.
  Pour plus d'info concernant le MAX7219 => Datasheet: http://datasheets.maximintegrated.com/en/ds/MAX7219-MAX7221.pdf
*/ 

/* inclusion de la librairie */
#include "LedControl.h"


LedControl septSegMax = LedControl(11, 13, 10, 1);


void setup() {
 
  septSegMax.shutdown(0, false);
 
  septSegMax.setIntensity(0, 15);
  
  septSegMax.clearDisplay(0);
}


void loop() {

septSegMax.setDigit(0,0,1,false); 
septSegMax.setDigit(0,1,2,false); 
septSegMax.setDigit(0,2,3,false); 
septSegMax.setDigit(0,3,4,false); 
septSegMax.setDigit(0,4,5,false); 
septSegMax.setDigit(0,5,6,false); 
septSegMax.setDigit(0,6,7,false); 
septSegMax.setDigit(0,7,8,false); 




}
