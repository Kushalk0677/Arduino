int led = 12;
int gas = A0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(gas, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(gas);
  Serial.println(value);
  
  
  if(value>500)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    }
}
