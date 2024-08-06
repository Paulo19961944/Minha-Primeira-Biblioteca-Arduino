#include <PiscaLed.h>

PiscaLed piscaLed(13, 3000);

void setup() {
  Serial.begin(9600);
}

void loop() {
  piscaLed.acende_led();
}
