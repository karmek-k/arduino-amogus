#include <Arduino.h>
#include <Tone.h>

#include "song.hpp"

void play(Tone piezo, double bpm) {
    double tempo = 60000 / bpm;
    tempo *= 4.0;

    for (int i = 0; i < FREQS_SIZE; ++i) {
        double duration = tempo * (1.0 / DURATIONS[i]);

        piezo.play(FREQS[i], duration);
        delay(duration);
        piezo.stop();
    }
}
