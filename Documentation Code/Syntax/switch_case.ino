/*PLAISIR ARDUINO

   Comprendre l'instruction switch case.

   -Nous avons définis 10 actions de 0 à 9 à réaliser.
   en fonction de la variable "var".
   -Pour les realiser modifier la valeur de la variable "var".
   -Si sa valeur est comprise entre 0 et 10 elle sera affiché en retour
   au moniteur serie.
   -Si savaleur est supperieur à 10 switch executera l'instructions
   par défaut avec un retour au moniteur série.

   1) Changez la valeur de la variable pour voir les actions au moniteur série.
   2) Retirez l'instruction break a une ou plusieurs instruction pour
   voire le résultat
   3) Remarquez la construction de la seconde instruction switch qui selectionne
    les chiffres paires et impaires.

   Note: Nous utiliserons while(1); en fin de programme pour eviter
   le bouclage et la répétitions des lignes affiché au moniteur */

/***** Déclarations des variables globales *****/

void setup() {

  /***** CONFIGURATION *****/
  Serial.begin(9600); //Port serie.

  /***** INITIALISATION *****/
  //Pas d'initialisation ici.

  /***** TEST *****/
  Serial.println("Moniteur pret"); //Affichage d'un message.
  Serial.println();//Saut de ligne.
  delay(2000); //Temporisation d'affichage.
}

void loop() {

  /***** Déclarations des variables locales *****/
  //Changer les données des variables pour observer le fonctionnement.
  int var = 5; //Variable utile.
  char lettre = 'b';//Variable utile.

  //***** L'instruction switch. Selection de 0 à 9.
  switch (var) {

    case 0: //Donnée de selection.
      Serial.println("var = 0");//Affichage d'un message.
      break; //Sortire du bloc

    case 1://Donnée de selection.
      Serial.println("var = 1");//Affichage d'un message.
      break; //Sortire du bloc

    case 2://Donnée de selection.
      Serial.println("var = 2");//Affichage d'un message.
      break;//Sortire du bloc

    case 3://Donnée de selection.
      Serial.println("var = 3");//Affichage d'un message.
      break;//Sortire du bloc

    case 4://Donnée de selection.
      Serial.println("var = 4");//Affichage d'un message.
      break;//Sortire du bloc

    case 5://Donnée de selection.
      Serial.println("var = 5");//Affichage d'un message.
      break;//Sortire du bloc

    case 6://Donnée de selection.
      Serial.println("var = 6");//Affichage d'un message.
      break;//Sortire du bloc

    case 7://Donnée de selection.
      Serial.println("var = 7");//Affichage d'un message.
      break;//Sortire du bloc

    case 8://Donnée de selection.
      Serial.println("var = 8");//Affichage d'un message.
      break;//Sortire du bloc

    case 9://Donnée de selection.
      Serial.println("var = 9");//Affichage d'un message.
      break;//Sortire du bloc

    default: //Selection par défaut.
      Serial.println("var > 10");//Affichage d'un message.
      break;//Sortire du bloc
  }//Fin de switch de 0 à 9.

  //***** L'instruction switch. Selection paire ou impaire.
  switch (var) {

    case 1://Donnée de selection.
    case 3://Donnée de selection.
    case 5://Donnée de selection.
    case 7://Donnée de selection.
    case 9://Donnée de selection.
      Serial.println("var est impaire");//Affichage d'un message.
      break; //Sortire du bloc

    case 2://Donnée de selection.
    case 4://Donnée de selection.
    case 6://Donnée de selection.
    case 8://Donnée de selection.
      Serial.println("var est paire");//Affichage d'un message.
      break;//Sortire du bloc

    default: //Selection par défaut.
      Serial.println("var > 10");//Affichage d'un message.
      break;//Sortire du bloc
  }//Fin de switch paire ou impaire.

  //***** L'instruction switch. Selection des lettres.
  switch (lettre) {

    case 'a': //Donnée de selection.
      Serial.println("lettre a");//Affichage d'un message.
      break; //Sortire du bloc

    case 'b'://Donnée de selection.
      Serial.println("lettre b");//Affichage d'un message.
      break; //Sortire du bloc
  }//Fin de switch lettres.

  while (1); //Arret force du programme.
}// Fin de loop
