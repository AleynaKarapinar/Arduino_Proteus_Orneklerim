//P01--SERİ PORT EKRANI

void setup() { //ana kurulumlar
    Serial.begin(9600); //iletişim hızı          
}

void loop() { // sonsuz dongu
    Serial.println("gazi universitesi");  // Ekrana mesajımızı yazdırıyoruz
    delay(1000);// 1 saniye bekle
    Serial.print("teknik bilimler myo\n"); // (\n yeni satır)
    delay(1000);
    Serial.print("mekatronik\t");// (\t yatay boşluk)
    delay(1000);
    Serial.println("bolumu\n");
    delay(1000);
    }

