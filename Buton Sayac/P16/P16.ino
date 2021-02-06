//P16--11 nolu pindeki buton ile ekranda  butona basmayı saydırma
int buton = 11; // Butonun pin numarası
int sayici = 0;      //sayacimiz
int butonoku = 0;    // Butonun durumu
void setup() {
    pinMode(buton, INPUT);
    Serial.begin(9600);
}
void loop() {
    butonoku = digitalRead(buton);
    if (butonoku == HIGH) {
      sayici ++; // sayici = sayici + 1;
      Serial.print("Sayicimizin degeri= "); // Ekrana mesajımızı yazdırıyoruz.
      Serial.println(sayici); // sayaç değerimizi ekrana yazdırıp yeni satıra geçiyoruz.
      
      while(butonoku == HIGH){// Butondan elini çekene kadar program burada kalır
      butonoku = digitalRead(buton);
      }
    }
}
