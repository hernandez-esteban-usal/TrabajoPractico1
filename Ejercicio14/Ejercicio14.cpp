// Definir los pines de los botones y LEDs
const int buttonPins[] = {2, 3, 4, 5};
const int ledPins[] = {6, 7, 8, 9};

// Definir las secuencias de juego
const int sequence[] = {2, 3, 4, 5, 2, 3, 4, 5}; // Cambia las secuencias según tus preferencias
int sequenceIndex = 0;

// Variables para el juego
int playerIndex = 0;
bool gameOn = false;

void setup() {
  // Configurar los pines de los botones como entradas
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT);
  }

  // Configurar los pines de los LEDs como salidas
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Esperar a que se presione el botón para iniciar el juego
  if (!gameOn && digitalRead(buttonPins[0]) == HIGH) {
    delay(100);
    if (digitalRead(buttonPins[0]) == HIGH) {
      gameOn = true;
      playerIndex = 0;
      sequenceIndex = 0;
      playSequence();
    }
  }

  // Leer los botones y verificar la secuencia del jugador
  if (gameOn && playerIndex <= sequenceIndex) {
    for (int i = 0; i < 4; i++) {
      if (digitalRead(buttonPins[i]) == HIGH) {
