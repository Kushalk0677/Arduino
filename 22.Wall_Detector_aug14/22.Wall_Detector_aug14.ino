int buzzer = 13;
int trigPin = 8;
int echoPin = 9; // Defining
// Trigger is OUTPUT
// Echo is INPUT
// Ultrasonic sensor senses sound reflections
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);// Def Pins
  pinMode(echoPin, INPUT);
  Serial.begin(9600); // Starting Seral Terminal and Monitor
}

void loop() {
  int duration,distance; // Creating variables. Using as different variables using "Comma"

  digitalWrite(trigPin, LOW); // Use partitions like a tap with drops droping. Beeps
  delayMicroseconds(2); // Using Microseconds for details not seconds. Small beeps. Second = 1000000 Micro seconds
  digitalWrite(trigPin, HIGH); // High for on and Low for off.
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH); 
  // pulseIn is time taken. Here HIGH is automatic. Measures when the echo pin is HIGH, after how much time. Duratinon gets stored.
  // It waits for the sensing.
  
  distance = duration*0.034/2;
  // Speed of sound = 340 m/s
  // Senses from 4 to 400 cm
  // You hve to change speed to microseconds
  // = (340 x 100) divided by 100000
  // = o.034 cm/ms centimeter per microsecond
  // Divided by 2 is for 2 way time
  
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
  
 if(distance<15)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    }
}
