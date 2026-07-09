#include "mxswitch.h"
#include <Arduino.h>

MxSwitch::MxSwitch(int switchPin) {
    _pin = switchPin;
};

void MxSwitch::begin() {
    pinMode(_pin, INPUT_PULLUP);
};

