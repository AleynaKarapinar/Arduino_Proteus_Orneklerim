//P24--Sıcaklık uygulaması
/***************************************************************
LM35 sensörü ile sıcaklık ölçümü ve LCD ekranda görüntüleme
Bu sensör derece başına 10 mV çıkış verir.
20 ºC => için 20 * 10 mV = 200 mV
**************************/
#include <LiquidCrystal.h>
float sicaklik;//Değişkenleri tanımlıyoruz
float gerilim;
int sicaklikPin = 1;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);// LCD bağlantılarımız
void setup()
{
  Serial.begin(9600); //Seri haberleşmeyi başlat (9600 bps)
  lcd.begin(16, 2);// LCD’mizin başlangıç ayarı 16 karakter x 2 satır
}
void loop()
{
    gerilim = analogRead(sicaklikPin); // Sensörden gelen değeri oku
    gerilim = (gerilim / 1023) * 5000; // mV cinsinden gerilimi buluyoruz
    sicaklik = gerilim / 10.0; // Gerilim değerini sıcaklığa çeviriyoruz
    lcd.setCursor(0,0);
    lcd.print("Sicaklik:");
    lcd.setCursor(0,1);
    lcd.print(sicaklik);
    delay(1000); //Saniyede bir ölçüm gönderiyoruz
}

