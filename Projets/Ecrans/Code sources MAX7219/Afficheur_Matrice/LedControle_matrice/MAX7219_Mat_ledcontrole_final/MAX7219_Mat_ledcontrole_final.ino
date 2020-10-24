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

  pin 13 is connected to the DataIn
  pin 11 is connected to the CLK 13
  pin 10 is connected to LOAD 10

*/

/***** Inclusion des bibliothèques utiles *****/
#include <LedControl.h> //Permet l'exploitation des afficheurs.


/***** Déclarations des objets *****/
LedControl MatriceMax = LedControl(11, 13, 10, 1);

/***** Déclarations des variables globales *****/
unsigned int interval = 1000; //Temporisation entre chaque affichage.

//Variable d'assignation des lettres de l'alphabet au tableau "alpha[]"
int A = 1; int B = 2; int C = 3; int D = 4; int E = 5; int F = 6; int G = 7; int H = 8; int I = 9;
int J = 10; int K = 11; int L = 12; int M = 13; int N = 14; int O = 15; int P = 16; int Q = 17;
int R = 18; int S = 19; int T = 20; int U = 21; int V = 22; int W = 23; int X = 24; int Y = 25;
int Z = 26;

/***** Déclarations des Tableaux globales *****/
//Tableau de transfert de characteres => tableau "alpha".
byte alpha  [27][8] = {
  {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000},// ==> xxxx Pave nul
  {B00000000, B01111111, B10001000, B10001000, B10001000, B01111111, B00000000, B00000000},// ==> A =0
  {B00000000, B11111111, B10010001, B10010001, B10010001, B01101110, B00000000, B00000000},// ==> B =1
  {B00000000, B01111110, B10000001, B10000001, B10000001, B10000001, B00000000, B00000000},// ==> C =2
  {B00000000, B11111111, B10000001, B10000001, B01000010, B00111100, B00000000, B00000000},// ==> D =3
  {B00000000, B11111111, B10010001, B10010001, B10010001, B10010001, B00000000, B00000000},// ==> E =4
  {B00000000, B11111111, B10010000, B10010000, B10010000, B10010000, B00000000, B00000000},// ==> F =5
  {B00000000, B01111110, B10000001, B10001001, B10001111, B10001000, B00000000, B00000000},// ==> G =6
  {B00000000, B11111111, B00010000, B00010000, B00010000, B11111111, B00000000, B00000000},// ==> H =7
  {B00000000, B10000001, B10000001, B11111111, B10000001, B10000001, B00000000, B00000000},// ==> I =8
  {B00000000, B10000010, B10000001, B11111111, B10000000, B10000000, B00000000, B00000000},// ==> J =9
  {B00000000, B11111111, B00011000, B00100100, B01000010, B10000001, B00000000, B00000000},// ==> K =10
  {B00000000, B11111111, B00000001, B00000001, B00000001, B00000001, B00000000, B00000000},// ==> L =11
  {B00000000, B11111111, B01000000, B00100000, B01000000, B11111111, B00000000, B00000000},// ==> M =12
  {B00000000, B11111111, B01100000, B00011000, B00000110, B11111111, B00000000, B00000000},// ==> N =13
  {B00000000, B01111110, B10000001, B10000001, B10000001, B01111110, B00000000, B00000000},// ==> O =14
  {B00000000, B11111111, B10001000, B10001000, B10001000, B01110000, B00000000, B00000000},// ==> P =15
  {B00000000, B01111110, B10000001, B10000101, B10000010, B01111101, B00000000, B00000000},// ==> Q =16
  {B00000000, B11111111, B10001000, B10001100, B10001010, B01110001, B00000000, B00000000},// ==> R =17
  {B00000000, B01100001, B10010001, B10011001, B10001001, B10000110, B00000000, B00000000},// ==> S =18
  {B00000000, B10000000, B10000000, B11111111, B10000000, B10000000, B00000000, B00000000},// ==> T =19
  {B00000000, B11111110, B00000001, B00000001, B00000001, B11111110, B00000000, B00000000},// ==> U =20
  {B00000000, B11111000, B00000110, B00000001, B00000110, B11111000, B00000000, B00000000},// ==> V =21
  {B00000000, B11111100, B00000011, B00001100, B00000011, B11111100, B00000000, B00000000},// ==> W =22
  {B00000000, B10000001, B01100110, B00011000, B01100110, B10000001, B00000000, B00000000},// ==> X =23
  {B00000000, B11000000, B00110000, B00001111, B00110000, B11000000, B00000000, B00000000},// ==> Y =24
  {B00000000, B10000011, B10000101, B10011001, B10100001, B11000001, B00000000, B00000000},// ==> Z =25
};//Fin de tableau des caractères.

