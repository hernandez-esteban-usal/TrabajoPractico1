int buttonPin = 2; // define el pin del botón
int buzzerPin = 3; // define el pin del zumbador
int note = 0; // variable para almacenar la nota actual

void setup() {
  pinMode(buttonPin, INPUT); // configura el pin del botón como entrada
  pinMode(buzzerPin, OUTPUT); // configura el pin del zumbador como salida
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) { // si se presiona el botón
    tone(buzzerPin, note, 100); // toca la nota en el zumbador durante 100 ms
    delay(100); // espera 100 ms antes de volver a leer el botón
  }
}