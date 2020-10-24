

const int Ligne[8] = {2, 3, 4, 5, 6, 7, 8, 9};

const int Colonne[8] = { 10, 11, 12, 13, 14, 15, 16, 17};



unsigned long tempoDepart = 0;

int tempsecouler( int Seconde )

{



  while ( ( millis() - tempoDepart ) >= Seconde )
  {
    tempoDepart = millis();
    return 1;
  }

return 0;

}









void afficher_un_point(int X, int Y)
{

  //Allumage d'un point aux coordonnees X;Y
  digitalWrite(Ligne[X], HIGH);
  digitalWrite(Colonne[Y], LOW);

}

void effacer(int Lindice)
{

  for (int i = 0; i < 8; i++)
  {

    digitalWrite( Colonne[i], HIGH);

  }

  digitalWrite(Ligne[Lindice], LOW);
}


void afficher_A()
{
  
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);

}

void afficher_B()
{
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);
}

void afficher_C()
{
  
  /* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);
  
  
  
}




void afficher_D()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}


void afficher_E()
{
	
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);


}

void afficher_F()
{
	
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);


}
void afficher_G()
{

/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	afficher_un_point (5,3);	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);






}
void afficher_H()
{
	
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);


}
void afficher_I()
{
	
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
/* afficher_un_point (2,0)=off */	/* afficher_un_point (2,1)=off */ 	afficher_un_point (2,2);	/* afficher_un_point (2,3)=off */ 	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	/* afficher_un_point (3,1)=off */ 	afficher_un_point (3,2);	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	afficher_un_point (4,2);	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
/* afficher_un_point (6,0)=off */	/* afficher_un_point (6,1)=off */ 	afficher_un_point (6,2);	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);


}
void afficher_J()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
/* afficher_un_point (2,0)=off */	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_K()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	afficher_un_point (2,3);	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	afficher_un_point (3,2);	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	afficher_un_point (6,3);	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_L()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_M()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	afficher_un_point (2,1);	/* afficher_un_point (2,2)=off */ 	afficher_un_point (2,3);	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	afficher_un_point (3,2);	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_N()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	afficher_un_point (2,1);	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	afficher_un_point (3,2);	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	afficher_un_point (4,3);	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_O()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_P()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_Q()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	afficher_un_point (6,3);	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_R()
{
	
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	afficher_un_point (6,3);	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);


}
void afficher_S()
{
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	
	


}
void afficher_T()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
/* afficher_un_point (2,0)=off */	/* afficher_un_point (2,1)=off */ 	afficher_un_point (2,2);	/* afficher_un_point (2,3)=off */ 	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	/* afficher_un_point (3,1)=off */ 	afficher_un_point (3,2);	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	afficher_un_point (4,2);	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
/* afficher_un_point (6,0)=off */	/* afficher_un_point (6,1)=off */ 	afficher_un_point (6,2);	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	/* afficher_un_point (7,1)=off */ 	afficher_un_point (7,2);	/* afficher_un_point (7,3)=off */ 	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_U()
{
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	
	


}
void afficher_V()
{
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
/* afficher_un_point (6,0)=off */	afficher_un_point (6,1);	/* afficher_un_point (6,2)=off */ 	afficher_un_point (6,3);	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	/* afficher_un_point (7,1)=off */ 	afficher_un_point (7,2);	/* afficher_un_point (7,3)=off */ 	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);
	


}
void afficher_W()
{
	
	/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
afficher_un_point (3,0);	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	afficher_un_point (3,4);	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
afficher_un_point (4,0);	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	afficher_un_point (4,4);	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
afficher_un_point (5,0);	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	afficher_un_point (5,4);	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	afficher_un_point (6,2);	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	afficher_un_point (7,1);	/* afficher_un_point (7,2)=off */ 	afficher_un_point (7,3);	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);


}
void afficher_X()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	afficher_un_point (3,1);	/* afficher_un_point (3,2)=off */ 	afficher_un_point (3,3);	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	afficher_un_point (4,2);	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	afficher_un_point (5,1);	/* afficher_un_point (5,2)=off */ 	afficher_un_point (5,3);	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	afficher_un_point (6,4);	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	/* afficher_un_point (7,1)=off */ 	/* afficher_un_point (7,2)=off */ 	/* afficher_un_point (7,3)=off */ 	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_Y()
{
	
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
afficher_un_point (2,0);	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	afficher_un_point (3,1);	/* afficher_un_point (3,2)=off */ 	afficher_un_point (3,3);	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	afficher_un_point (4,2);	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	/* afficher_un_point (5,1)=off */ 	afficher_un_point (5,2);	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
/* afficher_un_point (6,0)=off */	/* afficher_un_point (6,1)=off */ 	afficher_un_point (6,2);	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	/* afficher_un_point (7,1)=off */ 	afficher_un_point (7,2);	/* afficher_un_point (7,3)=off */ 	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	


}
void afficher_Z()
{
/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	afficher_un_point (1,4);	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
/* afficher_un_point (2,0)=off */	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	afficher_un_point (2,4);	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	afficher_un_point (3,3);	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	afficher_un_point (4,2);	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	afficher_un_point (5,1);	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
afficher_un_point (6,0);	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	afficher_un_point (7,4);	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);	
	


}

