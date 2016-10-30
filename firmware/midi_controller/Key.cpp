#include "Key.hpp"

namespace GrandPiano
{

Key::Key(Note note, int pin) :
        m_pin(pin),
        m_note(note)
{ }

bool Key::isPressed()
{
    return m_isPressed;
}

void Key::setPressed(bool pressed)
{
    m_isPressed = pressed;
}

int Key::getPin()
{
    return m_pin;
}

Note Key::getNote()
{
    return m_note;
}

}
