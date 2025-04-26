#include <AFMotor.h>      // Adafruit Motor Shield library
#include <NewPing.h>      // Ultrasonic sensor library
#include <Servo.h>        // Servo motor library

// Define ultrasonic sensor pins
#define TRIG_PIN A0 
#define ECHO_PIN A1 
#define MAX_DISTANCE 200  // Max range in cm

// Motor speed constants
#define MAX_SPEED 190 
#define MAX_SPEED_OFFSET 20

// Create objects for ultrasonic and motors
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE); 

AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);
Servo myservo;   // Create servo object

boolean goesForward = false;  // Track forward movement
int distance = 100;           // Default distance
int speedSet = 0;             // Variable to control motor speed

void setup() {
  myservo.attach(10);      // Connect servo to pin 10
  myservo.write(115);      // Set servo to front-facing
  delay(2000);             // Wait before starting

  // Read initial distance 4 times for stability
  distance = readPing(); delay(100);
  distance = readPing(); delay(100);
  distance = readPing(); delay(100);
  distance = readPing(); delay(100);
}

void loop() {
  int distanceR = 0;
  int distanceL = 0;
  delay(40);

  if (distance <= 30) {  // Obstacle detected
    moveStop();
    delay(100);
    moveBackward();
    delay(300);
    moveStop();
    delay(200);

    distanceR = lookRight(); delay(200);
    distanceL = lookLeft(); delay(200);

    if (distanceR >= distanceL) {
      turnRight();
    } else {
      turnLeft();
    }

    moveStop();  // Stop after turning
  } else {
    moveForward();  // No obstacle, keep moving
  }

  distance = readPing();  // Update distance
}

// Rotate servo to right and get distance
int lookRight() {
  myservo.write(50); 
  delay(500);
  int distance = readPing();
  delay(100);
  myservo.write(115);  // Reset to center
  return distance;
}

// Rotate servo to left and get distance
int lookLeft() {
  myservo.write(170); 
  delay(500);
  int distance = readPing();
  delay(100);
  myservo.write(115);  // Reset to center
  return distance;
}

// Read distance from ultrasonic sensor
int readPing() {
  delay(70);
  int cm = sonar.ping_cm();
  if (cm == 0) {
    cm = 250;  // If sensor doesn't detect, assume far
  }
  return cm;
}

// Stop all motors
void moveStop() {
  motor1.run(RELEASE); 
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

// Move robot forward
void moveForward() {
  if (!goesForward) {
    goesForward = true;
    motor1.run(FORWARD);      
    motor2.run(FORWARD);
    motor3.run(FORWARD); 
    motor4.run(FORWARD);     

    for (speedSet = 0; speedSet < MAX_SPEED; speedSet += 2) {
      motor1.setSpeed(speedSet);
      motor2.setSpeed(speedSet);
      motor3.setSpeed(speedSet);
      motor4.setSpeed(speedSet);
      delay(5);
    }
  }
}

// Move robot backward
void moveBackward() {
  goesForward = false;
  motor1.run(BACKWARD);      
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);  

  for (speedSet = 0; speedSet < MAX_SPEED; speedSet += 2) {
    motor1.setSpeed(speedSet);
    motor2.setSpeed(speedSet);
    motor3.setSpeed(speedSet);
    motor4.setSpeed(speedSet);
    delay(5);
  }
}

// Turn robot to the right
void turnRight() {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);     
  delay(500);

  // Reset to forward
  motor1.run(FORWARD);      
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);      
}

// Turn robot to the left
void turnLeft() {
  motor1.run(FORWARD);     
  motor2.run(BACKWARD);  
  motor3.run(BACKWARD);
  motor4.run(FORWARD);   
  delay(500);

  // Reset to forward
  motor1.run(FORWARD);     
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}
