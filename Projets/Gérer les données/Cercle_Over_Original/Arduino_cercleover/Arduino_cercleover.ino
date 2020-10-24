

int ledPin1 = 4;
int ledPin2 = 5;
int ledPin3 = 6;


int mydata;

void setup()

{

  Serial.begin(9600);          
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}



void loop()

{



  mydata = Serial.read();

    if ( mydata == 'R')
    {

      digitalWrite(ledPin1, HIGH);
      
    }
    else if ( mydata == 'V')
    {

      digitalWrite(ledPin2, HIGH);
    }
    else if ( mydata == 'B')
    {

      digitalWrite(ledPin3, HIGH);
    }
    else
    {
      delay(33);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
    }



}
