#include<LiquidCrystal.h> // library
LiquidCrystal lcd(2,3,4,5,6,7); // pin order

int gas = A0;

void setup() {
  lcd.begin(16, 2); // 16 columns and 2 rows for the lcd screen
  pinMode(gas, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(gas);
  Serial.println(value);
  lcd.setCursor(3,0);
  lcd.print("Reading is");
  lcd.setCursor(3,1);
  lcd.print(value);
  delay(100);
  
  if(value>500)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
    }
}
