#include<LiquidCrystal.h> // library
LiquidCrystal lcd(2,3,4,5,6,7); // pin order
int ms = 10;


void setup() {
  lcd.begin(16, 2); // 16 columns and 2 rows for the lcd screen
  pinMode(ms, INPUT);
  

}

void loop() {
  int data = digitalRead(ms);

  if(data == 1 )
  {
    lcd.setCursor(1,0);
    lcd.print("Motion Detected");
    
  }
  else
  {
    lcd.setCursor(1,0);
    lcd.print("No Motion        ");
    
  }
  
  
  delay(100);

}
