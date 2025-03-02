int soil = A0;
int Motor = 11;

void setup() {
  pinMode(Motor,OUTPUT);
  pinMode(soil, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(soil);
 
  Serial.println(value);

  if(value>500)
  {
    digitalWrite(Motor, HIGH);
     Serial.print("Dry ");
  }
  else
  {
    digitalWrite(Motor, LOW);
     Serial.print("Wet ");
    }


}
