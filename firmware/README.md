# MIDI Controller
The MIDI controller is responsible for producing a note when a piano key is
pressed. The controller listens for signals from the piano keys, decides which
note to play based on which key was pressed, and sends off a MIDI signal. The
MIDI signal can then be received by a computer or other device.

The MIDI controller makes use of
![Arduino MIDI Library v4.2](https://github.com/FortySevenEffects/arduino_midi_library/releases/tag/4.2),
written by Forty Seven Effects.

## Design Overview
The MIDI controller is implemented on an Arduino Uno.

Each piano key sends a 5V signal if it is being pressed and 0V if it is not
being pressed. Digital pins 2 - 8 are connected to the natural keys C, D, E, F,
G, A, and B respectively. Analog pins 0 - 4 are connected to the sharp
keys C#, D#, F#, G#, and A# respectively. Analog pins are used for the black
keys because there are not enough digital pins on the Uno for all 13 keys. MIDI
signals are transmitted over the standard serial pins 0 and 1.

Since keys can only send two signals (pressed or not pressed), all notes have
the same velocity.
