#include <Arduino.h>


int MOTOR_1A = 9;
int MOTOR_1B = 10;

void setup() {
  Serial.begin(9600);

  Serial.println("Hello World");
  
  pinMode(MOTOR_1A, OUTPUT);
  pinMode(MOTOR_1B, OUTPUT);

  digitalWrite(MOTOR_1B, LOW);

  Serial.println("Turning motor forward");
}

void loop() {
  
  // digitalWrite(MOTOR_1A, HIGH);

  analogWrite(MOTOR_1A, 0);
  Serial.println("Motor off");

  delay(2000);

  analogWrite(MOTOR_1A, 127);
  Serial.println("Motor half speed");

  delay(2000);

  analogWrite(MOTOR_1A, 255);
  Serial.println("Motor full speed");

  delay(2000);
}