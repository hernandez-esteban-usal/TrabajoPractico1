const int sensorPin = A0; // Pin analógico para leer el valor del sensor
const int ledPin = 13;   // Pin digital para el LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Configurar el pin del LED como salida
  Serial.begin(9600);       // Iniciar la comunicación serial
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Leer el valor del sensor
  Serial.println(sensorValue);             // Mostrar el valor en el monitor serial

  if (sensorValue < 500) {
    digitalWrite(ledPin, HIGH);  // Encender el LED si el nivel de agua es bajo
  } else {
    digitalWrite(ledPin, LOW);   // Apagar el LED si el nivel de agua es suficiente
  }

  delay(1000);  // Esperar 1 segundo antes de la siguiente lectura
}