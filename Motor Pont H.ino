const int pinENA = 6;
const int pinIN1 = 7;
const int pinIN2 = 8;
 
const int speed = 200;      //Velocitat de gir 80% 
 
void setup()
{
   pinMode(pinIN1, OUTPUT);
   pinMode(pinIN2, OUTPUT);
   pinMode(pinENA, OUTPUT);
}
 
void loop()
{
   digitalWrite(pinIN1, HIGH);
   digitalWrite(pinIN2, LOW);
   analogWrite(pinENA, speed);
   delay(1000);
}
