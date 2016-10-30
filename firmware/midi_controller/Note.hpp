#ifndef NOTE_HPP
#define NOTE_HPP

namespace GrandPiano
{

// MIDI note IDs
#define MIDI_C4 48
#define MIDI_D4 50
#define MIDI_E4 52
#define MIDI_F4 53
#define MIDI_G4 55
#define MIDI_A4 57
#define MIDI_B4 59
#define MIDI_C5 60
#define MIDI_CSHARP4 49
#define MIDI_DSHARP4 51
#define MIDI_FSHARP4 54
#define MIDI_GSHARP4 56
#define MIDI_ASHARP4 58

struct Note
{
    int m_midiID;
    int m_velocity;
    int m_channel;
};

}

#endif /* NOTE_HPP */
