/***** PLAISIR ARDUINO *****/

/* L'instruction if

  Matériels:
  - Carte Arduino UNO => http://www.arduino.cc/en/Main/ArduinoBoardUno
*/
void setup() {//Programme de configuration, initialisation et test.

  /****** CONFIGURATIONS ******/
  Serial.begin(9600); //Configuration du moniteur série.

  /****** INITIALISATIONS ******/

  /****** TEST *****/
  Serial.println("***** Moniteur pret *****");//Affichage d'un message.
  Serial.println();//Saut de ligne.

  /*Programme monté dans le setup pour execution uniqu*/
  //Déclaration des variable locale.
  int var1 = 3;
  int var2 = 1;
  int var3 = 5;

  if (var1 > var2) //Contrôle de la condition d'exécution.
  {
    //Actions programmées.
    Serial.println("if => var1 > var2");//Affichage d'un message.
    Serial.println();//Saut de ligne.
  }//fin de if.

  if (var1 > var2 && var1 < var3) //Contrôle de la condition d'exécution.
  {
    Serial.println("if ==> var1>var2 && var1<var3");//Affichage d'un message.
    Serial.println();//Saut de ligne.
  }//fin de if.

  if (var1 > var3) //Contrôle de la condition d'exécution.
  {
    //Actions programmées.
    Serial.println("var1 > var3");//Affichage d'un message.
    Serial.println();//Saut de ligne.
  }//fin de if.
  else
  {
    //Actions programmées.
    Serial.println("else => var1 > var3");//Affichage d'un message.
    Serial.println();//Saut de ligne.
  }//fin de else.

}//Fin de setup().

void loop() {//Programme principal.


}//Fin de loop()
