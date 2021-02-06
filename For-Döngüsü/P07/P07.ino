//P07--for
void setup() {
Serial.begin(9600);
}

void loop() {
//for (başlangıç değeri; koşul; artış miktarı)
for (byte sayici=1;sayici<=5;sayici++)
{
Serial.println(sayici);
delay(1000);
}
Serial.println("deneme programi");
delay(1000);
}