//Tableau des icones.
byte symb [18][8] = {
  {B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000},// 0==> xxxx Pave nul
  {B01110000, B10001100, B10000010, B01100001, B01100001, B10000010, B10001100, B01110000},// 1==> Coeur
  {B01111110, B10000001, B10101101, B10001101, B10001101, B10101101, B10000001, B01111110},// 2==> Emoti :-|
  {B01111110, B10000001, B10101001, B10000101, B10000101, B10101001, B10000001, B01111110},// 3==> Emoti :-)
  {B01111110, B10000001, B10100101, B10001001, B10001001, B10100101, B10000001, B01111110},// 4==> Emoti :-(
  {B00010000, B00110000, B01100000, B11111111, B11111111, B01100000, B00110000, B00010000},// 5==> fleche Haut
  {B00011000, B00111100, B01111110, B11011011, B00011000, B00011000, B00011000, B00011000},// 6==> fleche Gauche
  {B00001000, B00001100, B00000110, B11111111, B11111111, B00000110, B00001100, B00001000},// 7==> fleche Bas
  {B00011000, B00011000, B00011000, B00011000, B11011011, B01111110, B00111100, B00011000},// 8==> fleche Droite
  {B11001100, B11001100, B00110011, B00110011, B11001100, B11001100, B00110011, B00110011},// 9==>damier

};//Fin du tableau de caractères

void setup() {

  /***** CONFIGURATION *****/
  Serial.begin (9600);
  //MAX7219.
  MatriceMax.shutdown(0, false);//Extinction de l'afficheur selectionné en mode veille si "true".(économie d'énergie)
  MatriceMax.clearDisplay(0);//Efface les instructions d'affichage contenu en mémoire dans MAX.
  MatriceMax.setIntensity(0, 8);//Ajustement de la luminosité de l'afficheur.
  MatriceMax.setScanLimit(0, 8); //Défini le nombre de chiffres (ou lignes) à afficher.//--*/

}//fin de setup.

//------------LOOP----------------------
void loop() {
 
  //delay(3000);
  //alphabet();
  //phrase();
  //icone();
  phrasebis();
  //lettre(S);
  //lettre(A);
  //lettre(L);
  //lettre(U);,
  //lettre(T);,
  defdroite(9);
  defgauche(2);
  defgauche(4);


  MatriceMax.clearDisplay(0);
  //phrasebis();




  delay(000);
}//------------------Fin de LOOP---------------------


void alphabet () {
  for (int j = 0; j < 27; j++) {
    for (int i = 0; i < 8; i++) {
      MatriceMax.setRow(0, i, alpha[j][i]);
    }
    delay(interval);
  }
  delay(500);
}//fin de alphabet().

void phrase() {
  int table[7] = {M, E, R, C , I  };

  for (int j = 0; j < 5; j++) {
    for (int i = 0; i < 8; i++) {
      MatriceMax.setRow(0, i, alpha[table[j]][i]);
    }
    delay(800);
  }
}//Fin de phrase().