void afficher_tous()
{
afficher_un_point (0,0);	afficher_un_point (0,1);	afficher_un_point (0,2);	afficher_un_point (0,3);	afficher_un_point (0,4);	afficher_un_point (0,5);	afficher_un_point (0,6);	afficher_un_point (0,7);	effacer(0);
afficher_un_point (1,0);	afficher_un_point (1,1);	afficher_un_point (1,2);	afficher_un_point (1,3);	afficher_un_point (1,4);	afficher_un_point (1,5);	afficher_un_point (1,6);	afficher_un_point (1,7);	effacer(1);
afficher_un_point (2,0);	afficher_un_point (2,1);	afficher_un_point (2,2);	afficher_un_point (2,3);	afficher_un_point (2,4);	afficher_un_point (2,5);	afficher_un_point (2,6);	afficher_un_point (2,7);	effacer(2);
afficher_un_point (3,0);	afficher_un_point (3,1);	afficher_un_point (3,2);	afficher_un_point (3,3);	afficher_un_point (3,4);	afficher_un_point (3,5);	afficher_un_point (3,6);	afficher_un_point (3,7);	effacer(3);
afficher_un_point (4,0);	afficher_un_point (4,1);	afficher_un_point (4,2);	afficher_un_point (4,3);	afficher_un_point (4,4);	afficher_un_point (4,5);	afficher_un_point (4,6);	afficher_un_point (4,7);	effacer(4);
afficher_un_point (5,0);	afficher_un_point (5,1);	afficher_un_point (5,2);	afficher_un_point (5,3);	afficher_un_point (5,4);	afficher_un_point (5,5);	afficher_un_point (5,6);	afficher_un_point (5,7);	effacer(5);
afficher_un_point (6,0);	afficher_un_point (6,1);	afficher_un_point (6,2);	afficher_un_point (6,3);	afficher_un_point (6,4);	afficher_un_point (6,5);	afficher_un_point (6,6);	afficher_un_point (6,7);	effacer(6);
afficher_un_point (7,0);	afficher_un_point (7,1);	afficher_un_point (7,2);	afficher_un_point (7,3);	afficher_un_point (7,4);	afficher_un_point (7,5);	afficher_un_point (7,6);	afficher_un_point (7,7);	effacer(7);

}


