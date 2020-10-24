
void setup() {
 
  // Initialisation de la broche 13 en sortie
  pinMode(13, OUTPUT);
  
  
  // Boucle allumage court de la diode 3 fois 
  for (int i=0; i<3; i++)
  {
    digitalWrite(13, HIGH);   
  delay(500);            
  digitalWrite(13, LOW);    
  delay(500); 
  }
  
  
  
  
  // Allumage long de 3s
  digitalWrite(13, HIGH);   
  delay(3000);              
  digitalWrite(13, LOW);    
  
  
  // Relancer le programme en appuyant sur  le bouton reset
  
  
  
  
}

void loop() {
}
