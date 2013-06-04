/*
A simple program that moves the robot forward, checks PIR sensors, and turns in the direction of movement.

 */
// Initialize all the variables used 
int x = 0;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int right_motor = 5; //pin assignment for right servo
int left_motor = 6; //pin assignment for left servo
int ltime = 1500; //initialize the time variable for left motor
int rtime = 1500; //initialize the time variable for right motor
int pirlf = 11; //pin connected to PIR left front
int pirrf = 10; //pin connected to PIR right front
int pirrr = 12; //pin connected to PIR right rear
int pirlr = 13; //pin connected to pir left rear



// initial setup of variables:
void setup() {                
  // initialize the digital pins as output or input
  pinMode(right_motor, OUTPUT); 
  pinMode(left_motor, OUTPUT);
  pinMode(pirlf, INPUT);
  pinMode(pirrf, INPUT);
  pinMode(pirrr, INPUT);
  pinMode(pirlr, INPUT);
  
}

// the main loop routine:
void loop() {
 //Set the duration of time and direction of each motor             
 x = 50;
 ltime = 1300;
 rtime = 1700;
//This routine sets the motors to go forward for a short distance 
 do{
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
    x = x - 1;
 }while (x > 0);
  
//Now read each motion sensor and load the value into a memory location. 
 a = digitalRead(pirlf);
 b = digitalRead(pirrf);
 c = digitalRead(pirrr);
 d = digitalRead(pirlr);
 
//Check to see if any of them are at a HIGH level - meaning motion detected.
 if (a == HIGH || b == HIGH || c == HIGH || d == HIGH) {

//The following if - else if statements determine the thought process of the robot
//This can be changed to determine priority of which PIR sensor would be considered first
//There are other ways of doing this that would modify the robots patterns
//In each statement is a duration of time and motor pulse settings that determine direction
  if (a == HIGH && d == HIGH){
   ltime = 1300;
   rtime = 1300;
   x = 24;
  }
else if (b == HIGH && c == HIGH){
  ltime = 1700;
  rtime = 1700;
  x = 24;
}  
 else if (a == HIGH){
   ltime = 1300;
   rtime = 1300;
   x = 12;
 }
 else if (b == HIGH) {
   ltime = 1700;
   rtime = 1700;
   x = 12;
 }
 else if (c == HIGH){
   ltime = 1300;
   rtime = 1300;
   x = 36;
 }
 else if (d == HIGH){
   ltime = 1700;
   rtime = 1700;
   x = 36;  
 }
//Now that the values have been loaded in the if statements, they can be sent to the motor for response
do {
        
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
    x = x - 1;
  } while (x >0);
//The last thing to do is clear the memory spots and go back to the beginning.
  a == LOW;
  b == LOW;
  c == LOW;
  d == LOW;
 }
  
 }
