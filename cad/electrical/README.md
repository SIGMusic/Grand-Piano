# Electrical design

## Schematic

key.sch is the Eagle schematic for a single key,
and controller.sch is for the Arduino sensing all the keys.
There are also PDF versions you can view if you don't have Eagle installed.

## Bill Of Materials

**Microcontroller**
* (1) [Arduino Uno](https://www.adafruit.com/product/50)
* (1) [MIDI jack, right-angle female](http://www.digikey.com/short/3b7cbp)
* (2) 220Ω resistor

**Power supply**
* (1) [12V 10A power supply](https://www.amazon.com/SUPERNIGHT-100-240V-5-5x2-1mm-Converter-Flexible/dp/B00LWQ2GS0)
* (1) [2.1mm DC jack to screw terminal adapter](https://www.adafruit.com/products/368)
* (1) 1000µF capacitor
* 12' x [16-gauge 2-conductor wire](http://www.homedepot.com/p/Southwire-By-the-Foot-16-2-Black-Stranded-Landscape-Lighting-Wire-55213199/204725046)
* (7) [LD1117V50 regulator](http://www.digikey.com/short/395tz2)
* (7) 100nF capacitor
* (7) 10µF capacitor

**Keypress sensor**
* (7) [half-size breadboard](https://www.adafruit.com/products/64)
* (7) [LM2903N comparator](http://www.digikey.com/short/3bc118)
* (13) [FSR 406](https://www.adafruit.com/products/1075)
* (13) 1KΩ resistor
* (13) 3KΩ resistor
* (13) 3.9KΩ resistor
* (13) 4.3KΩ resistor
* (13) 5.1KΩ resistor
* (13) 30KΩ resistor

**Light strip**
* (5) [12V LED strip](http://www.lightingever.com/12v-led-strip-light-3528-4100057-dw.html)
    - 2m per white key, 1m per black key
* (13) [PSMN022-30PL MOSFET](http://www.digikey.com/short/391mv8)
