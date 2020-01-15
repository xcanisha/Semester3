//#define trigPin 9
//#define echoPin 10

int trigPin = 9;
int echoPin = 10;

long duration;
int distance;

const int t = 20;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  for(int pin=2; pin<8; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  clearAndMeasure();
  right();
  left();

  delay(50);
}

void right()
{
  for(int i=2; i<8; i++){
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
  for(int i=7; i>1; i--){
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

void clearAndMeasure()
{
  //clear the trigPin by setting it LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);

  //trigger the sensot=r by setting the trigPin HIGH for 
  //10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //read the echoPin, pulseIn() returns the duration (length 
  //of the pulse) in microseconds
  duration = pulseIn(echoPin, HIGH);
  //calculate the distance
  distance = duration*0.034/2;

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  //setSpd(distance);
}

//void setSpd(int distance)
//{
//  if(!(distance > 1 && distance <31))
//  {
//    Serial.println("Out of range"); 
//  }
//  else
//  {
//    distance = t;
//  }
//}
