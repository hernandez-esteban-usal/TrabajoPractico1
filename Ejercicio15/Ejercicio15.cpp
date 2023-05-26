#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Pines RS, E, D4, D5, D6, D7
unsigned long startTime;

void setup() {
  lcd.begin(16, 2);    // Inicializar la pantalla LCD de 16 columnas y 2 filas
  lcd.print("Reloj Digital");
  startTime = millis(); // Guardar el tiempo actual en milisegundos
}

void loop() {
  unsigned long currentTime = millis() - startTime;  // Obtener el tiempo transcurrido en milisegundos
  
  unsigned long hours = currentTime / 3600000;       // Calcular las horas
  currentTime = currentTime % 3600000;
  unsigned long minutes = currentTime / 60000;       // Calcular los minutos
  currentTime = currentTime % 60000;
  unsigned long seconds = currentTime / 1000;        // Calcular los segundos
  
  lcd.setCursor(0, 1);  // Establecer la posición del cursor en la segunda fila
  lcd.print("Hora: ");
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0");     // Agregar un cero inicial si los minutos son menores a 10
  }
  lcd.print(minutes);
  lcd.print(":");
  if (seconds < 10) {
    lcd.print("0");     // Agregar un cero inicial si los segundos son menores a 10
  }
  lcd.print(seconds);
  
  delay(1000);    // Esperar 1 segundo antes de actualizar la hora
}
