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

#include <Arduino.h>
#include "Key.hpp"

const unsigned long DEBOUNCE_COOLDOWN_TIME = 100; // ms

namespace GrandPiano
{

Key::Key(int note, int pin) :
        m_pin(pin),
        m_noteID(note),
        m_lastChanged(0)
{ }

Key::Key(const Key & other) :
        m_pin(other.m_pin),
        m_noteID(other.m_noteID),
        m_lastChanged(other.m_lastChanged)
{ }

bool Key::isPressed()
{
    return m_isPressed;
}

bool Key::setPressed(bool pressed)
{
    if (millis() - m_lastChanged >= DEBOUNCE_COOLDOWN_TIME) {
        m_isPressed = pressed;
        m_lastChanged = millis();
        return true;
    } else {
        return false;
    }
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
