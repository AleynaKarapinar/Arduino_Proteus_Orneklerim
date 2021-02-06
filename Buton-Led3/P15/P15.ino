//P15--12 nolu ve 13 nolu pindeki butona aynı anda basınca 7 nolu pindeki ledi yakan 

int buton1 = 12; // buton1--- 12 nolu pine tanımladık
int buton2 = 13; // buton2--- 13 nolu pine tanımladık
int led = 7; // ledi 7 nolu pine tanımladık
int oku1=0;
int oku2=0;
void setup() {
  pinMode(buton1, INPUT); // 9 nolu pin giriş oldu
  pinMode(buton2, INPUT); // 10 nolu pin giriş oldu
  pinMode(led, OUTPUT); // 7 nolu pin çıkış oldu
}
void loop(){ 
  oku1= digitalRead(buton1);
  oku2= digitalRead(buton2);
     if (oku1 == HIGH && oku2 == HIGH)   // VE  AND
    //if (oku1 == HIGH || oku2 == HIGH) { // VEYA OR
    digitalWrite(led, HIGH); // ledi yak
}
