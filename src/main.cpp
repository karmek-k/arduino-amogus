#include <Arduino.h>
#include <Tone.h>

Tone piezo;
const uint8_t PIEZO_PIN = 8;

void setup() {
    piezo.begin(PIEZO_PIN);
}

void loop() {   
    piezo.play(NOTE_A4);
    delay(1000);
    piezo.stop();
    delay(1000);
}
