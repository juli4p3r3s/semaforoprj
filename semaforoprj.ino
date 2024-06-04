// Definição dos pinos dos LEDs
const int ledVerde1 = 23;
const int ledVerde2 = 19;
const int ledAmarelo1 = 22;
const int ledAmarelo2 = 18;
const int ledVermelho1 = 21;
const int ledVermelho2 = 5;

void luzVe() {
digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(5000);
}

void luzA() {
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(2000);
}
void luzVyellow() {
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(5000);
}
void luzVr() {
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVermelho2, LOW);
  delay(5000);
}


void setup() {
  // Configuração dos pinos como saída
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
}

void loop() {
  luzVe();
  luzA();
  luzVr();
}
