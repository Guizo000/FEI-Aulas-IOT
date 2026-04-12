int vermelho1_pin = 13;
int vermelho2_pin = 12;
int vermelho3_pin = 11;
int amarelo1_pin = 10;
int amarelo2_pin = 9;
int amarelo3_pin = 8;

void setup(){
  pinMode(vermelho1_pin, OUTPUT);
  pinMode(vermelho2_pin, OUTPUT);
  pinMode(vermelho3_pin, OUTPUT);
  pinMode(amarelo1_pin, OUTPUT);
  pinMode(amarelo2_pin, OUTPUT);
  pinMode(amarelo3_pin, OUTPUT);
}

void loop(){
  digitalWrite(vermelho1_pin, HIGH);
  digitalWrite(vermelho2_pin, HIGH);
  digitalWrite(vermelho3_pin, HIGH);
  digitalWrite(amarelo1_pin, LOW);
  digitalWrite(amarelo2_pin, LOW);
  digitalWrite(amarelo3_pin, LOW);
  delay(1000); // Espera 1000 milisegundos

  digitalWrite(amarelo1_pin, HIGH);
  digitalWrite(amarelo2_pin, HIGH);
  digitalWrite(amarelo3_pin, HIGH);
  digitalWrite(vermelho1_pin, LOW);
  digitalWrite(vermelho2_pin, LOW);
  digitalWrite(vermelho3_pin, LOW);
  delay(1000); // Espera 1000 milisegundos
}