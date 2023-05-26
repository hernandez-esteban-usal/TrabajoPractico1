const int gasPin = A0;    // Pin de entrada analógica del sensor de gas
const int buzzerPin = 9;  // Pin digital del buzzer
int gasValue = 0;        // Valor de lectura del sensor de gas

void setup() {
  Serial.begin(9600);    // Iniciar comunicación serial
  pinMode(buzzerPin, OUTPUT); // Configurar el pin del buzzer como salida
}

void loop() {
  gasValue = analogRead(gasPin);   // Leer el valor analógico del sensor de gas
  Serial.print("Gas value: ");
  Serial.println(gasValue);        // Imprimir el valor leído en el monitor serial
  
  if (gasValue > 500) {  // Establecer un umbral de gas alto (ajústalo según sea necesario)
    digitalWrite(buzzerPin, HIGH);  // Encender el buzzer
  } else {
    digitalWrite(buzzerPin, LOW);   // Apagar el buzzer
  }
  
  delay(1000);    // Esperar 1 segundo antes de realizar la siguiente lectura
}
