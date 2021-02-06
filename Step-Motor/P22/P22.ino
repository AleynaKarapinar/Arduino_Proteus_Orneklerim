//P22--Step (adım) MOTOR uygulaması

#include <Stepper.h>
//motor pinleri için değişkenler tanımlanıyor
int motorPin1 = 6; //pin 1
int motorPin2 = 7; //pin 2
int motorPin3 = 8; //pin 3
int motorPin4 = 9; //pin 4
 
//motorun bobinlerine sırayla Arduino üzerinden pals’ ler göndermek ve 
//motor sürücü entegresi bu pals’ leri lojik olarak tersleyerek step motora aktarır, 
//motorun dönmesini sağlar.Hazır kütüphane kullanımı bir çok uygulamada kodları 
//hızlı bir şekilde hazırlamamızı sağlar.
#define ADIM 4 //Bir turda attığı adım sayısı
Stepper stepKontrol(ADIM, motorPin1, motorPin3, motorPin2, motorPin4);
int adimSayisi;
void setup()
{
stepKontrol.setSpeed(30); //Motorun hızı tanımlanıyor
}
void loop()
{
    stepKontrol.setSpeed(200); //Motorun dönüş hızı belirtiliyor
    adimSayisi = 2048; // Saat yönünde atılacak adim sayısı
    stepKontrol.step(adimSayisi);/*motorun adimSayisi kadar adim atması isteniyor*/
    delay(1000);
    //stepKontrol.setSpeed(30);
    //adimSayisi = -2048; // Motorun ters yönde atacağı adım belirleniyor
    //stepKontrol.step(adimSayisi);
   // delay(2000);
}
