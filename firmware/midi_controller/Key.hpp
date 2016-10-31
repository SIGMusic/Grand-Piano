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
