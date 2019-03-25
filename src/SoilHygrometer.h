#ifndef __SoilHygrometer_h
#define __SoilHygrometer_h

#include "Arduino.h"

class SoilHygrometer {
    public:     SoilHygrometer(int);
                int read(int, int);
                void print(String, int, int);
                String toString();
    private:    int pin;
};

#endif
