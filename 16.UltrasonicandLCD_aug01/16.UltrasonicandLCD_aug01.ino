#include<LiquidCrystal.h> // library
LiquidCrystal lcd(2,3,4,5,6,7); // pin order
int trigPin = 8;
int echoPin = 9;
int led = 13;

void setup() {
  lcd.begin(16, 2); // 16 columns and 2 rows for the lcd screen
  
  pinMode(trigPin, OUTPUT);// Def Pins
  pinMode(echoPin, INPUT);
 

}

void loop() {
  int duration,distance; // Creating variables. Using as different variables using "Comma"

  digitalWrite(trigPin, LOW); // Use partitions like a tap with drops droping. Beeps
  delayMicroseconds(2); // Using Microseconds for details not seconds. Small beeps. Second = 1000000 Micro seconds
  digitalWrite(trigPin, HIGH); // High for on and Low for off.
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); 
  // pulseIn is time taken. Here HIGH is automatic. Measures when the echo pin is HIGH, after how much time. Duratinon gets stored.

  
  distance = duration*0.034/2;
  // Speed of sound = 340 m/s
  // Senses from 4 to 400 cm
  // You hve to change speed to microseconds
  // = (340 x 100) divided by 100000
  // = o.034 cm/ms centimeter per microsecond
  // Divided by 2 is for 2 way time
  
  
  
  lcd.setCursor(3,0);
  lcd.print("Distance=");
  
  
  
 
  lcd.setCursor(2,1);
  lcd.print(distance);
  
  lcd.setCursor(5,1);
  lcd.print("cm");
    
  
  delay(100);

}
