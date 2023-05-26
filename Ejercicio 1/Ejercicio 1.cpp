int pot = A0;
int led = 9;
int val;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  val = analogRead(pot);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(led, val);
}