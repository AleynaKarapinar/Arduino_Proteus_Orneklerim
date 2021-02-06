//P03--if--else
byte sayici=0;
byte kalan=0;
 
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print(sayici);
kalan=sayici%2;  //Mod alma işlemi yapmak için kullanılır.
                 //Bir sayıyı başka bir sayıya böldükten sonra kalanı verir
                
if(kalan==0)    //tek işlem s.parantez kullanılmaz
  Serial.println("--CIFT SAYI");
else
  Serial.println("--TEK SAYI");
  
sayici=sayici+1;

if(sayici==20) //tek işlem s.parantez kullanılmaz
  sayici=0;
  
delay(500);
}
