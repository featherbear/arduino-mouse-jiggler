#include <Arduino.h>
#include <Mouse.h>

void setup() {
  Mouse.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  delay(59 * 1000 + 500);
  digitalWrite(LED_BUILTIN, HIGH);
  Mouse.move(1, 0, 0);
  Mouse.move(-1, 0, 0);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
}