
int red = 13;
int green = 12;
int blue = 11;
int yellow = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(100);
  digitalWrite(red, LOW);
  delay(100);

  digitalWrite(green, HIGH);
  delay(100);
  digitalWrite(green, LOW);
  delay(100);

  digitalWrite(blue, HIGH);
  delay(100);
  digitalWrite(blue, LOW);
  delay(100);

  digitalWrite(yellow, HIGH);
  delay(100);
  digitalWrite(yellow, LOW);
  delay(100);
}
