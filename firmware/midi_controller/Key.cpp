#include "Key.hpp"

namespace GrandPiano
{

Key::Key(int note, int pin) :
        m_pin(pin),
        m_noteID(note)
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

int Key::getNote()
{
    return m_noteID;
}

}
