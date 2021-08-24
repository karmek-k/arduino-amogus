#include <Arduino.h>
#include <Tone.h>

#include "song.hpp"

void play(Tone piezo, float bpm) {
    float tempo = 60000 / bpm;

    for (int i = 0; i < FREQS_SIZE; ++i) {
        piezo.play(FREQS[i]);
        delay(tempo);
        piezo.stop();
    }
}
