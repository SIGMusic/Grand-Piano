#ifndef KEY_HPP
#define KEY_HPP

namespace GrandPiano
{

class Key
{
private:
    bool m_isPressed;
    int m_pin;
    int m_noteID;

public:
    Key(int noteID, int pin);

    bool isPressed();
    void setPressed(bool pressed);
    int getPin();
    int getNote();
};

}

#endif /* KEY_HPP */
