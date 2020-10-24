/*************************** PLAISIR ARDUINO ***************************
 *********************** AFFICHEURS SEPT SEGMENTS et MAX7219 ***********************
    Le 18/10/2016. http://plaisirarduino.fr/

  Bute du programme:
  Réaliser un affichage sur matrice 


   Materiels:
   Puce MAX7219
   Afficheurdigits Matrice 1588BS.
   Carte arduino UNO.

  Note utiles: Câblages des broches.
  | Arduino    | MAX7219 |
  | ---------  | -----------
  | MOSI (11)  => DIN (1)        Data.(données)
  | SCK  (13)  => CLK (13)       Horloge.(cadence des Bits. Broche de sortie arduino configuré pour ce travail en intern)
  | CS   (10)  => LOAD/CS (12)   Chargement.(Activation du chargement des données dans la puce).
   Pour les broches "ICSP" Du mode "SPI voir doc Carte Arduino.

  Vous avez la possibilité d'utilisé une calculatrice en mode dévellopeur pour faire la correpondance binnaire, hexadecimal et décimal



  Mettre en place 10K (100Kohms recommandés) au minimum pour une resistance cablées en "Iset" (18-MAX729). (limitation de courants dans les LEDs).
  Transfert de donées sur 2 octets.
*/

//---------------Base programme---------------.
#include <SPI.h> //Bibliotheque SPI Communication Maitre-esclave.
#define DATA_IN 10 // Definition de la broche de chargement etant 10.

SPISettings TransferMAX7219(20000000, MSBFIRST, SPI_MODE2); // Le premier paramettre de SPISetting est la vitesse maximale de transmission, le second paramettre est l'envoie du bit de poid fort en premier, le troisiéme parammettre est le mode transfert qui syncronise l'horloge et les données.

//----------Fonction de transfert de données--------------//
void Trsf7219(uint8_t Registre, uint8_t Data) { //Construction de la fonction => Données de registres et donées utiles formées sur 8bits.
  SPI.beginTransaction(TransferMAX7219); // Debut de transmission SPI
  digitalWrite(DATA_IN, LOW);//Debut de la transmision de donées.Etat bas pour activé la com.
  delay(10);// Laisse le temps d'activation.

  SPI.transfer(Registre);// Données d'adresse Registre.Emplacements des données actives.
  SPI.transfer(Data);// Données d'affichages ou configurations (setup).

  digitalWrite(DATA_IN, HIGH); //Etat haut pour désactivé la communication.

  SPI.endTransaction(); // Fin de la transmission SPI

}//fin de la fonction TRSF.



//---------------initialisation---------------.
void setup() {

  pinMode(DATA_IN, OUTPUT); //Configuration de la sortie 10.
  SPI.begin(); //Ouverture d'une liaison SPI.
  
  /*********************** Premier paramètrage des registres de bases ***************************/

  Trsf7219(0x0A, 0x08);//0x0A Registre du mode de luminosité paramettre 13/32 soit 0x06.

  Trsf7219(0x0F, 0x01);//0x0f Registre du mode TEST toute les  LEDs s'allumeent paramettre 0x01.
  delay(3000);
  Trsf7219(0x0F, 0x00);//Désactivation du mode TEST paramettre 0x00.

  Trsf7219(0x09, 0x00);//0x09 Registre du mode "B" de décodage  est désactivé car paramèttré à 0x00.
  Trsf7219(0x0B, 0x07);//0x0B Registre du mode de Scan-limite ( Nombres de digite affichées) parmettre 8 digit soit 0x07

  Trsf7219(0x0C, 0x01);//0x0C Registre du mode ShuteDown (Demande une extinction de la puce 0x01).


  /**************************Mise à l'extinction de tout les segments sur tout les digits *****************************/
  Trsf7219(0x01, 0xFF); // 0x01 Registre du digit 1 paramettre 0xFF (colonne 1) 
  Trsf7219(0x02, 0xFF); // 0x02 Registre du digit 2 paramettre 0xFF (colonne 2)
  Trsf7219(0x03, 0xC3); // 0x03 Registre du digit 3 paramettre 0xC3 (colonne 3)
  Trsf7219(0x04, 0xDB); // 0x04 Registre du digit 4 paramettre 0xDB (colonne 4)
  Trsf7219(0x05, 0xDB); // 0x05 Registre du digit 5 paramettre 0xDB (colonne 5)
  Trsf7219(0x06, 0xC3); // 0x06 Registre du digit 6 paramettre 0xC3 (colonne 6)
  Trsf7219(0x07, 0xFF); // 0x07 Registre du digit 7 paramettre 0xFF (colonne 7)
  Trsf7219(0x08, 0xFF); // 0x08 Registre du digit 8 paramettre 0xFF (colonne 8)
  delay(1000);




}//-----------------Fin de setup---------------------.

//-------------Programme---------------.
void loop() {

}//----------------Fin de loop---------------------.





