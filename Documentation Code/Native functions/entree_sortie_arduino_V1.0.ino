
/****************************************************************************

ce programme Affiche dans le monieur serie la valeur L'entee analogique A0


modified 23 Septembre 2015
  by contact@plaisirarduino.fr

*******************************************************************************/
int PinSelect = A0;    



void setup() {
  
  Serial.begin(9600);

}

void loop() {

  int InBroche = analogRead(PinSelect);
  
  Serial.println(InBroche);

}