void afficher_point()
{

/* afficher_un_point (0,0)=off */	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,1)=off */ 	/* afficher_un_point (0,3)=off */ 	/* afficher_un_point (0,4)=off */ 	/* afficher_un_point (0,5)=off */ 	/* afficher_un_point (0,6)=off */ 	/* afficher_un_point (0,7)=off */ 	effacer(0);
/* afficher_un_point (1,0)=off */	/* afficher_un_point (1,1)=off */ 	/* afficher_un_point (1,2)=off */ 	/* afficher_un_point (1,3)=off */ 	/* afficher_un_point (1,4)=off */ 	/* afficher_un_point (1,5)=off */ 	/* afficher_un_point (1,6)=off */ 	/* afficher_un_point (1,7)=off */ 	effacer(1);
/* afficher_un_point (2,0)=off */	/* afficher_un_point (2,1)=off */ 	/* afficher_un_point (2,2)=off */ 	/* afficher_un_point (2,3)=off */ 	/* afficher_un_point (2,4)=off */ 	/* afficher_un_point (2,5)=off */ 	/* afficher_un_point (2,6)=off */ 	/* afficher_un_point (2,7)=off */ 	effacer(2);
/* afficher_un_point (3,0)=off */	/* afficher_un_point (3,1)=off */ 	/* afficher_un_point (3,2)=off */ 	/* afficher_un_point (3,3)=off */ 	/* afficher_un_point (3,41)=off */ 	/* afficher_un_point (3,5)=off */ 	/* afficher_un_point (3,6)=off */ 	/* afficher_un_point (3,7)=off */ 	effacer(3);
/* afficher_un_point (4,0)=off */	/* afficher_un_point (4,1)=off */ 	/* afficher_un_point (4,2)=off */ 	/* afficher_un_point (4,3)=off */ 	/* afficher_un_point (4,4)=off */ 	/* afficher_un_point (4,5)=off */ 	/* afficher_un_point (4,6)=off */ 	/* afficher_un_point (4,7)=off */ 	effacer(4);
/* afficher_un_point (5,0)=off */	/* afficher_un_point (5,1)=off */ 	/* afficher_un_point (5,2)=off */ 	/* afficher_un_point (5,3)=off */ 	/* afficher_un_point (5,4)=off */ 	/* afficher_un_point (5,5)=off */ 	/* afficher_un_point (5,6)=off */ 	/* afficher_un_point (5,7)=off */ 	effacer(5);
/* afficher_un_point (6,0)=off */	/* afficher_un_point (6,1)=off */ 	/* afficher_un_point (6,2)=off */ 	/* afficher_un_point (6,3)=off */ 	/* afficher_un_point (6,4)=off */ 	/* afficher_un_point (6,5)=off */ 	/* afficher_un_point (6,6)=off */ 	/* afficher_un_point (6,7)=off */ 	effacer(6);
/* afficher_un_point (7,0)=off */	/* afficher_un_point (7,1)=off */ 	afficher_un_point (7,2);	/* afficher_un_point (7,3)=off */ 	/* afficher_un_point (7,4)=off */ 	/* afficher_un_point (7,5)=off */ 	/* afficher_un_point (7,6)=off */ 	/* afficher_un_point (7,7)=off */ 	effacer(7);

}









void setup() {

  // Initialisation des sorties et de la matrice
  for (int i = 0; i < 8; i++)
  {

    // Configuration des broches en sortie
    pinMode(Ligne[i], OUTPUT);
    pinMode(Colonne[i], OUTPUT);

    // Initialisation de l'afficheur
    digitalWrite( Ligne[i], LOW);
    digitalWrite( Colonne[i], HIGH);
  }

}

void loop() {
  
  int time = 500;
  

 while (tempsecouler( time )!=1)
 {
 
  afficher_A();
   }
   
 while (tempsecouler( time )!=1)
 {  
  afficher_B();
  }
 
 
 
 while (tempsecouler( time )!=1)
 { 
  afficher_C();
   }
   
   while (tempsecouler( time )!=1)
 { 
  afficher_D();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_E();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_F();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_G();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_H();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_I();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_J();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_K();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_L();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_M();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_N();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_O();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_P();
   }while (tempsecouler( time )!=1)
 { 
  afficher_Q();
   }while (tempsecouler( time )!=1)
 { 
  afficher_R();
   }while (tempsecouler( time )!=1)
 { 
  afficher_S();
   }while (tempsecouler( time )!=1)
 { 
  afficher_T();
   }while (tempsecouler( time )!=1)
 { 
  afficher_U();
   }while (tempsecouler( time )!=1)
 { 
  afficher_V();
   }while (tempsecouler( time )!=1)
 { 
  afficher_W();
   }while (tempsecouler( time )!=1)
 { 
  afficher_X();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_Y();
   }while (tempsecouler( time )!=1)
 { 
  afficher_Z();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_point();
   }
   while (tempsecouler( time )!=1)
 { 
  afficher_tous();
   }
}














