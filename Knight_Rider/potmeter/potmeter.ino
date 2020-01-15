
  int potPin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  //potValue varies from 0 to 1023
  Serial.print("Pot value = ");
  Serial.println(potValue);
  delay(1);

}
