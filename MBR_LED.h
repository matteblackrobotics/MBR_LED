#ifndef LED_h
#define LED_h

#include <Arduino.h>

class MBR_LED{
  public:
    MBR_LED(uint8_t digitalPin);
    void On();
    void Off();
    bool state;

  private:
    uint8_t _pin;
};
#endif