#include <SoilHygrometer.h>

SoilHygrometer hygrometer(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  hygrometer.print("Soil hygrometer value: ", 0, 100);
  Serial.println();
}