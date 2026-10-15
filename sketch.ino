const int PINO_LED = 8;   // LED com resistor de 220 Ω em série

const unsigned long TEMPO_ACESO   = 200;
const unsigned long TEMPO_APAGADO = 1800;

void setup() {
  pinMode(PINO_LED, OUTPUT);   
}

void loop() {                  
  digitalWrite(PINO_LED, HIGH);
  delay(TEMPO_ACESO);
  digitalWrite(PINO_LED, LOW);
  delay(TEMPO_APAGADO);
}