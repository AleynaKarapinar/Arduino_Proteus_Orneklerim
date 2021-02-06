//P12--polis cakar
  int ali=2;
  int veli=9;
void setup() {
    pinMode(ali, OUTPUT); //2 nolu pin cıkıs
    pinMode(veli, OUTPUT); //9 nolu pin cıkıs         
}

void loop() { 
basla:
       for (byte sayici=0;sayici<=2;sayici++)
        {
        digitalWrite(ali, HIGH); // led 5v seviyesinde   
        delay(15);
        digitalWrite(ali, LOW); // led 0v seviyesinde
        delay(100);
        }
        
        delay(50);
        
       for (byte sayici=0;sayici<=2;sayici++)
        {
        digitalWrite(veli, HIGH); // led 5v seviyesinde   
        delay(15); // 1 saniye bekle 
        digitalWrite(veli, LOW); // led 0v seviyesinde
        delay(100);// 1 saniye bekle
        }
}
