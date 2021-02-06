//P05--switch-break
byte sayici=0;
byte kalan;
 
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print(sayici);
kalan=sayici%2;

switch(kalan){
  case 0:        // Seçim değişkeni 0 olduğunda yapılacak işlem
  Serial.println("--CIFT SAYI");
  break;        //Break, bir döngüyü veya switch komutunu sonlandırmak için kullanılır.

  case 1:       //Seçim değişkeni 1 olduğunda yapılacak işlem
  Serial.println("--TEK SAYI");
  break;

  default:       // Varsayılan bağımsız işlem (isteğe bağlı)
  Serial.println("HATA");
}
  delay(1000);
  sayici++;      //sayici=sayici+1
  if(sayici==20) sayici=0;    //tek işlem s.parantez kullanılmaz
}
