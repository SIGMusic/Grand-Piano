#include "Key.hpp"
#include "MIDI/MIDI.h"

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

int Key::getPin()
{
    return m_pin;
}

void Key::press()
{
    if (!m_isPressed)
    {
        MIDI.sendNoteOn(m_note.m_midiID, m_note.m_velocity, m_note.m_channel);
        m_isPressed = true;
    }
}

void Key::release()
{
    if (m_isPressed)
    {
        MIDI.sendNoteOff(m_note.m_midiID, m_note.m_velocity, m_note.m_channel);
        m_isPressed = false;
    }
}

}
