int soil = A0;
int led = 12;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(soil, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(soil);
 
  Serial.println(value);

  if(value>500)
  {
    digitalWrite(12, HIGH);
     Serial.print("Dry ");
  }
  else
  {
    digitalWrite(12, LOW);
     Serial.print("Wet ");
    }


}
