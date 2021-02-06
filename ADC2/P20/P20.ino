//P20--ADC-Analog dijital konvertör-2
int analogDeger=0;//sensörden okunan gerilim değerini bu değişkene kaydedeceğiz
int kirmiziLed=7;
int yesilLed=8;
int maviLed=9;

void setup()
{
Serial.begin(9600); //Seri iletişim ayarları yapılıyor
pinMode(kirmiziLed,OUTPUT);
pinMode(yesilLed,OUTPUT);
pinMode(maviLed,OUTPUT);
}
void loop()
{
analogDeger=analogRead(0); //sensörden gelen veri okunuyor
//okunan değer 0 ile 381 arasında ise su seviyesi az 
 
if(analogDeger>=0 && analogDeger<=381)
  {
    //MAVİ Led yansın.
    digitalWrite(yesilLed,LOW);
    digitalWrite(kirmiziLed,LOW);
    digitalWrite(maviLed,HIGH);
    Serial.println("su seviyesi az"); /*s.m. de göreceğimiz uyarı yazısını yazdırıyoruz*/
  }
//okunan değer 381 den büyük 682 den küçükse
  else if(analogDeger>381 && analogDeger<=682)
  {//su seviyesi orta ise YEŞİL Led yansın.
    digitalWrite(yesilLed,HIGH);
    digitalWrite(kirmiziLed,LOW);
    digitalWrite(maviLed,HIGH);
    Serial.println("su seviyesi orta");
  }
else if(analogDeger>682 && analogDeger<1023 ) //okunan değer 682'dan büyükse
  {//se seviyesi tam ise tümledler yansın Led yansın.
    digitalWrite(yesilLed,HIGH);
    digitalWrite(kirmiziLed,HIGH);
    digitalWrite(maviLed,HIGH);
    Serial.println("su seviyesi tam");
  }
}
