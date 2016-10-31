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
being pressed. Digital pins D2 - D9 are connected to the natural keys C4, D4,
E4, F4, G4, A4, B4, and C5 respectively. Analog pins A1 - A5 are connected to
the sharp keys C#4, D#4, F#4, G#4, and A#4 respectively. Analog pins are used
for the black keys because there are not enough digital pins on the Uno for all
13 keys. MIDI signals are transmitted over the standard serial pins 0 and 1.

Since keys can only send two signals (pressed or not pressed), all notes have
the same velocity.
