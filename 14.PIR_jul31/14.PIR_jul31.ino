int led = 13;
int ms = 5;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ms, INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = digitalRead(ms);

  if(data == 1)
  {
    digitalWrite(led, HIGH);
    Serial.println("Motion Ditected");
  }
  else
  {
    digitalWrite(led, LOW);
    Serial.println("Motion Not Ditected");
  }
}
