 //P18--PWM
#include <LiquidCrystal.h>
int motor=9; // 9 nolu pwm çıkışına motor bağlanacak.
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);// LCD bağlantılarımız

void setup(){
   lcd.begin(16, 2); // Kullandigimiz LCD nin sutun ve satir sayisi
   pinMode(motor,OUTPUT); //9 nolu pin çıkış olarak ayarlandı.
}

void loop()
{
    for (int i=0;i<=255;i++)
    {
      analogWrite(motor,i); //pwm değeri sayaç değişkeni ile belirleniyor.
      lcd.setCursor(0, 0); //Imlecin yeri 0.sutun 0.satir 
      lcd.print("PWM= "); /* Ekrana yazi yazalim */
      lcd.print(i);
      delay(50);
      lcd.clear();//lcd yi temizleme
    }
    
    for (int i=255;i>=0;i--)
    {
      analogWrite(motor,i); //pwm değeri sayaç değişkeni ile belirleniyor.
      lcd.setCursor(0, 0); //Imlecin yeri 0.sutun 0.satir 
      lcd.print("PWM= "); /* Ekrana yazi yazalim */
      lcd.print(i);
      delay(50); 
      lcd.clear();//lcd yi temizleme
    }
}

