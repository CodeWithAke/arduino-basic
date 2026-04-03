#include <Arduino.h>


int ledPin = 11;

void blink() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void blinkWithCount(int x) {
  int counter = 0;

  while (counter < x) {
    Serial.print("Hello: ");

    counter = counter + 1;

    Serial.println(counter);

    blink();
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  blinkWithCount(3);

  Serial.println("Done 1");

  blinkWithCount(2);

  Serial.println("Done 2");
}

void loop() {
  
}