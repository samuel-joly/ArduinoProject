/*************************** PLAISIR ARDUINO ***************************
 *********************** AFFICHEURS SEPT SEGMENTS et MAX7219 ***********************
    Le 18/10/2016. http://plaisirarduino.fr/

  Bute du programme:
  Réaliser un afficheur digit par digit sans décode mode et ensuite avec décode mode.

 


  Materiels:
   Puce MAX7219
   Afficheurdigits KYX5461AS x2.
   Carte arduino UNO.

  Note utiles: Câblages des broches.
  | Arduino    | MAX7219 |
  | ---------  | -----------
  | MOSI (11)  => DIN (1)        Data.(données)
  | SCK  (13)  => CLK (13)       Horloge.(cadence des Bits. Broche de sortie arduino configuré pour ce travail en intern)
  | CS   (10)  => LOAD/CS (12)   Chargement.(Activation du chargement des données dans la puce).
   Pour les broches "ICSP" Du mode "SPI voir doc Carte Arduino.

  Mettre en place 10K ohm  minimum de resistance cablées en "Iset" (18-MAX729). (limitation de courants dans les LEDs).
  Transfert de donées sur 2 octets.

*/

//---------------Base programme---------------.
#include <SPI.h> //Bibliotheque SPI Communication Maitre-esclave.

SPISettings TransferMAX7219(10000000, MSBFIRST, SPI_MODE2); // Le premier paramettre de SPISetting est la vitesse maximale de transmission, le second paramettre est l'envoie du bit de poid fort en premier, le troisiéme parammettre est le mode transfert qui syncronise l'horloge et les données.

//----------Fonction de transfert de données--------------//
void Trsf7219(uint8_t Registre, uint8_t Data) { //Construction de la fonction => Données de registres et donées utiles formées sur 8bits.

  digitalWrite(SS, LOW);//Debut de la transmision de donées.Etat bas pour activé la com.
  delay(10);// Laisse le temps d'activation.
  SPI.beginTransaction(TransferMAX7219); // Debut de transmission SPI
  SPI.transfer(Registre);// Données d'adresse Registre.Emplacements des données actives.
  SPI.transfer(Data);// Données d'affichages ou configurations (setup).
  SPI.endTransaction(); // Fin de la transmission SPI
  digitalWrite(SS, HIGH); //Etat haut pour désactivé la communication.



}//fin de la fonction TRSF.



//---------------initialisation---------------.
void setup() {

  SPI.begin(); //Ouverture d'une liaison SPI.

  /*********************** Premier paramettrage des registres de bases ***************************/

  Trsf7219(0x0A, 0x06);//0x0A Registre du mode de luminosité paramère 13/32 soit 0x06.

  Trsf7219(0x0F, 0x01);//0x0f Registre du mode TEST toute les  LEDs s'allumeent paramettre 0x01.
  delay(3000);
  Trsf7219(0x0F, 0x00);//Désactivation du mode TEST paramettre 0x00.

  Trsf7219(0x09, 0x00);//0x09 Registre du mode "B" de décodage  paraètre OFF paramettre 0x00

  Trsf7219(0x0B, 0x07);//0x0B Registre du mode de Scan-limite ( Nombres de digite affichées) parmètre 8 digit soit 0x07

  Trsf7219(0x0C, 0x01);//0x0C Registre du mode ShuteDown (Demande une extinction de la puce 0x01).


  /**************************Mise à l'extinction de tout les segments sur tout les digits *****************************/
  Trsf7219(0x01, 0x00); // 0x01 Registre du digit 1 paramètre Blank soit 0x0f
  Trsf7219(0x02, 0x00); // 0x02 Registre du digit 2 paramètre Blank soit 0x0f
  Trsf7219(0x03, 0x00); // 0x03 Registre du digit 3 paramètre Blank soit 0x0f
  Trsf7219(0x04, 0x00); // 0x04 Registre du digit 4 paramètre Blank soit 0x0f

  Trsf7219(0x05, 0x00); // 0x05 Registre du digit 5 paramètre Blank soit 0x0f
  Trsf7219(0x06, 0x00); // 0x06 Registre du digit 6 paramètre Blank soit 0x0f
  Trsf7219(0x07, 0x00); // 0x07 Registre du digit 7 paramètre Blank soit 0x0f
  Trsf7219(0x08, 0x00); // 0x08 Registre du digit 8 paramètre Blank soit 0x0f
  delay(1000);




}//-----------------Fin de setup---------------------.

//-------------Programme---------------.
void loop() {
  Trsf7219(0x01, 0x78);
  delay (100);
  Trsf7219(0x02, 0x08);
  delay (100);
  Trsf7219(0x03, 0x08);
  delay (100);
  Trsf7219(0x04, 0x08);
  delay (100);
  Trsf7219(0x05, 0x08);
  delay (100);
  Trsf7219(0x06, 0x08);
  delay (100);
  Trsf7219(0x07, 0x08);
  delay (100);
  Trsf7219(0x08, 0x4E);
  delay(100);
  Trsf7219(0x07, 0x48);
  delay (100);
  Trsf7219(0x06, 0x48);
  delay (100);

  Trsf7219(0x05, 0x48);
  delay (100);

  Trsf7219(0x04, 0x48);
  delay (100);

  Trsf7219(0x03, 0x48);
  delay (100);

  Trsf7219(0x02, 0x48);
  delay (100);

  Trsf7219(0x01, 0x48);
  delay (100);

  for ( int i = 0 ; i < 9; i++)
  {
    Trsf7219(0x00 + i, 0x00);
  }
  delay(1000);

  Trsf7219(0x08, 0x77); // A
  Trsf7219(0x07, 0x05); // r
  Trsf7219(0x06, 0x3D); // d
  Trsf7219(0x05, 0x1C); // u
  Trsf7219(0x04, 0x10); // i
  Trsf7219(0x03, 0x15); // n
  Trsf7219(0x02, 0x1D); // o
  Trsf7219(0x01, 0x00); // blank
  delay(3000);
  for ( int i = 0 ; i < 9; i++)
  {
    Trsf7219(0x00 + i, 0x00);
  }
 delay(1000);
  Trsf7219(0x09, 0xFF);//0x09 Registre du mode "B" de décodage  activé
 
  
  Trsf7219(0x01, 0x01); // 1
  Trsf7219(0x02, 0x02); // 2
  Trsf7219(0x03, 0x03); // 3
  Trsf7219(0x04, 0x04); // 4
  Trsf7219(0x05, 0x05); // 5
  Trsf7219(0x06, 0x06); // 6
  Trsf7219(0x07, 0x07); // 7
  Trsf7219(0x08, 0x08); // 8
  delay(3000);

 
  Trsf7219(0x09, 0x00);//0x09 Registre du mode "B" de décodage  paramètre 0x00
    for ( int i = 0 ; i < 9; i++)
  {
    Trsf7219(0x00 + i, 0x00);
  }
  delay(1000);


}//----------------Fin de loop---------------------.





