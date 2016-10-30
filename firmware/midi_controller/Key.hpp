#ifndef KEY_HPP
#define KEY_HPP

#include "Note.hpp"

namespace GrandPiano
{

class Key
{
private:
    bool m_isPressed;
    int m_pin;
    Note m_note;

public:
    Key(Note note, int pin);

    bool isPressed();
    int getPin();
    void press();
    void release();
};

}

#endif /* KEY_HPP */
