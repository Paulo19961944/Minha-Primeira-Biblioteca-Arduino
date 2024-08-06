#include <PiscaLed.h>

PiscaLed::PiscaLed(int pino, long time){
  // pino e time so pode ser acessados de dentro dessa função
  pinMode(pino, OUTPUT);
  _pino = pino;
  _time = time;
}

void PiscaLed::acende_led(){
  digitalWrite(_pino, HIGH);
  delay(_time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(_time);
}