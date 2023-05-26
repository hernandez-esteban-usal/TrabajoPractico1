int sensorPin = 2; // Sensor de movimiento conectado al pin digital 2
int zumbadorPin = 3; // Zumbador conectado al pin digital 3

void setup() {
  pinMode(zumbadorPin, OUTPUT); // Configurar el pin del zumbador como salida
}

void loop() {
  int movimiento = digitalRead(sensorPin); // Leer el estado del sensor de movimiento
  if (movimiento == HIGH) { // Si se detecta movimiento
    digitalWrite(zumbadorPin, HIGH); // Activar el zumbador
    delay(1000); // Esperar 1 segundo
    digitalWrite(zumbadorPin, LOW); // Desactivar el zumbador
  }
}