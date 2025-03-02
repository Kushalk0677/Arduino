#include<LiquidCrystal.h> // library
LiquidCrystal lcd(2,3,4,5,6,7); // pin order

void setup() {
  lcd.begin(16, 2); // 16 columns and 2 rows for the lcd screen
  Serial.begin(9600); // display output in serial monitor

}

void loop() {
  lcd.setCursor(3,0);
  lcd.print("I love you");
  lcd.setCursor(2,1);
  lcd.print("Mommy and Papa");
  delay(100);

}
