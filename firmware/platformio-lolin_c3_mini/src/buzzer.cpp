#include "buzzer.h"

Buzzer::Buzzer(int buzzerPin) {
    _pin = buzzerPin;

};

void Buzzer::begin() {
    pinMode(_pin, OUTPUT);
};

void Buzzer::beep(int frequency, int duration) {
    tone(_pin, frequency, duration);
}