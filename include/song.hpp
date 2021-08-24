#ifndef SONG_HPP
#define SONG_HPP

#include <Tone.h>

constexpr uint16_t FREQS[] = {
    NOTE_C3, NOTE_C3, NOTE_C4, NOTE_DS4, NOTE_F4, NOTE_FS4, NOTE_F4, NOTE_DS4,
    
};

constexpr int FREQS_SIZE = sizeof(FREQS)/sizeof(FREQS[0]); 

#endif
