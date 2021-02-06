//P17--LCD UYGULAMASI
/********************** 
* LCD RS ==> digital-7
* LCD Enable ==> digital-6
* LCD D4 ==> digital-5
* LCD D5 ==> digital-4
* LCD D6 ==> digital-3
* LCD D7 ==> digital-2
* LCD R/W ==> toprak (GND)
**************************/
#include <LiquidCrystal.h>
int sayac =0;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);// LCD bağlantılarımız

void setup() {
  lcd.begin(16, 2); // Kullandigimiz LCD nin sutun ve satir sayisi
}

void loop() {  
  lcd.setCursor(0, 0);      //Imlecin yeri 1. satir 0. sutun
  lcd.print("LCD DENEME");  /* Ekrana yazi yazalim */
  for(sayac=0;sayac<=10;sayac++) 
  {
    lcd.setCursor(0, 1);    //Imlecin yeri 1. satir 0. sutun 
    lcd.print(sayac);
    //lcd.print(" ");
    delay(500);
  }
  lcd.clear();
}
