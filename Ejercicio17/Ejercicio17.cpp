#include <Servo.h>

Servo myservo;  // Crea un objeto Servo

void setup() {
  myservo.attach(9);  // Asigna el pin 9 al servo motor
}

void loop() {
  int potX = analogRead(A0);  // Lee el valor del primer potenciómetro en el eje X

  int servoAngle = map(potX, 0, 1023, 0, 180);  // Mapea el valor del potenciómetro al rango de ángulos del servo motor
  myservo.write(servoAngle);  // Mueve el servo motor al ángulo correspondiente

  delay(10);  // Pequeña pausa antes de la siguiente lectura de los potenciómetros
}
