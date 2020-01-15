
int t = 20;
const int potmeter = 1;

void setup() {
  for(int pin=2; pin<8; pin++)
  {
    pinMode(pin, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int snelheidsRegelaar = analogRead(potmeter);
  int snelheid = map(snelheidsRegelaar, 0, 1024, 0, 255);
  Serial.println(snelheid);
  t = snelheid;
  
  right();
  left();
}

void right()
{
  for(int i=2; i<8; i++) 
  {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i+1, HIGH);
    delay(t);
    digitalWrite(i+2, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i+1, LOW);
  }
}

void left()
{
  for(int i=7; i>2; i--)
  {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i-1, HIGH);
    delay(t);
    digitalWrite(i-2, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i-1, LOW);
  }
}
