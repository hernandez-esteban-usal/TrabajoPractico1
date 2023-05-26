#include <Servo.h>

Servo myservo;  // crea un objeto servo
int pinTeclado1 = 2;  // pin digital del teclado
int pinTeclado2 = 3;
int pinTeclado3 = 4;
int pinTeclado4 = 5;
int pinTeclado5 = 6;
int pinTeclado6 = 7;
int pinTeclado7 = 8;
int pinTeclado8 = 9;
int posInicial = 0;  // posición inicial del servo
int posAbierto = 90;  // posición del servo cuando se abre la puerta
int posCerrado = 0;  // posición del servo cuando se cierra la puerta
int codigoCorrecto[] = {1, 2, 3, 4};  // código de acceso
int codigoIngresado[4];  // código ingresado por el usuario
int indice = 0;  // índice para el código ingresado
bool accesoPermitido = false;  // variable para permitir o denegar el acceso

void setup()
{
  Serial.begin(9600);
  myservo.attach(10);  // conecta el servo al pin digital 10
  myservo.write(posInicial);  // mueve el servo a la posición inicial
  pinMode(pinTeclado1, INPUT);
  pinMode(pinTeclado2, INPUT);
  pinMode(pinTeclado3, INPUT);
  pinMode(pinTeclado4, INPUT);
  pinMode(pinTeclado5, INPUT);
  pinMode(pinTeclado6, INPUT);
  pinMode(pinTeclado7, INPUT);
  pinMode(pinTeclado8, INPUT);
}

void loop()
{
  // espera a que se ingrese un código
  while (indice < 4)
  {
    if (digitalRead(pinTeclado1) == HIGH)
    {
      codigoIngresado[indice] = 1;
      indice++;
      delay(250);
    }
    if (digitalRead(pinTeclado2) == HIGH)
    {
      codigoIngresado
    }