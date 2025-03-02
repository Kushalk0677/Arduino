int ir = 2;

void setup() {
pinMode(ir, INPUT);
Serial.begin(9600);
}

void loop() {
int Data = digitalRead(ir);

 if(Data == 1)
  {
  Serial.println("There is something in front of the sensor.");
  }
  else
  {
  Serial.println("There is nothing in front of the sensor.");
  }
}
