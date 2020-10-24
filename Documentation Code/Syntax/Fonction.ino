/********************** PLAISIR ARDUINO ***********************
************************* LA FONCTION *************************
    Le 11/11/2016. par D-L M. http://plaisirarduino.fr/

    Le but de ce programme est de vous faire comprendre comment
    créer et utiliser une fonction.

    Nous exploiterons des instructions simple tel que Serial.pritn()
    et un calcul mathématique pour exploiter des fonctions.

    Il ce décompose en quatre parties de programmes.
    Des exemples de diverses exploitations possible des fonctions.

    Note: Nous utiliserons while(1) en fin de programme pour la lisibilité
    des retours au moniteur série.

    Materiels:
    -Carte Arduino UNO. https://www.arduino.cc/en/Main/ArduinoBoardUno
*/

void setup() {
  /***** CONFIGURATIONS *****/
  //Moniteur.
  Serial.begin(9600); //Vitesse du port série.

  /***** TEST *****/
  //Moniteur.
  Serial.println("***** Moniteur pret *****"); //Affichage d'un message.
  Serial.println(); //Saut à la ligne.

  /***** INITIALISATION *****/
  //Pas d'initialisation.
}

//Programme principale.
void loop() {

  // 1 - Afficher un message par une fonction.
  fonction_1(); //Appel de fonction.

  // 2 - Retourner le résultat d'une opération.
  Serial.print("Le resultat de fonction_2() est : "); //Affichage d'un message.
  //Affichage de la valeur de fonction_2().
  Serial.print(fonction_2()/*Appel de fonction_2*/); //Fonction_2 en paramètre.
  Serial.println(); //Saut à la ligne.

  // 3 - Retourner le résultat d'une opération paramétré.
  // Déclaration des variables local à la fonction loop().
  int val_a = 5; //Variable utile au paramétrage de fonction_3();
  int val_b = 2; //Variable utile au paramétrage de fonction_3();

  Serial.print("Le resultat de fonction_3() est : "); //Affichage d'un message.
  //Affichage de la valeur de fonction_3().
  Serial.println(fonction_3(val_a, val_b)/*Appel de fonction_3*/); /*//Fonction_3 en paramètre.
  Serial.println(); //Saut à la ligne.*/

  // 4 - Retourner le résultat d'une opération paramétré par une fonction.
  // Déclaration des variables local à la fonction loop().
  int val_d = 6; //Variable utile au paramétrage de fonction_3();*/

  Serial.print("Le resultat de fonction_4() est : "); //Affichage d'un message.
  //Appel des fonctions dans la fonction print().
  Serial.println(fonction_4(fonction_2(), fonction_3(val_a, val_b) ));

  // 5 - Retourner le résultat d'une opération paramétré par un tableau.
  int tbl [5] = {700, 40, 10, 20, 7};
  //Appel de la fonction dans la fonction print().
  Serial.print("Le resultat de fonction_5() est : "); //Affichage d'un message.
  Serial.println(fonction_5(tbl[0], tbl[1], tbl[2], tbl[3], tbl[4]));


  while (1); //Arrêt forcé du programme pour lisibilité au moniteur.
} //Fin de loop.

//***************** Déclaration de nos fonction *******************//

//************** Fonction_1() => Affiche un message. **************//
/* - Elle ne contient aucun paramètres et ne renvoie rien.
   - Elle exécute seulement les instructions dans son bloc. */

//Fonction de type "void" appelé fonction_1, sans paramètres.
void fonction_1 () { 
  Serial.println("fonction_1() est executee ");//Affichage du message.
  //Serial.println(); //Saut à la ligne.
}//************************ Fin de fonction_1() ********************//

//****** Fonction_2() => Retourne le résultat d'une opération. *****//
/* - Elle ne contient aucun paramètres.
   - Elle renvoie le résultat du calcul effectué.
   - Elle à deux variable local pour traitement. */

 //Fonction de type "int" appelé fonction_2, sans paramètres.
int fonction_2 () {

  // Déclaration des variables locale à fonction_2
  int val_1 = 68; //Variable utile au traitement du calcul.
  int val_2 = 2; //Variable utile au traitement du calcul.
  int resultat_2 = 0; //Variable utile au traitement du calcul.

  // Exécution du calcul
  resultat_2 = val_1 + val_2; //Calcul.

  // Retour de fonction.
  return (resultat_2); // Résultat_2 est notre variable de retour.
}//************************ Fin de fonction_3() ********************//

//************* Fonction_3() => Retourne le résultat ***************//
//************* d'une opération en fonction de ses paramètres. *****//
/* - Elle contient deux paramètres.
   - Elle renvoie le résultat du calcul effectué.
   - Elle a pour valeurs de paramètres deux variables définis. */

//Fonction de type "int" appelé fonction_3 avec 2 paramètres.
int fonction_3 (int a, int b) {

  // Déclaration des variables locale à fonction_3
  int resultat_3 = 0; //Variable utile au traitement du calcul.

  // Exécution du calcul
  resultat_3 = a + b; //Calcul.

  // Retour de fonction.
  return (resultat_3); // Résultat_3 est notre variable de retour.
}//************************ Fin de fonction_3() ********************//

//************* Fonction_4() => Retourne le résultat ***************//
//************* d'une opération en fonction de ses paramètres. *****//
/* - Elle contient deux paramètres.
   - Elle renvoie le résultat du calcul effectué.
   - Elle a pour valeurs de paramètres deux fonctions. */

//Fonction de type "int" appelé fonction_4 avec 2 paramètres.
int fonction_4 (int c, int d) {

  // Déclaration des variables locale à fonction_4
  int resultat_4 = 0; //Variable utile au traitement du calcul.

  // Exécution du calcul
  resultat_4 = c + d; //Calcul.

  // Retour de fonction.
  return (resultat_4); // Résultat_4 est notre variable de retour.
}//************************ Fin de fonction_4() ********************//

//************* Fonction_5() => Retourne le résultat ***************//
//************* d'une opération en fonction de ses paramètres. *****//
/* - Elle contient deux paramètres.
   - Elle renvoie le résultat du calcul effectué.
   - Elle a pour valeurs de paramètres un tableau */

//Fonction de type "int" appelé fonction_5 avec 5 Paramètres.
int fonction_5 (int tabl1, int tabl2, int tabl3, int tabl4, int tabl5) {

  // Déclaration des variables locale à fonction_4
  int resultat_5 = 0; //Variable utile au traitement du calcul.

  // Exécution du calcul
  resultat_5 = tabl1 + tabl2 + tabl3 + tabl4 + tabl5; //Calcul.

  // Retour de fonction.
  return (resultat_5); // Résultat_5 est notre variable de retour.
}// ************************ Fin de fonction_5() ********************//

/**************************************************************************
************************************ FIN **********************************
**************************************************************************/



