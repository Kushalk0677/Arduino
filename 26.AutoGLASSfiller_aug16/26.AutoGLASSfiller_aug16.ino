int Motor = 11;
int trigPin = 8;
int echoPin = 9;

void setup() {
  pinMode(Motor,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int duration,distance;

  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); 
  
  distance = duration*0.034/2;
  
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
  
   if(distance>5)
  {
    digitalWrite(Motor, HIGH);
     Serial.println("Dry ");
  }
  else
  {
    digitalWrite(Motor, LOW);
     Serial.println("Wet ");
    }
  
}
