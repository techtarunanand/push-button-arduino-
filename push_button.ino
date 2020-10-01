int button =12;
int led =13;
void setup()
{
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(button,OUTPUT);
}
void loop()
{
  boolean a =digitalRead(button);
  if(a==HIGH)
  {
    digitalWrite(13, HIGH);
    Serial.println("led is on");
    delay(2000);
  }
  else
  digitalWrite(13, LOW);
    Serial.println("led is off");
    delay(2000);
}
