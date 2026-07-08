#ifndef MXSWITCH_H
#define MXSWITCH_H
// #include <Arduino.>

class MxSwitch {
    private:
        int _pin;
    
    public:
        MxSwitch(int switchPin);

        void begin();

};

#endif