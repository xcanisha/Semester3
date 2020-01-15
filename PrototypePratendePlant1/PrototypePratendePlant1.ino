
// include the library code:
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// configureer hier de LDRsensor pin, deze sluiten we hier
// aan op de analoge poort 0 van de arduino: A0
int LDRsensor = A0;

void setup() {                
  Serial.begin(9600); // zet seriele poort aan op 9600 baud.
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
  
  delay(100);

  if (analogRead(LDRsensor) < 500)
  {
    Serial.println("");
    Serial.println("DONKER");
  }

  if (analogRead(LDRsensor) > 800)
  {
    Serial.println("");
    Serial.println("LICHT");
  }

  if (analogRead(LDRsensor) > 500 && analogRead(LDRsensor) < 800)
  {
    Serial.println("");
    Serial.println("NOPROBS");
  }
}
