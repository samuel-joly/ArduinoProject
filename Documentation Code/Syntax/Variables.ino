/*-----Les variables-----*/

/*----Déclaration de variables----*/
int var1 = 100; //Déclaration d'une variable globale au programme.

void setup() {
  Serial.begin(9600); // On ouvre un port serie pour l'exploitation du moniteur serie.

  /*----Déclaration de variables----*/
  int var2 = 200;//Déclaration d'une variable locale à la fonction "setup"

}//----fin de setup.

void loop() {
  /*----Déclaration de variables----*/
  int var3 = 300;//Déclaration d'une variable locale à la fonction "loop"
  int resultat; //Déclaration d'une variable locale à la fonction "loop"

  /*----Exploitation de nos variable----*/
  resultat = var1 + var3;//Addition de nos variables.
  Serial.println(resultat); //Affichage de la valeur => moniteur serie.

  while (1); //Arret forcé de la boucle.
}//----fin de loop
