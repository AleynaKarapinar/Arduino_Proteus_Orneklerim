//P06--if goto
int sayici=0;
 
void setup() {
Serial.begin(9600);
}

void loop() {
basla:
Serial.println(sayici);

if(sayici==20)  goto basla;
delay(300);
sayici++; //sayici=sayici+1;
}
