#include <Servo.h>

Servo motorizq;
Servo motorder;

int trig = 11;
int echo = 12;

void setup() {
  Serial.begin(9600);
  motorizq.attach(9); // Conectar el servo al pin 9
  motorder.attach(10); // Conectar el servo al pin 10
  pinMode(trig, OUTPUT); // Configurar el pin del trig como salida
  pinMode(echo, INPUT); // Configurar el pin del echo como entrada
}

void loop() {
  long duration, distance;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print(distance);
  Serial.println(" cm");
  if (distance < 20) {
    motorizq.write(0); // Girar hacia la derecha
    motorder.write(180);
  }
  else {
    motorizq.write(90); // Mover hacia adelante
    motorder.write(90);
  }
}