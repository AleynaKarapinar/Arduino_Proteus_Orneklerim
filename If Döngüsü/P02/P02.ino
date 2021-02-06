//P02--if

byte sayici=0;

void setup() {
    Serial.begin(9600); //iletişim hızı          
}

void loop() { // sonsuz dongu

if(sayici==10)//tek işlem s.parantez kullanılmaz
  sayici=0;

  sayici=sayici+1;
  Serial.print("SAYICI:");
  Serial.println(sayici);
  delay(1000);// 1 saniye bekle
}