void icone() {
  for (int j = 0; j < 10; j++) {
    for (int i = 0; i < 8; i++) {
      MatriceMax.setRow(0, i, symb[j][i]);
      delay(10);
    }
    delay(interval);
  }
  MatriceMax.clearDisplay(0);
  delay(2000);
}//Fin de icone().





void lettre(char LET)
{

  for (int i = 8; i > -7; i--) {

    for (int j = 0; j < 8; j++) {

      MatriceMax.setRow(0, i + j, alpha[LET][j]);

    }

    delay (100);
  }
}//Fin de lettre()


void phrasebis() {
  int table[15] = {P, L, A, I , S, I, R, A , R, D, U, I, N, O };
  int j = 0;
  for (int i = 8; i > -105; i--) {

    MatriceMax.setRow(0, i + 1 , alpha[table[j]][0]);//P
    MatriceMax.setRow(0, i + 2 , alpha[table[j]][1]);
    MatriceMax.setRow(0, i + 3, alpha[table[j]][2]);
    MatriceMax.setRow(0, i + 4, alpha[table[j]][3]);
    MatriceMax.setRow(0, i + 5 , alpha[table[j]][4]);
    MatriceMax.setRow(0, i + 6 , alpha[table[j]][5]);
    MatriceMax.setRow(0, i + 7, alpha[table[j]][6]);


    MatriceMax.setRow(0, i + 8, alpha[table[j + 1]][0]);//l
    MatriceMax.setRow(0, i + 9, alpha[table[j + 1]][1]);
    MatriceMax.setRow(0, i + 10, alpha[table[j + 1]][2]);
    MatriceMax.setRow(0, i + 11, alpha[table[j + 1]][3]);
    MatriceMax.setRow(0, i + 12, alpha[table[j + 1]][4]);
    MatriceMax.setRow(0, i + 13, alpha[table[j + 1]][5]);
    MatriceMax.setRow(0, i + 14, alpha[table[j + 1]][6]);

    MatriceMax.setRow(0, i + 15, alpha[table[j + 2]][0]);//A
    MatriceMax.setRow(0, i + 16, alpha[table[j + 2]][1]);
    MatriceMax.setRow(0, i + 17, alpha[table[j + 2]][2]);
    MatriceMax.setRow(0, i + 18, alpha[table[j + 2]][3]);
    MatriceMax.setRow(0, i + 19, alpha[table[j + 2]][4]);
    MatriceMax.setRow(0, i + 20, alpha[table[j + 2]][5]);
    MatriceMax.setRow(0, i + 21, alpha[table[j + 2]][6]);

    MatriceMax.setRow(0, i + 22, alpha[table[j + 3]][0]);//I
    MatriceMax.setRow(0, i + 23, alpha[table[j + 3]][1]);
    MatriceMax.setRow(0, i + 24, alpha[table[j + 3]][2]);
    MatriceMax.setRow(0, i + 25, alpha[table[j + 3]][3]);
    MatriceMax.setRow(0, i + 26, alpha[table[j + 3]][4]);
    MatriceMax.setRow(0, i + 27, alpha[table[j + 3]][5]);
    MatriceMax.setRow(0, i + 28, alpha[table[j + 3]][6]);

    MatriceMax.setRow(0, i + 29, alpha[table[j + 4]][0]);//S
    MatriceMax.setRow(0, i + 30, alpha[table[j + 4]][1]);
    MatriceMax.setRow(0, i + 31, alpha[table[j + 4]][2]);
    MatriceMax.setRow(0, i + 32, alpha[table[j + 4]][3]);
    MatriceMax.setRow(0, i + 33, alpha[table[j + 4]][4]);
    MatriceMax.setRow(0, i + 34, alpha[table[j + 4]][5]);
    MatriceMax.setRow(0, i + 35, alpha[table[j + 4]][6]);

    MatriceMax.setRow(0, i + 36, alpha[table[j + 5]][0]);//I
    MatriceMax.setRow(0, i + 37, alpha[table[j + 5]][1]);
    MatriceMax.setRow(0, i + 38, alpha[table[j + 5]][2]);
    MatriceMax.setRow(0, i + 39, alpha[table[j + 5]][3]);
    MatriceMax.setRow(0, i + 40, alpha[table[j + 5]][4]);
    MatriceMax.setRow(0, i + 41, alpha[table[j + 5]][5]);
    MatriceMax.setRow(0, i + 42, alpha[table[j + 5]][6]);

    MatriceMax.setRow(0, i + 43, alpha[table[j + 6]][0]);//R
    MatriceMax.setRow(0, i + 44, alpha[table[j + 6]][1]);
    MatriceMax.setRow(0, i + 45, alpha[table[j + 6]][2]);
    MatriceMax.setRow(0, i + 46, alpha[table[j + 6]][3]);
    MatriceMax.setRow(0, i + 47, alpha[table[j + 6]][4]);
    MatriceMax.setRow(0, i + 48, alpha[table[j + 6]][5]);
    MatriceMax.setRow(0, i + 49, alpha[table[j + 6]][6]);

    MatriceMax.setRow(0, i + 50, alpha[table[j + 7]][0]);//A
    MatriceMax.setRow(0, i + 51, alpha[table[j + 7]][1]);
    MatriceMax.setRow(0, i + 52, alpha[table[j + 7]][2]);
    MatriceMax.setRow(0, i + 53, alpha[table[j + 7]][3]);
    MatriceMax.setRow(0, i + 54, alpha[table[j + 7]][4]);
    MatriceMax.setRow(0, i + 55, alpha[table[j + 7]][5]);
    MatriceMax.setRow(0, i + 56, alpha[table[j + 7]][6]);

    MatriceMax.setRow(0, i + 57, alpha[table[j + 8]][0]);//R
    MatriceMax.setRow(0, i + 58, alpha[table[j + 8]][1]);
    MatriceMax.setRow(0, i + 59, alpha[table[j + 8]][2]);
    MatriceMax.setRow(0, i + 60, alpha[table[j + 8]][3]);
    MatriceMax.setRow(0, i + 61, alpha[table[j + 8]][4]);
    MatriceMax.setRow(0, i + 62, alpha[table[j + 8]][5]);
    MatriceMax.setRow(0, i + 63, alpha[table[j + 8]][6]);

    MatriceMax.setRow(0, i + 64, alpha[table[j + 9]][0]);//D
    MatriceMax.setRow(0, i + 65, alpha[table[j + 9]][1]);
    MatriceMax.setRow(0, i + 66, alpha[table[j + 9]][2]);
    MatriceMax.setRow(0, i + 67, alpha[table[j + 9]][3]);
    MatriceMax.setRow(0, i + 68, alpha[table[j + 9]][4]);
    MatriceMax.setRow(0, i + 69, alpha[table[j + 9]][5]);
    MatriceMax.setRow(0, i + 70, alpha[table[j + 9]][6]);

    MatriceMax.setRow(0, i + 71, alpha[table[j + 10]][0]);//U
    MatriceMax.setRow(0, i + 72, alpha[table[j + 10]][1]);
    MatriceMax.setRow(0, i + 73, alpha[table[j + 10]][2]);
    MatriceMax.setRow(0, i + 74, alpha[table[j + 10]][3]);
    MatriceMax.setRow(0, i + 75, alpha[table[j + 10]][4]);
    MatriceMax.setRow(0, i + 76, alpha[table[j + 10]][5]);
    MatriceMax.setRow(0, i + 77, alpha[table[j + 10]][6]);

    MatriceMax.setRow(0, i + 78, alpha[table[j + 11]][0]);//I
    MatriceMax.setRow(0, i + 79, alpha[table[j + 11]][1]);
    MatriceMax.setRow(0, i + 80, alpha[table[j + 11]][2]);
    MatriceMax.setRow(0, i + 81, alpha[table[j + 11]][3]);
    MatriceMax.setRow(0, i + 82, alpha[table[j + 11]][4]);
    MatriceMax.setRow(0, i + 83, alpha[table[j + 11]][5]);
    MatriceMax.setRow(0, i + 84, alpha[table[j + 11]][6]);

    MatriceMax.setRow(0, i + 85, alpha[table[j + 12]][0]);//N
    MatriceMax.setRow(0, i + 86, alpha[table[j + 12]][1]);
    MatriceMax.setRow(0, i + 87, alpha[table[j + 12]][2]);
    MatriceMax.setRow(0, i + 88, alpha[table[j + 12]][3]);
    MatriceMax.setRow(0, i + 89, alpha[table[j + 12]][4]);
    MatriceMax.setRow(0, i + 90, alpha[table[j + 12]][5]);
    MatriceMax.setRow(0, i + 91, alpha[table[j + 12]][6]);

    MatriceMax.setRow(0, i + 92, alpha[table[j + 13]][0]);//O
    MatriceMax.setRow(0, i + 93, alpha[table[j + 13]][1]);
    MatriceMax.setRow(0, i + 94, alpha[table[j + 13]][2]);
    MatriceMax.setRow(0, i + 95, alpha[table[j + 13]][3]);
    MatriceMax.setRow(0, i + 96, alpha[table[j + 13]][4]);
    MatriceMax.setRow(0, i + 97, alpha[table[j + 13]][5]);
    MatriceMax.setRow(0, i + 98, alpha[table[j + 13]][6]);

    MatriceMax.setRow(0, i + 99, alpha[table[j + 14]][0]);
    MatriceMax.setRow(0, i + 100, alpha[table[j + 14]][1]);
    MatriceMax.setRow(0, i + 101, alpha[table[j + 14]][2]);
    MatriceMax.setRow(0, i + 102, alpha[table[j + 14]][3]);
    MatriceMax.setRow(0, i + 103, alpha[table[j + 14]][4]);
    MatriceMax.setRow(0, i + 104, alpha[table[j + 14]][5]);
    MatriceMax.setRow(0, i + 105, alpha[table[j + 14]][6]);
    delay (100);

  }
} //Fin de phrase bis()

