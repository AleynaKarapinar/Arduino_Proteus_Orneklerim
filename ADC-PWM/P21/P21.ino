//P21--ADC-PWM

#include <LiquidCrystal.h>
int led=9; // Motoru kontrol edecek pwm pinini tanımlıyoruz
int pot=A0; //potun ayar ucunun bağlandığı A0 girişi
int deger =0; //Analog giriş değerini saklayan değişken
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);// LCD bağlantılarımız
void setup()
{
  pinMode(led,OUTPUT); //pwm pini çıkış olarak ayarlanıyor
  pinMode(pot,INPUT);
  lcd.begin(16, 2);// LCD’mizin başlangıç ayarı 16 karakter x 2 satır
}
void loop()
{
  deger=analogRead(pot); /*A0 girişinden analog değer okunup dijitale dönüştürülüyor*/
  /* map metodu ile deger değişkenin değerinin 0 ila 1023 arasındaki karşılığı 
  0 ila 255 arasında sınırlandırılıyor */
    lcd.setCursor(0,0);
    lcd.print("ADC:");
    lcd.print(deger);
    
    deger=map(deger,0,1023,0,255);
    analogWrite(led,deger);
    lcd.setCursor(0,1);
    lcd.print("PWM:");
    lcd.print(deger);
    delay(100); //Saniyede bir ölçüm gönderiyoruz
    lcd.clear();//lcd yi temizleme
}
