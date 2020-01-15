
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int potmeter = 1;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int snelheidsRegelaar = analogRead(potmeter);
  int snelheid = map(snelheidsRegelaar, 0, 1024, 0, 255);
  //int snelheid = snelheidsRegelaar;
  Serial.println(snelheid);
 

  digitalWrite(led1, HIGH);
    delay(snelheid);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
    delay(snelheid);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
    delay(snelheid);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
    delay(snelheid);
  digitalWrite(led4, LOW);

  digitalWrite(led5, HIGH);
    delay(snelheid);
  digitalWrite(led5, LOW);

  digitalWrite(led6, HIGH);
    delay(snelheid);
  digitalWrite(led6, LOW);

  digitalWrite(led5, HIGH);
    delay(snelheid);
  digitalWrite(led5, LOW);

  digitalWrite(led4, HIGH);
    delay(snelheid);
  digitalWrite(led4, LOW);

  digitalWrite(led3, HIGH);
    delay(snelheid);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
    delay(snelheid);
  digitalWrite(led2, LOW);
}