void defgauche(int tblsymb) {

  int j = tblsymb;
  for (int i = 9; i > -11; i--) {


    MatriceMax.setRow(0, i + 0 , symb[j][0]);//P
    MatriceMax.setRow(0, i + 1 , symb[j][1]);
    MatriceMax.setRow(0, i + 2, symb[j][2]);
    MatriceMax.setRow(0, i + 3, symb[j][3]);
    MatriceMax.setRow(0, i + 4 , symb[j][4]);
    MatriceMax.setRow(0, i + 5 , symb[j][5]);
    MatriceMax.setRow(0, i + 6, symb[j][6]);
    MatriceMax.setRow(0, i + 7,  symb[j][7]);
    MatriceMax.setRow(0, i + 8,  symb[0][0]);
    delay (100);

  }
}

void defdroite(int tblsymb) {

  int j = tblsymb;

  int i = 0;
  for (int i = -8; i < 9; i++) {
    MatriceMax.clearDisplay(0);

    MatriceMax.setRow(0, i + 8  , symb[0][0]);
    MatriceMax.setRow(0, i + 7  , symb[j][7]);
    MatriceMax.setRow(0, i + 6 , symb[j][6]);
    MatriceMax.setRow(0, i + 5 , symb[j][5]);
    MatriceMax.setRow(0, i + 4 , symb[j][4]);
    MatriceMax.setRow(0, i + 3  , symb[j][3]);
    MatriceMax.setRow(0, i + 2 , symb[j][2]);
    MatriceMax.setRow(0, i + 1 , symb[j][1]);
    MatriceMax.setRow(0, i + 0 , symb[j][0]);
    MatriceMax.setRow(0, i - 1 , symb[0][0]);

    delay (100);
  }
}





