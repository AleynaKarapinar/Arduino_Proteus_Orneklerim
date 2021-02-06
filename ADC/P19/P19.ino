//P19--ADC-Analog dijital konvertör-1

#include <LiquidCrystal.h>
int POT=0; // pot 0 nolu analog girişe bağlı
int deger=0;  // başlangıç değeri 0 olan deger değişkeni tanımlıyoruz
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);// LCD bağlantılarımız

void setup(){
  lcd.begin(16, 2); // Kullandigimiz LCD nin sutun ve satir sayisi
  Serial.begin(9600);
}
void loop()
{
  lcd.setCursor(0, 0); //Imlecin yeri 0.sutun 0.satir 
  lcd.print("ADC PROGRAMI"); /* Ekrana yazi yazalim */
  deger=analogRead(POT); /*pottan okunan değeri deger değişkenine dijitale çevrilmiş halde aktarıyoruz*/
  lcd.setCursor(0, 1); //Imlecin yeri 0.sutun  1.satir 
  lcd.print(deger);
  Serial.println(deger); /* deger değişkeninin içerisindeki değeri PC ortamında gözlemliyoruz */
  delay(500);
}
