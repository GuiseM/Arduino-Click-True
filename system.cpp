int buzzer = 11;
int ledVerde = 10;
int ledVermelho = 12;
int botao = 9;

int valorBotao = 0;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(botao, INPUT);
}

void pisca() {
  valorBotao = digitalRead(botao);

  if (valorBotao == 1){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);
    tone(buzzer, 1500);
  } else {
    noTone(buzzer);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
  }
}

void loop() {
  pisca();
}
