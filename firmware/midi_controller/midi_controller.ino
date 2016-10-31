#include "Key.hpp"
#include "Note.hpp"
#include "MIDI/MIDI.h"

MIDI_CREATE_DEFAULT_INSTANCE();

#define VELOCITY        127
#define MIDI_CHANNEL    1
#define NUM_KEYS        13

using namespace GrandPiano;

// MIDI note definitions
Note noteC4 { MIDI_C4, VELOCITY, MIDI_CHANNEL };
Note noteD4 { MIDI_D4, VELOCITY, MIDI_CHANNEL };
Note noteE4 { MIDI_E4, VELOCITY, MIDI_CHANNEL };
Note noteF4 { MIDI_F4, VELOCITY, MIDI_CHANNEL };
Note noteG4 { MIDI_G4, VELOCITY, MIDI_CHANNEL };
Note noteA4 { MIDI_A4, VELOCITY, MIDI_CHANNEL };
Note noteB4 { MIDI_B4, VELOCITY, MIDI_CHANNEL };
Note noteC5 { MIDI_C5, VELOCITY, MIDI_CHANNEL };
Note noteCSharp4 { MIDI_CSHARP4, VELOCITY, MIDI_CHANNEL };
Note noteDSharp4 { MIDI_DSHARP4, VELOCITY, MIDI_CHANNEL };
Note noteFSharp4 { MIDI_FSHARP4, VELOCITY, MIDI_CHANNEL };
Note noteGSharp4 { MIDI_GSHARP4, VELOCITY, MIDI_CHANNEL };
Note noteASharp4 { MIDI_ASHARP4, VELOCITY, MIDI_CHANNEL };

// Key definitions
Key keyC4(noteC4, 2);
Key keyD4(noteD4, 3);
Key keyE4(noteE4, 4);
Key keyF4(noteF4, 5);
Key keyG4(noteG4, 6);
Key keyA4(noteA4, 7);
Key keyB4(noteB4, 8);
Key keyC5(noteC5, 9);
Key keyCSharp4(noteCSharp4, A1);
Key keyDSharp4(noteDSharp4, A2);
Key keyFSharp4(noteFSharp4, A3);
Key keyGSharp4(noteGSharp4, A4);
Key keyASharp4(noteASharp4, A5);

Key keys[NUM_KEYS] { keyC4, keyD4, keyE4, keyF4, keyG4, keyA4, keyB4, keyC5,
             keyCSharp4, keyDSharp4, keyFSharp4, keyGSharp4, keyASharp4 };

void setup()
{
    MIDI.begin(MIDI_CHANNEL);

    for (int i = 0; i < NUM_KEYS; i++)
    {
        pinMode(keys[i].getPin(), INPUT);
    }
}

void loop()
{
    for (int i = 0; i < NUM_KEYS; i++)
    {
        Key key = keys[i];
        Note note = key.getNote();

        int pinStatus = digitalRead(key.getPin());
        if (pinStatus == 1 && !key.isPressed())
        {
            MIDI.sendNoteOn(note.m_id, note.m_velocity, note.m_channel);
            key.setPressed(true);
        }
        else if (pinStatus == 0 && key.isPressed())
        {
            MIDI.sendNoteOff(note.m_id, note.m_velocity, note.m_channel);
            key.setPressed(false);
        }
    }
}
