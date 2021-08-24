#include <Arduino.h>

const int PIEZO_PIN = 8;

void setup() {
    pinMode(PIEZO_PIN, OUTPUT);
    tone(PIEZO_PIN, 440, 1000);
}

void loop() {
}
