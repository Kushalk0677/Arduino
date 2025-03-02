/* Fast Line Follower Code By Mohan Kshirsagar
 *  Product Development Head IndiaFIRST Robotics
 */
#include <AFMotor.h>    
#include <QTRSensors.h> 
  
AF_DCMotor motor1(1, MOTOR12_1KHZ ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ ); 

#define KP 3
#define KD 7 //( Note: Kp < Kd) 
#define M1_minumum_speed 50
#define M2_minumum_speed 50 
#define M1_maximum_speed 150
#define M2_maximum_speed 150
#define MIDDLE_SENSOR 3     
#define NUM_SENSORS 5     
#define TIMEOUT 2500          
#define EMITTER_PIN 2         
#define DEBUG 0
int state = 0;



QTRSensorsRC qtrrc((unsigned char[]) { A5,A4,A3,A2,A1} ,NUM_SENSORS, TIMEOUT, EMITTER_PIN);
  
unsigned int sensorValues[NUM_SENSORS];
  
void setup(){ 
delay(1500);
set_motors(0,0);
  while(1)
  {if(Serial.available()>0)
  {state = Serial.read();
    if(state == '1')
    {break;}

}
  
int lastError = 0;
int last_proportional = 0;
int integral = 0;
  
void loop(){ 
unsigned int sensors[5];
int position = qtrrc.readLine(sensors); 
int error = position - 2000;
  
int motorSpeed = KP * error + KD * (error - lastError);
lastError = error;
  
int leftMotorSpeed = M1_minumum_speed + motorSpeed;
int rightMotorSpeed = M2_minumum_speed - motorSpeed;

set_motors(leftMotorSpeed, rightMotorSpeed);
}
  
void set_motors(int motor1speed, int motor2speed){ 
if (motor1speed > M1_maximum_speed ) motor1speed = M1_maximum_speed;
if (motor2speed > M2_maximum_speed ) motor2speed = M2_maximum_speed;
if (motor1speed < 0) motor1speed = 0; 
if (motor2speed < 0) motor2speed = 0; 
motor1.setSpeed(motor1speed); 
motor2.setSpeed(motor2speed);
motor1.run(FORWARD); 
motor2.run(FORWARD);
}
void manual_calibration() {
int i;
for (i = 0; i < 250; i++){
qtrrc.calibrate(QTR_EMITTERS_ON);
delay(20);
}
  
if (DEBUG) { 
Serial.begin(9600);
for (int i = 0; i < NUM_SENSORS; i++){
Serial.print(qtrrc.calibratedMinimumOn[i]);
Serial.print(' ');
}
Serial.println();
  
for (int i = 0; i < NUM_SENSORS; i++){
Serial.print(qtrrc.calibratedMaximumOn[i]);
Serial.print(' ');
}
Serial.println();
Serial.println();
}
}
