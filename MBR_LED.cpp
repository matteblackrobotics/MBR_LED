#include "MBR_LED.h"

// Constructor
MBR_LED::MBR_LED(uint8_t analogPin){
    _pin = analogPin;
    state = 0;
    pinMode(_pin, OUTPUT);
}

// turn LED on
void MBR_LED::On(){
    digitalWrite(_pin, HIGH);
}

// turn LED off
void MBR_LED::Off(){
    digitalWrite(_pin, LOW);
}
