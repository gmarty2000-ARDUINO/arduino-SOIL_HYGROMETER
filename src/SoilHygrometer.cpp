#include "SoilHygrometer.h"

/* ------------------------------ CONSTRUCTOR CODE ------------------------------ */

/* Constructor - It saves the pin number and sets it in OUTPUT mode */
SoilHygrometer::SoilHygrometer(int pin) {
    this->pin = pin;
}

/* ------------------------------ SIMPLE APIs ------------------------------ */

/* Method - It reads the SoilHygrometer value */
int SoilHygrometer::read(int begin, int end) {
    int rawValue = analogRead(this->pin);
    int value = map(rawValue, 0, 1023, begin, end);
    
    return value;
}

/* ------------------------------ OTHER FUNCTIONS ------------------------------ */

/* Method - It prints the SoilHygrometer info */
void SoilHygrometer::print(String str, int begin, int end) {
    int value = this->read(begin, end);

    Serial.print(str);
    Serial.print(value);
}

/* Method - It returns the SoilHygrometer informations */
String SoilHygrometer::toString() {
    String ret = String("SoilHygrometer: {");
    ret.concat("pin=");
    ret.concat(this->pin);
    ret.concat("}");
    
    return ret;
}
