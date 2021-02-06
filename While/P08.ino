//P08--while
int sonuc=1;
void setup() {
Serial.begin(9600);
}

void loop() {
while (sonuc<1000)
{
  Serial.println(sonuc);
  delay(500);
  sonuc=3*sonuc;
}
Serial.println("sonuc 1000'i asmistir");
delay(500);
}
