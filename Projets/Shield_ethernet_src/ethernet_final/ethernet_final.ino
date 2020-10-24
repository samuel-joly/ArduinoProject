//***** Bibliothèques *****//
#include <SPI.h>      //bibliothèqe pour SPI
#include <Ethernet.h> //bibliothèque pour Ethernet
#include <SD.h>       //bibliothèque pour la carte SD

//***** Déclaration des tableaux d'échanges *****//
byte mac[] = {DE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};  //adresse MAC de votre carte
byte ip[] = {192, 168, 1, 123};                     //adresse IP

//***** Déclaration de variable globale *****//
String mydata;  //Contient les information URL.
int writeled2;  //Mémorise l'état de sortie.
int writeled3;  //Mémorise l'état de sortie.
int writeled5;  //Mémorise l'état de sortie.


//*****  *****//
EthernetServer serveur(80); // Configuration du port d'écoute (80).
EthernetClient client;

void setup() {

  //***** CONFIGURATION *****//

  //SORTIES.
  pinMode(2, OUTPUT); //Configuration des broches en sortie.
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT); //Configuration des broches en sortie.

  //PORT SERIE.
  Serial.begin (9600); //Configuration du port série.

  //Controle de la présence de la Carte SD.
  if (!SD.begin(4)) { //Test et démarrage connexion carte SD
    Serial.println("!! Erreur carte SD !!");
    return;
  }
  else {
    Serial.println("Carte SD OK");
  };

 
  

  //***** INITIALISATION ETHERNET *****//
  
  Ethernet.begin (mac, ip); //initialisation de la communication Ethernet
  Serial.println("Adresse du serveur: ");
  Serial.println(Ethernet.localIP()); //on affiche l'adresse IP de la connexion
  serveur.begin(); // démarre l'écoute
}
void loop() {

  //Contrôle de la présence d'un client ethernet.
  client = serveur.available(); //Surveillance du port
  if (client) { //si client connecté.
    Serial.println("Client en ligne\n"); //on le dit...

    if (client.connected()) { // si le client est connecté

      monurl(client);   //Acquisition de L'URL client.
      traitementurl();  //Traitement de l'url et affectation des sorties.
      ecritureSD(writeled2, writeled3, writeled5); //Modification de la page HTML
      MonHTML(client); // Livre le contenu de la page HTML

       //on déconnecte le client

    }
client.stop();
  }
}


