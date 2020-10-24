/****************************************************************************

ce programme Lance un chenillard a l'impultion du boutons poussoir
et varie en vitesse en fonction du potentionmetre.


modified 23 Septembre 2015
  by contact@plaisirarduino.fr

*******************************************************************************/




int analog = A0;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(9, INPUT);

  
  Serial.begin(9600);
  
  
int AnaTime = analogRead(analog);

 
}

void loop() {
  
  
  if (digitalRead(9) == HIGH)
  
  {
          
    for (int i=10; i<14; i++)
    {
    digitalWrite(i, HIGH);
    int AnaTime = analogRead(analog);
    Serial.println(AnaTime);
    delay(AnaTime);
   
    }
    
   
    
     for (int i=10; i<14; i++)
    {
    digitalWrite(i, LOW);
    int AnaTime = analogRead(analog);
    delay(AnaTime);
    Serial.println(AnaTime);
    }
    
    
    
  }
  

  
  
}




