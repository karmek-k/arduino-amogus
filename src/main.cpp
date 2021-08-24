#include <Arduino.h>
#include <Tone.h>

#include "song.hpp"

Tone piezo;
constexpr uint8_t PIEZO_PIN = 8;

void setup() {
    piezo.begin(PIEZO_PIN);
}

void loop() {   
    for (int i = 0; i < FREQS_SIZE; ++i) {
        piezo.play(FREQS[i]);
        delay(250);
        piezo.stop();
    }
}
