int gas = A0;

void setup() {
  pinMode(gas, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(gas);
  Serial.println(value);

}
