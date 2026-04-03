#include <Arduino.h>

char y;
int x = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    y = Serial.read();

    Serial.print("Input y: ");
    Serial.println(y);

    if (y == 'a') {
      Serial.println("Hello A");
    } else if (y == 'b') {
      Serial.println("Hello B");
    } else if (y == 'c') {
      Serial.println("Hello C");
    } else {
      Serial.println("Unknown input");
    }

  }
}