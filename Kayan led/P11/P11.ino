//P11--dizi-2,3,4,5,6,7,8,9 pinlerindeki ledleri kaydıran

int ledPini [] = {0,1,2,3,4,5,6,7,8,9}; // dizi tanımlandı
int i=0; // i sayac

void setup (){
      for(i=2; i<=9;i++)
      {
      pinMode(ledPini [i], OUTPUT); // LED pinlerini çıkış olarak tanımladık
      }
}
void loop() {
    for(i=2; i<=9; i++)
    {
      digitalWrite(ledPini[i],HIGH);
      delay(50);
      digitalWrite(ledPini[i],LOW);
      delay(50);
    }
}
