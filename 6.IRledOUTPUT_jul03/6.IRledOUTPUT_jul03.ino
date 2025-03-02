int ir = 2;

void setup() {
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = digitalRead(ir);
  Serial.println(data);

  if(data == 1)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
}
