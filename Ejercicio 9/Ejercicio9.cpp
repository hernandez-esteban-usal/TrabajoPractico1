const int sensorPin = A0; // Pin analógico donde está conectado el sensor
int sensorValue = 0; // Valor que se leerá del sensor
float rainAmount = 0; // Cantidad de lluvia en milímetros
float conversionFactor = 0.1; // Factor de conversión para convertir el valor del sensor a milímetros

void setup() {
  Serial.begin(9600); // Inicia la comunicación serie a 9600 baudios
}

void loop() {
  sensorValue = analogRead(sensorPin); // Lee el valor del sensor
  rainAmount = sensorValue * conversionFactor; // Convierte el valor del sensor a milímetros
  Serial.print("Cantidad de lluvia: "); // Imprime el mensaje en la consola
  Serial.print(rainAmount); // Imprime la cantidad de lluvia medida
  Serial.println("mm"); // Imprime la unidad de medida
  delay(1000); // Espera 1 segundo antes de leer nuevamente el sensor
}