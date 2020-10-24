void traitementurl() {

  //Si un index trouvé.
  while (mydata.indexOf('b') > 0) {
    String charge_char = "";
    int posdollar;
    posdollar = mydata.indexOf('b');

    for (int i = 0; i < 4 ; i++) {
      charge_char += mydata[posdollar + i];
    }

    Serial.println(charge_char);

    //Activation de la LED ROUGE.
    if (charge_char == "b2=1") {
      digitalWrite(2, HIGH);
      writeled2 = 1;
    }

    if (charge_char == "b2=0") {
      digitalWrite(2, LOW);
      writeled2 = 0;
    }

    //Activation de la LED BLEU.
    if (charge_char == "b3=1") {
      digitalWrite(3, HIGH);
      writeled3 = 1;
    }

    if (charge_char == "b3=0") {
      digitalWrite(3, LOW);
      writeled3 = 0;
    }

    //Activation de la LED VERT.
    if (charge_char == "b5=1") {
      digitalWrite(5, HIGH);
      writeled5 = 1;
    }

    if (charge_char == "b5=0") {
      digitalWrite(5, LOW);
      writeled5 = 0;
    }

    //Passage en dollars
    mydata.setCharAt (posdollar, '$');
    Serial.println(mydata);

  }
  mydata = " ";
}
