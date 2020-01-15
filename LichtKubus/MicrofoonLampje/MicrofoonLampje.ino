int ledPin = 6;
int sensorPin = 5;
boolean val = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}

void loop()
{
  val = digitalRead(sensorPin);
  Serial.println (val);

  //signal above threshold value -> LED lights up
  if (val == HIGH)
  {
    digitalWrite(ledPin, LOW);
  }
  
  else
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
  }
}
