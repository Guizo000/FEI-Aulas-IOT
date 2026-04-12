//Pinos para leds carro
int vermelho_carro = 13;
int amarelo_carro = 12;
int verde_carro = 11;
//Pinos para leds pedestre
int vermelho_pedestre = 7;
int verde_pedestre = 6;
//Pino botão e var para guardar estado do botão
int button1 = 2;
int button1_state = 0;

void setup()
{
  //Setup dos pinos
  pinMode(vermelho_carro, OUTPUT);
  pinMode(amarelo_carro, OUTPUT);
  pinMode(verde_carro, OUTPUT);
  pinMode(vermelho_pedestre, OUTPUT);
  pinMode(verde_pedestre, OUTPUT);
  pinMode(button1, INPUT);
}

void loop()
{
  //Lê estado do botão
  button1_state = digitalRead(button1);
  if(button1_state == HIGH){
    //Caso seja apertado
    
    //Deixa semáforo carro amarelo
    digitalWrite(verde_carro, LOW);
    digitalWrite(amarelo_carro, HIGH);
    delay(2000);
    
    //Deixa semáforo carro vermelho e pedestre verde
    digitalWrite(amarelo_carro, LOW);
    digitalWrite(vermelho_carro, HIGH);
    digitalWrite(vermelho_pedestre, LOW);
    digitalWrite(verde_pedestre, HIGH);
    delay(4000);
    
    //Deixa semáforo pedestre vemelho piscante
    digitalWrite(verde_pedestre, LOW);
    for(int i = 0; i < 5; i++){
      digitalWrite(vermelho_pedestre, HIGH);
      delay(200);
      digitalWrite(vermelho_pedestre, LOW);
      delay(200);
    }
    
    //Deixa semáforo pedestre vermelho definitivo
    digitalWrite(vermelho_pedestre, HIGH);
    delay(1000);
    
    //Deixa semáforo carro verde 
    digitalWrite(vermelho_carro, LOW);
    digitalWrite(verde_carro, HIGH);
    
    //Delay  -> tempo mínimo de semáforo carro verde
    delay(5000);
  }else{
    //Padrão -> semáforo pedestre vermelho e carro verde
    digitalWrite(vermelho_pedestre, HIGH);
    digitalWrite(verde_carro, HIGH);
  }
  
  //Delay para melhor estabilidade da simulação
  delay(10);
}