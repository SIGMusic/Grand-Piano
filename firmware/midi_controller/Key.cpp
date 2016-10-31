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
