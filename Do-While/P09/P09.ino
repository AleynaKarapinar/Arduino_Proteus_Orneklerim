//P09--do-while
int sonuc=1;

void setup() {
Serial.begin(9600);
}

void loop() {
do{
  Serial.println(sonuc);  //sonuc değişkeninin içindeki değer
  delay(500);
  sonuc=3*sonuc;  
}while (sonuc<1000);
Serial.println("sonuc 1000'i asmistir");
delay(500);
}
