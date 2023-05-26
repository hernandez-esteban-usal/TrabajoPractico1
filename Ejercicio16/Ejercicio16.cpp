const int ldrPin = A0;      // Pin del sensor de luz (Photo Resistor)
const int ledPin = 13;      // Pin del LED

void setup() {
  pinMode(ldrPin, INPUT);    // Configurar el pin del sensor de luz como entrada
  pinMode(ledPin, OUTPUT);   // Configurar el pin del LED como salida
}

void loop() {
  int lightValue = analogRead(ldrPin);  // Leer el valor analógico del sensor de luz

  // Si el valor del sensor de luz es superior a un umbral establecido, apagar el LED
  if (lightValue > 500) {
    digitalWrite(ledPin, LOW);  // Apagar el LED
  } else {
    digitalWrite(ledPin, HIGH);   // Encender el LED
  }

  delay(100);  // Pequeña pausa antes de la siguiente lectura del sensor
}
