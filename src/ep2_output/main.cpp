#include <Arduino.h>

#define LED 11

void blink() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}

void blinkWithCounter(int x) {
  int counter = 0;

  while (counter < x) {
    Serial.print("Step:");
    counter = counter + 1;
    Serial.println(counter);

    blink();
  }
}

int add(int x, int y) {
  int z = x + y;

  return z;
}

void setup() {
  Serial.begin(9600);

  pinMode(LED, OUTPUT);

  blinkWithCounter(3);

  Serial.println("Done step1");

  blinkWithCounter(2);

  Serial.println("Done step2");

  int v = add(10, 20);

  Serial.println(v);
}

void loop() {
  
}