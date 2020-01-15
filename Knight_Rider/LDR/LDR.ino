//Constants
const int pResistor = A0; // Photoresistor at Arduino analog pin A0

const int ledPin1 = 11; // Ledpins as pins 11

//Variables
int value;          // Store value from photoresistor (0-1023)
int photocellInput = 0;
int simplification = 0;
int photocellRounded = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);  // Set ledPins as output

  pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
}

void loop() {
  value = analogRead(pResistor);
  photocellInput = (analogRead(0)/4);
  photocellRounded = ((photocellInput+4)/5)*5;
  analogWrite(ledPin1, photocellRounded);

  if(photocellInput == 0)
  {
    analogWrite(ledPin1, 5);
  }
  
  Serial.println(photocellRounded);

delay(2000);
}
