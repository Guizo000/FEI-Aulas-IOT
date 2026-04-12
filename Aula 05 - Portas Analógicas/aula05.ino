const int phtr = A1;
int valor_phtr = 0;
const int tmp = A0;
int valor_tmp = 0;
int temperatura = 0;

const int vermelho01 = 13;
const int vermelho02 = 12;
const int amarelo = 11;
const int verde01 = 10;
const int verde02 = 9;
  
void setup()
{
  pinMode(vermelho01, OUTPUT);
  pinMode(vermelho02, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde01, OUTPUT);
  pinMode(verde02, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Retorna valor entre 1022 (luz minima) e 713 (luz maxima)
  valor_phtr = analogRead(phtr);
  valor_tmp = analogRead(tmp); //Retorna valor entre 20 e 358
  temperatura = map(valor_tmp, 0, 358, -40, 120);
  
  if(valor_phtr > 824){
  	if (temperatura < 10 ){
      digitalWrite(verde02, HIGH);
      digitalWrite(verde01, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho02, LOW);
      digitalWrite(vermelho01, LOW);
    }else if (temperatura < 18){
      digitalWrite(verde02, HIGH);
      digitalWrite(verde01, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho02, LOW);
      digitalWrite(vermelho01, LOW);
    }else if (temperatura < 25){
      digitalWrite(verde01, HIGH);
      digitalWrite(verde02, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho02, LOW);
      digitalWrite(vermelho01, LOW);
    }else if (temperatura < 32){
      digitalWrite(verde01, HIGH);
      digitalWrite(verde02, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho02, HIGH);
      digitalWrite(vermelho01, LOW);
    }else{
      digitalWrite(verde01, HIGH);
      digitalWrite(verde02, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho02, HIGH);
      digitalWrite(vermelho01, HIGH);
    } 
  }else{
    digitalWrite(verde01, LOW);
    digitalWrite(verde02, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho01, LOW);
    digitalWrite(vermelho02, LOW);
  }
  
 
  Serial.println(temperatura);
  delay(100);
}