#ifndef SONG_HPP
#define SONG_HPP

#include <Tone.h>

#include "durations.hpp"

constexpr uint16_t FREQS[] = {
    NOTE_C3, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_DS4,
    NOTE_C4, NOTE_AS3, NOTE_D4, NOTE_C4, 0, NOTE_G3,
    NOTE_C3, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_DS4,
    NOTE_FS4, NOTE_FS4, NOTE_F4, NOTE_DS4, NOTE_FS4, NOTE_F4, NOTE_DS4
};

const double DURATIONS[] = {
    D_QUARTER, D_EIGHT, D_EIGHT, D_EIGHT, D_EIGHT, D_EIGHT, D_EIGHT,
    dot(D_QUARTER), D_SIXTEENTH, D_SIXTEENTH, D_QUARTER, D_EIGHT, D_EIGHT,
    D_QUARTER, D_EIGHT, D_EIGHT, D_EIGHT, D_EIGHT, D_EIGHT, D_EIGHT,
    D_HALF, triplet(D_EIGHT), triplet(D_EIGHT), triplet(D_EIGHT), triplet(D_EIGHT), triplet(D_EIGHT), triplet(D_EIGHT)
};

constexpr int FREQS_SIZE = sizeof(FREQS)/sizeof(FREQS[0]);

void play(Tone piezo, double bpm);

#endif
