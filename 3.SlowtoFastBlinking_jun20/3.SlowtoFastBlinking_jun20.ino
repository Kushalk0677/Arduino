int led = 13;

void setup() {
 pinMode(led, OUTPUT); 

}

void loop() {
  // Blinking LED and Explaination of Sections
  digitalWrite(led, HIGH);
  // HIGH For ON
  delay(1000);
  // delay is in milli second
  digitalWrite(led, LOW);
  // LOW For OFF
  delay(1000);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
  digitalWrite(led, HIGH);
  delay(400);
  digitalWrite(led, LOW);
  delay(400);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  delay(150);
  digitalWrite(led, LOW);
  delay(150);
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite(led, HIGH);
  delay(50);
  digitalWrite(led, LOW);
  delay(50);
  digitalWrite(led, HIGH);
  delay(25);
  digitalWrite(led, LOW);
  delay(25);
}
