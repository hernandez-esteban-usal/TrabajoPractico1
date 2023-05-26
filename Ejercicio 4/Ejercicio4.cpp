#include <Adafruit_LiquidCrystal.h> // Incluimos la librería de la pantalla LCD
#include <math.h>

const int tempPin = A0; // Pin de lectura del sensor de temperatura
const int lcd_rs = 12, lcd_en = 11, lcd_d4 = 5, lcd_d5 = 4, lcd_d6 = 3, lcd_d7 = 2; // Pines de la pantalla LCD
Adafruit_LiquidCrystal lcd(lcd_rs, lcd_en, lcd_d4, lcd_d5, lcd_d6, lcd_d7); // Creamos el objeto lcd de la librería Adafruit_LiquidCrystal

float temp; // Variable para guardar la temperatura
int sensorValue; // Variable para leer la entrada del sensor de temperatura
float voltage; // Variable para almacenar el valor de voltaje medido
float celsius; // Variable para almacenar la temperatura en Celsius

void setup() {
  lcd.begin(16, 2); // Inicializamos la pantalla LCD con 16 columnas y 2 filas
}

void loop() {
  sensorValue = analogRead(tempPin); // Leemos el valor del sensor de temperatura
  voltage = sensorValue * 5.0 / 1024.0; // Convertimos el valor a voltaje
  celsius = (voltage - 0.5) * 100; // Convertimos el valor de voltaje a grados Celsius
  lcd.clear(); // Limpiamos la pantalla LCD
  lcd.setCursor(0, 0); // Colocamos el cursor en la primera columna de la primera fila
  lcd.print("Temp: "); // Imprimimos "Temp: " en la pantalla LCD
  lcd.print(celsius); // Imprimimos la temperatura en Celsius en la pantalla LCD
  lcd.print(" C"); // Imprimimos el símbolo de grados Celsius en la pantalla LCD
  delay(2000); // Esperamos 2 segundos
}