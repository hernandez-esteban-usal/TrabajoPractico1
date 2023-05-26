#include <IRremote.h>

int receptorPin = 11; // Pin digital al que está conectado el receptor

IRrecv receptor(receptorPin);
decode_results resultados;

void setup()
{
  Serial.begin(9600);
  receptor.enableIRIn(); // Iniciar el receptor de infrarrojos
}

void loop()
{
  if (receptor.decode(&resultados))
  {
    Serial.println(resultados.value, HEX); // Mostrar el código recibido en hexadecimal
    receptor.resume(); // Reiniciar el receptor para recibir el próximo código
  }
}
