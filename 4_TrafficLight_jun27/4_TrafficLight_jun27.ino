int led1 = 13;
int led2 = 12;
int led3 = 11;

void setup() {
 pinMode(led1, OUTPUT); 
 pinMode(led2, OUTPUT); 
 pinMode(led3, OUTPUT); 

}

void loop() {
   digitalWrite(led1, HIGH);
    delay(60000);
    digitalWrite(led1, LOW);
   delay(0); 
   digitalWrite(led2, HIGH);
    delay(15000);
    digitalWrite(led2, LOW);
   delay(0);   
   digitalWrite(led3, HIGH);
   delay(30000);
    digitalWrite(led3, LOW);
   delay(0);
   // Or
   digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
    delay(1000);
     digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
   digitalWrite(led3, LOW);
    delay(1000);
     digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
   digitalWrite(led3, HIGH);
    delay(1000);
    // Or
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
    delay(100);
     digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
   digitalWrite(led3, LOW);
    delay(100);
     digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
   digitalWrite(led3, HIGH);
    delay(100);
   
   

}
