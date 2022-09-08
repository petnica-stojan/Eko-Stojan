#include <SoftwareSerial.h>
SoftwareSerial bt(2, 7);

int d2 = 3;
int d3 = 5;
int d4 = 6;
int d5 = 9;
int d6 = 10;
int d7 = 11;



char smer;
bool flag_napred = 0;
bool flag_nazad = 0;
bool flag_levo = 0;
bool flag_desno = 0;

void setup() {
  bt.begin(9600);
  Serial.begin(9600);

  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(d5, OUTPUT);
  pinMode(d6, OUTPUT);
  pinMode(d7, OUTPUT);



  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);
}

void ugasen() {
  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);
}

void desno() {
  analogWrite(d2, 0);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 255);
  analogWrite(d6, 0);
  analogWrite(d7, 0);
  delay(2);

  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);
}


void levo() {
  analogWrite(d2, 255);
  analogWrite(d3, 255);
  analogWrite(d4, 0);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 255);

  delay(2);

  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);
}

void napred() {
  analogWrite(d2, 255);
  analogWrite(d3, 255);
  analogWrite(d4, 0);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);

  delay(2);
  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);

  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 255);
  analogWrite(d6, 0);
  analogWrite(d7, 0);
  delay(2);

  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);
}

void nazad() {
  analogWrite(d2, 0);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 255);
  analogWrite(d6, 255);
  analogWrite(d7, 0);

  delay(2);
  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);

  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 0);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 255);
  delay(2);

  analogWrite(d2, 255);
  analogWrite(d3, 0);
  analogWrite(d4, 255);
  analogWrite(d5, 0);
  analogWrite(d6, 255);
  analogWrite(d7, 0);
}

void loop() {
  if (bt.available()) {
    smer = bt.read();
    Serial.print(smer);
  }
  if (smer == 'w') {
    flag_napred = 1;
    flag_nazad = 0;
    flag_levo = 0;
    flag_desno = 0;
  }
  else if (smer == 's') {
    flag_napred = 0;
    flag_nazad = 1;
    flag_levo = 0;
    flag_desno = 0;
  }
  else if (smer == 'a') {
    flag_napred = 0;
    flag_nazad = 0;
    flag_levo = 1;
    flag_desno = 0;
  }
  else if (smer == 'd') {
    flag_napred = 0;
    flag_nazad = 0;
    flag_levo = 0;
    flag_desno = 1;
  }
  else if (smer == 'h') {
    flag_napred = 0;
    flag_nazad = 0;
    flag_levo = 0;
    flag_desno = 0;
  }

  if (flag_napred == 1)
    napred();
  else if (flag_nazad == 1)
    nazad();
  else if (flag_levo == 1)
    levo();
  else if (flag_desno == 1)
    desno();
  else
    ugasen();
}