int red = 13;
int green = 12;
int blue = 11;
int yellow = 10;

long getal;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  getal = random(1,4); // generate random number between 1 & 5

  Serial.begin(9600); 
  Serial.println(getal); // show the value in Serial Monitor
  delay(1000); // wait 1 second before displaying the next number

  if (getal == 1) {
    Serial.println("een");
    digitalWrite(red, HIGH);
    delay(1000);
    digitalWrite(red, LOW);
  }

  if (getal == 2) {
    Serial.println("twee");
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(green, LOW);
  }

  if (getal ==3) {
    Serial.println("drie");
    digitalWrite(blue, HIGH);
    delay(1000);
    digitalWrite(blue, LOW);
  }

  if (getal == 4) {
    Serial.println("vier");
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
  }
}
