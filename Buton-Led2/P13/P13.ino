//P13--11 nolu pindeki buton ile 7 nolu pindeki ledi yakan 
int buton=11;        //butonu 11 nolu pine tanımladık
int led=7;        //ledi 7 nolu pine tanımladık

void setup(){
  pinMode(buton, INPUT);      // 11 nolu pin giriş oldu
  pinMode(led, OUTPUT);       // 7 nolu pin çıkış oldu
}

void loop(){ //sonsuz döngü
  if (digitalRead(buton) == HIGH){      //okunan buton 1 ise
      digitalWrite(led, HIGH);        // ledi yak
      delay(200);                     // 0.5 saniye bekle
  }
}
