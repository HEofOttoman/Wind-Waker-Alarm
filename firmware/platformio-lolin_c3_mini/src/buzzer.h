#ifndef BUZZER_H
#define BUZZER_H
#include <Arduino.h>

class Buzzer {
    private:
        int _pin;

    public:
        Buzzer(int buzzerPin);

        void begin();

        void beep(int frequency, int duration);
};

#endif