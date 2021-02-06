//P23--Servo motor uygulaması

#include <Servo.h>
int ServoPals = 9; //servoyu kontrol edecek pals çıkış pini
int Pot=0; //Potun bağlanacağı adc pini
Servo servoKontrol; //Servo sınıfından bir nesne oluşturuyoruz
int deger=0; //adc nin okuduğu değeri tutacak değişken
void setup()
{
  servoKontrol.attach(ServoPals); /*servokontrol nesnesine 
                                  hangi pinden pals çıkışı alınacağı belirtiliyor */
}
void loop()
{
  deger=analogRead(Pot); //potansiyometreden değer okunuyor
  deger=map(deger,0,1023,0,179); /* 0 ila 1023 arasında okunan değeri 0 ila 179 derece arasında sınırla */
  servoKontrol.write(deger); /*write metodu ile o anki deger açısı ile motor hareket eder*/
  delay(15);
}
