
int t = 20;

#define trigPin 9
#define echoPin 10

long duration;
int distance;

void setup()
{
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  for(int pin=2; pin<8; pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  bat();
  right();
  left();

  delay(50); // To delay the batsignal.
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

void bat()
{
  // Clear tripPin by setting it to low
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);

  // Start signal by setting it to HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin
  duration = pulseIn(echoPin, HIGH);
  // Calculate the distance
  distance = duration*0.034/2; //To make it cm.

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
}
