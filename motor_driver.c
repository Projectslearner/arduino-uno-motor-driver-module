/*
    Project name : Motor Driver Module
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-motor-driver-module
*/

// Motor A
int motorPin1 = 2; // Pin 2 on Arduino
int motorPin2 = 3; // Pin 3 on Arduino

// Motor B
int motorPin3 = 4; // Pin 4 on Arduino
int motorPin4 = 5; // Pin 5 on Arduino

void setup() {
  // Set all motor pins as OUTPUT
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);

  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Motor A: Forward
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  
  // Motor B: Reverse
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);

  // Output status to serial monitor
  Serial.println("Motors Forward & Reverse");
  
  delay(2000); // Run motors for 2 seconds

  // Stop motors
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);

  // Output status to serial monitor
  Serial.println("Motors Stopped");
  
  delay(1000); // Wait for 1 second
}
