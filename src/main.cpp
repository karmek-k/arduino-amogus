#include <Arduino.h>
#include <Tone.h>

#include "song.hpp"

Tone piezo;
constexpr uint8_t PIEZO_PIN = 8;

void setup() {
    piezo.begin(PIEZO_PIN);
}

void loop() {   
    play(piezo, 94.0);
}
