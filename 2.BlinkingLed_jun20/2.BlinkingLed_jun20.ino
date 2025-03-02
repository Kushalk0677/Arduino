int led = 13;

void setup() {
 pinMode(led, OUTPUT); 

}

void loop() {
  // Blinking LED and Explaination of Sections
  digitalWrite(led, HIGH);
  // HIGH For ON
  delay(500);
  // delay is in milli second
  digitalWrite(led, LOW);
  // LOW For OFF
  delay(500);
  
}
