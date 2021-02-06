//P10--2 nolu pindeki Ledi yakan
 
#define led 2          // "led" 0 nolu pine değişmez sabit tanımlandı
//int led = 0;         // "led" 0 nolu pine değiştirilebilir değişken tanımlandı

void setup(){
    pinMode(led, OUTPUT); //0 nolu pin cıkıs
//  pinMode(0, OUTPUT); //0 nolu pin cıkıs           
}

void loop(){ // sonsuz dongu
        digitalWrite(led, HIGH); // led 5v seviyesinde
    //  veya digitalWrite(0, HIGH);
        delay(1000); // 1 saniye bekle
        digitalWrite(led, LOW); // led 0v seviyesinde
    //  digitalWrite(0, LOW);
        delay(1000);// 1 saniye bekle
}
