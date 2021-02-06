//P14--12 nolu pindeki buton ile 10 nolu pindeki buzzer

int buton = 12; // Butonun pin numarası
int buzzer = 10; // buzzer bağlandığı pin numarası
int oku = 0; // Butonun durumu

void setup() {
  pinMode(buzzer, OUTPUT); // buzzer bağlı olduğu pini çıkış olarak ayarlıyoruz.
  pinMode(buton, INPUT); // Butonun bağlı olduğu pini çıkış olarak ayarlıyoruz.
 }

void loop(){
  oku = digitalRead(buton); // butonun basılı olup olmadığını kontrol ediyoruz.
  if (oku == HIGH)  //buton basılı mı?
    digitalWrite(buzzer, HIGH); // buzzer on 
  else 
    digitalWrite(buzzer, LOW); // buton basılı değil buzzer off
    
}
