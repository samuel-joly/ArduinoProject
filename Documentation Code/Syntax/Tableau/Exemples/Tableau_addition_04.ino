/*PLAISIR ARDUINO*/
/*Le tableau de données*/
/*Travaux de mise en pratique*/

//-----Déclarations des tableaux -----
//1er Tableau pouvant contenir huir données renseigné manuellement.
int tab_1 [8] =  {10, 23, 35, 400, 55, 66, 79, 18};//Valeurs initialisées à la compilation.

//2nd Tableau déclaré pouvant contenir huir données laissé vierge.
int tab_2 [8] = {};//Valeurs initialisées à la compilation.

void setup() {
  Serial.begin(9600); //Ouverture et configuration de la vitesse de transmission du port serie.
  Serial.println("*** Le tableau de donnees ***"); // Affichage au moniteur (test).
  Serial.print(' '); Serial.println();

  //Affichage des données du tableau un.
  Serial.println("Donnees du tableau 1:");
  for (int i = 0; i < 8; i++) { //Mise en place d'une boucle.
    Serial.print(tab_1[i]); Serial.print('/'); //Affiche un à un les données du tableau.
    //delay(500);//Arret du programme pour lecture des affichages
  }
  Serial.println(); Serial.println(' ');

  //Affichage des données du tableau deux.
  Serial.println("Donnees du tableau 2:");
  for (int i = 0; i < 8; i++) { //Mise en place d'une boucle.
    Serial.print(tab_2[i]); Serial.print('/'); //Affiche un à un les données du tableau.
    //delay(500);//Arret du programme pour lecture des affichages
  }
  Serial.println(); Serial.println(' ');

}//Fin de setup.

void loop() {
//Calcul avec des donnée du tableau un.
int resultat;
resultat = tab_1[0]+tab_1[5];
Serial.print("Le resultat de notre calcul est "); //Message complémentiare
Serial.print(resultat); //Affichage du resultat.

while(1);//Arret forcé du programme.
}//Fin de loop.
