// Definir pines
const int sensorPin = A0;     // Pin analógico para leer datos del sensor
const int buzzerPin = 2;     // Pin digital para el buzzer

// Definir umbral de alarma para detección de gas
const int gasThreshold = 400; // Ajusta el umbral según sea necesario

void setup() {
  pinMode(buzzerPin, OUTPUT); // Configurar el pin del buzzer como salida
  Serial.begin(9600);         // Inicializar la comunicación serial para la depuración
}

void loop() {
  // Leer el valor analógico del sensor de gas
  int gasValue = analogRead(sensorPin);

  // Mostrar el valor del sensor en el monitor serial
  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  // Activar el buzzer si se detecta gas por encima del umbral
  if (gasValue > gasThreshold) {
    digitalWrite(buzzerPin, HIGH); // Activar el buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Desactivar el buzzer
  }

  delay(100); // Esperar un breve período antes de tomar la siguiente lectura
}
