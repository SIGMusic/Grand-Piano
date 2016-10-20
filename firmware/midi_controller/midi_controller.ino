#include <MIDI.h>

#define PIN_KEY_IN   2
#define PIN_MIDI_OUT 3

MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
    pinMode(PIN_KEY_IN, INPUT);
    pinMode(PIN_MIDI_OUT, OUTPUT);
    
    MIDI.begin();
}

void loop()
{
    // Read digital value from piano key
    int in_value = digitalRead(PIN_KEY_IN);
    
    // Output a tone if key was pressed
    if (in_value == HIGH) {
        MIDI.sendNoteOn(40, 127, 1);      // Note 40 (E3), velocity 127, channel 1
    } else {
        MIDI.sendNoteOff(40, 0, 1);       // Stop the note!
    }
    
    // TODO: Come up with a way to choose which note to play based on which key
    // is being pressed.
}
