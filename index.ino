#define BUZZER 8  // pino S do buzzer

void setup() {
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW); // estado inicial
}

void loop() {
  digitalWrite(BUZZER, HIGH); // liga
  delay(500);
  digitalWrite(BUZZER, LOW);  // desliga
  delay(500);
}
