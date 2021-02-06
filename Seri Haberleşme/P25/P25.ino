//P25--Seri haberleşme
/* A => 1.LED B => 2.LED C => 3.LED D => 4.LED
****************************************************/
// Gelen verinin aktarılacağı karakter değişkeni
char karakter = 0;
const byte LEDpinleri[4] ={6,7,8,9};//LED Pinlerinin numaralari
// LED'lerin durumlarını tutan değişkenler
// true = LED Yanık, false = LED Sönük
boolean LEDDurum[4] ={ false,false,false,false};
void setup() {
Serial.begin(9600); // Seri haberleşmeyi başlatıyoruz(9600 bps)
pinMode(LEDpinleri[0],OUTPUT);
pinMode(LEDpinleri[1],OUTPUT);
pinMode(LEDpinleri[2],OUTPUT);
pinMode(LEDpinleri[3],OUTPUT);
}
void loop() {
// Veri gelmiş mi?
  if (Serial.available() > 0) {
  karakter = Serial.read();// gelen veriyi oku
  Serial.print("Gelen karakter: ");// Gelen karakteri yazdır
  Serial.println(karakter);
  switch(karakter)//Gelen Karakterler göre ilgili LED'i yakıyoruz
  {
case 'A':
  LEDDurumDegistir(0);
  break;
case 'B':
  LEDDurumDegistir(1);
  break;
case 'C':
  LEDDurumDegistir(2);
  break;
case 'D':
  LEDDurumDegistir(3);
  break;
default:
Serial.println("Gecersiz bir karakter gonderildi!");
  break;
}
}
}
/* Fonksiyona girilen LEDno değerine göre
ilgili LED'in durumunu değiştirir.
(LED Yanıyorsa söndürür, sönükse yakar).
*/
void LEDDurumDegistir(int LEDno)
{
  if(LEDDurum[LEDno] == false)
{
  digitalWrite(LEDpinleri[LEDno],HIGH);
  LEDDurum[LEDno] = true;
  Serial.print(LEDno);
  Serial.println("nolu LED yakildi!");
}
  else
{
  digitalWrite(LEDpinleri[LEDno],LOW);
  LEDDurum[LEDno] = false;
  Serial.print(LEDno);
  Serial.println("nolu LED sonduruldu!");
}
}
