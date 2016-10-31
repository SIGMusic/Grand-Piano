/*  Copyright (c) 2016 SIGMusic @ UIUC
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "Key.hpp"
#include "Notes.hpp"
#include "MIDI/MIDI.h"

MIDI_CREATE_DEFAULT_INSTANCE();

#define VELOCITY        127
#define MIDI_CHANNEL    1
#define NUM_KEYS        13

using namespace GrandPiano;

// Key definitions
Key keyC4(MIDI_C4, 2);
Key keyD4(MIDI_D4, 3);
Key keyE4(MIDI_E4, 4);
Key keyF4(MIDI_F4, 5);
Key keyG4(MIDI_G4, 6);
Key keyA4(MIDI_A4, 7);
Key keyB4(MIDI_B4, 8);
Key keyC5(MIDI_C5, 9);
Key keyCSharp4(MIDI_CSHARP4, A1);
Key keyDSharp4(MIDI_DSHARP4, A2);
Key keyFSharp4(MIDI_FSHARP4, A3);
Key keyGSharp4(MIDI_GSHARP4, A4);
Key keyASharp4(MIDI_ASHARP4, A5);

Key keys[NUM_KEYS] { keyC4, keyD4, keyE4, keyF4, keyG4, keyA4, keyB4, keyC5,
             keyCSharp4, keyDSharp4, keyFSharp4, keyGSharp4, keyASharp4 };

/**
 * Initializes the MIDI serial connection and sets Arduino pin modes.
 */
void setup()
{
    // Initialize MIDI serial channel
    MIDI.begin(MIDI_CHANNEL);

    // Set each pin to INPUT mode
    for (int i = 0; i < NUM_KEYS; i++)
    {
        pinMode(keys[i].getPin(), INPUT);
    }
}

/**
 * Continually checks whether keys are being pressed and plays/stops notes
 * accordingly.
 */
void loop()
{
    // Check 'pressed' status of each key
    for (int i = 0; i < NUM_KEYS; i++)
    {
        Key key = keys[i];

        // Read 'pressed' status
        int pinStatus = digitalRead(key.getPin());

        // Play or stop the note!
        if (pinStatus == 1 && !key.isPressed())
        {
            MIDI.sendNoteOn(key.getNote(), VELOCITY, MIDI_CHANNEL);
            key.setPressed(true);
        }
        else if (pinStatus == 0 && key.isPressed())
        {
            MIDI.sendNoteOff(key.getNote(), VELOCITY, MIDI_CHANNEL);
            key.setPressed(false);
        }
    }
}
