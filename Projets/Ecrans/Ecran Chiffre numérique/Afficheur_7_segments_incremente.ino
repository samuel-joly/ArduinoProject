/****** PLAISIR ARDUINO *****/
/*Utilisation d'un afficheur sept segments.

   Matériels:
 - Carte Arduino UNO => http://www.arduino.cc/en/Main/ArduinoBoardUno
 - Afficheur 5101AS. => http://www.datasheets360.com/pdf/-5896711825166489141
 - Resistances 220 ohms et filerie de branchements.

  ---Branchements--- (o)Point de connection/ (--)Fil de connection
  o Led A  7o----o resistance 220 o-----o2 Arduino.
  |
  o Led B  6o----o resistance 220 o-----o3 Arduino.
  |
  o Led C  4o----o resistance 220 o-----o4 Arduino.
  |
  o Led D  2o----o resistance 220 o-----o5 Arduino.
  |
  o Led E  1o----o resistance 220 o-----o6 Arduino.
  |
  o Led F  9o----o resistance 220 o-----o7 Arduino.
  |
  o Led G 10o----o resistance 220 o-----o8 Arduino.
  |
  o Led DP 5o----o resistance 220 o-----o9 Arduino.
  |
  o Led GND 3o---o resistance 220 o-----oGND Arduino.
  |
  o Led GND 8o---o resistance 220 o-----oGND Arduino*/

/*Ici nous ne déclarerons pas de variables globales
  tout ce fait directement par la lecture des broches
  que nous avons pris soins de noter ci dessus.
  
  Nous déclarerons un tableau globale
  contenant les valeurs de broches utiles.*/
  
int led[8] = {2, 3, 4, 5, 6, 7, 8, 9}; //Tableau contenant les broches des leds.

void setup() {
  //Configuration des broches utiles.
  for (int i = 0; i < 8; i++) { //Mise en place de la boucle
    pinMode(led[i], OUTPUT);//Configuration une à une des broches en sorties.
  }//fin de for.

  //Test de la configuration et du montage.
  for (int i = 0; i < 8; i++) {//Mise en place de la boucle.
    digitalWrite(led[i], HIGH);//Allumage un à un de segments.
    delay(300);//Vitesse d'allumage
  }//fin de for.
  
  for (int i = 0; i < 8; i++) {//Mise en place de la boucle.
    digitalWrite(led[i], LOW);//Extinction un à un des segment.
    delay(150);//Vitesse d'extinction.
  }//fin de for.
  
  delay(2000);//Attente.--*/
}//Fin de setup.

void loop() {//Programme principale.
  /*Déclaration d'un tableau bidimensionnelle de zéro à neuf avec le DP
    puis une ligne d'extinction générale */
  bool num [12] [8] = { /*Ce tableau nous donnes l'état que doit
  avoir chaque leds allumé ou éteinte, un ou zéro.*/
  {1, 1, 1, 1, 1, 1, 0, 0}, //0
  {0, 1, 1, 0, 0, 0, 0, 0}, //1
  {1, 1, 0, 1, 1, 0, 1, 0}, //2
  {1, 1, 1, 1, 0, 0, 1, 0}, //3
  {0, 1, 1, 0, 0, 1, 1, 0}, //4
  {1, 0, 1, 1, 0, 1, 1, 0}, //5
  {1, 0, 1, 1, 1, 1, 1, 0}, //6
  {1, 1, 1, 0, 0, 0, 0, 0}, //7
  {1, 1, 1, 1, 1, 1, 1, 0}, //8
  {1, 1, 1, 1, 0, 1, 1, 0}, //9
  {0, 0, 0, 0, 0, 0, 0, 1}, //DP
  {0, 0, 0, 0, 0, 0, 0, 0}  //***
                      };//Fin du tableau.

  /*Imbrication de deux boucles pour permettre 
  la lecture des lignes et colonnes.*/
  
  /*Mise en place de la première boucle pour incrémenter 
  les lignes du tableau*/
  for (int j = 0; j < 12; j++) {
    /*Mise en place de la seconde boucle pour incrémenter 
    les colonnes du tableau.*/
    for (int i = 0; i < 8; i++) {
      /*Allumage ou extinction des leds en fonction des données du tableau.
        Chaque données de la ligne actuelle est interrogé pour savoir
        quelle est l'action à exécuter à la leds.
        HIGH=Allumage : LOW=Extinction*/
      digitalWrite (led[i], (num[j][i] == 1) ?  HIGH : LOW );
    }//fin de la 2nd boucle.
    delay(800);
  }//Fin de la 1er boucle.//---*/
}//Fin de loop.
