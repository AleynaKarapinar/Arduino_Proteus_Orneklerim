#define Buton 12
#define led 6

void setup()
{
  pinMode(Buton, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(Buton) == 1)
  digitalWrite(led,HIGH);
  else
  digitalWrite(led,LOW);
}
