#include <Servo.h>    // Use Servo library, included with IDE

Servo myServo;        // Create Servo object to control the servo 

void setup() { 
  myServo.attach(9);  // Servo is connected to digital pin 9 
} 

void loop() { 
  myServo.writeMicroseconds(1700);  // Counter clockwise
  delay(2000);                      // Wait 2 seconds
  myServo.writeMicroseconds(1300);  // Clockwise
  delay(2000);
  myServo.writeMicroseconds(1500);  // Stop
  delay(2000); 
}
