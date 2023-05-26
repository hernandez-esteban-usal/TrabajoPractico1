// Definir pines para semáforo
const int rojo = 13;
const int amarillo = 12;
const int verde = 11;

// Definir pines para botones
const int btn_rojo = 9;
const int btn_amarillo = 8;
const int btn_verde = 7;

void setup() {
  // Inicializar pines para semáforo como salida
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);

  // Inicializar pines para botones como entrada
  pinMode(btn_rojo, INPUT_PULLUP);
  pinMode(btn_amarillo, INPUT_PULLUP);
  pinMode(btn_verde, INPUT_PULLUP);
}

void loop() {
  // Comprobar si se presionó el botón rojo
  if (digitalRead(btn_rojo) == LOW) {
    // Apagar semáforo
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW);
  } 
  // Comprobar si se presionó el botón amarillo
  else if (digitalRead(btn_amarillo) == LOW) {
    // Encender luz amarilla
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW);
    delay(3000);
    // Apagar semáforo
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW);
  }
  // Comprobar si se presionó el botón verde
  else if (digitalRead(btn_verde) == LOW) {
    // Encender luz verde
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, HIGH);
    delay(5000);
    // Encender luz amarilla
    digitalWrite(rojo, LOW);
    digitalWrite(amarillo, HIGH);
    digitalWrite(verde, LOW);
    delay(3000);
    // Encender luz roja
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW);
  }
  // Si no se presionó ningún botón, dejar encendida la luz roja
  else {
    digitalWrite(rojo, HIGH);
    digitalWrite(amarillo, LOW);
    digitalWrite(verde, LOW);
  }
}