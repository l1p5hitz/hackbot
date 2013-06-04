/*
A simple program that commands the robot to go in a square.

 */
 
// Setup variables and pin assignments
int right_motor = 5; //pin assignment for right servo
int left_motor = 6; //pin assignment for left servo
int ltime = 1500; //initialize the time variable for left motor
int rtime = 1500; //initialize the time variable for right motor


// Initial setup of pin direction
void setup() {                
  // initialize the digital pin as output or input
  pinMode(right_motor, OUTPUT); 
  pinMode(left_motor, OUTPUT);

}

// main loop:
void loop() {
  //This section of code pulses each motor for 1500 micro-seconds then off for 20 milli-seconds.
  //This is the "stop command" for the motor
  digitalWrite(right_motor, HIGH); 
  digitalWrite(left_motor, HIGH);
  delayMicroseconds(rtime);               
  digitalWrite(right_motor, LOW);    
  digitalWrite(left_motor, LOW);
  delay(20);               
  //This section pulses the motors in such a way to get them both going forward for a short amount of time.
  for (int x = 0; x <= 50; x++){
    //Under 1500 will get the motor going one way, over 1500 will be the other direction
    //Since the motors are mounted mirror of each other they need to be commanded to go in opposite directions
    //in order to move teh robot forward or reverse
    ltime = 1300; 
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
  }
  //This section of code turns the robot to the right about 90 degrees
 for (int x = 0; x <= 25; x++){
    ltime = 1700;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
    }
 //Go forward again
 for (int x = 0; x <= 50; x++){
    ltime = 1300;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);  

}
//Turn right 90 degrees
 for (int x = 0; x <= 25; x++){
    ltime = 1700;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
  }
  //Go forward again
 for (int x = 0; x <= 50; x++){
    ltime = 1300;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
 }
//Once again, to the right 
  for (int x = 0; x <= 25; x++){
    ltime = 1700;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
 }
//And yet again, forward 
  for (int x = 0; x <= 50; x++){
    ltime = 1300;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
 }
//One last turn to the right.
 for (int x = 0; x <= 25; x++){
    ltime = 1700;
    rtime = 1700;
    
    digitalWrite(right_motor, HIGH); 
    delayMicroseconds(rtime);               
    digitalWrite(right_motor, LOW);    
    delay(20);   

    digitalWrite(left_motor, HIGH);
    delayMicroseconds(ltime);
    digitalWrite(left_motor, LOW);
    delay(20);
 }
//Go back to the start and do it all over again.
  }
