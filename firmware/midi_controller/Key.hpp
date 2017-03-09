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

#ifndef KEY_HPP
#define KEY_HPP

namespace GrandPiano
{

/**
 * This class represents a key on the piano.
 */
class Key
{
private:
    bool m_isPressed;
    int m_pin;
    int m_noteID;

public:
    /**
     * Creates a new instance of Key.
     *
     * @param noteID the MIDI ID of the note to be played
     * @param pin    the Arduino pin to which this key is connected
     */
    Key(int noteID, int pin);

    /**
     * Checks whether this key is currently being pressed.
     *
     * @return true if the key is being pressed, false otherwise
     */
    bool isPressed();

    /**
     * Sets whether this key is currently being pressed.
     *
     * @param pressed a bool indicating whether the key is being pressed
     */
    void setPressed(bool pressed);

    /**
     * Returns the Arduino pin number that this key is connected to.
     *
     * @return the Arduino pin to which this key is connected
     */
    int getPin();

    /**
     * Returns the MIDI note ID associated with this key.
     *
     * @return the MIDI ID of the note to be played when this key is pressed
     */
    int getNote();
};

}

#endif /* KEY_HPP */
