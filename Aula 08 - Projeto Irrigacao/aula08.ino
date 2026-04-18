#include <Servo.h>

const int rele = 12;
  
const int phtr = A0;
int phtrRead = 0;
  
const int tempSensor = A1;
int tempRead = 0;
int tempConv = 0;

const int soilSensor = A2;
int soilRead = 0;

const int buzzer = 11;
 
Servo servo;

const int nmos_trans = 5;
  
void setup()
{
  servo.attach(9, 500, 2500);
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
}

void loop()
{
  //969 - min a 49 - max
  phtrRead = analogRead(phtr);
  
  //20 - min = -40 a 358 - max = 125
  tempRead = analogRead(tempSensor);
  tempConv = map(tempRead, 20, 358, -40, 125);
  
  //0 a 876
  soilRead = analogRead(soilSensor);
  
  if(tempConv < 10){
    digitalWrite(rele, HIGH);
  }else{
    digitalWrite(rele, LOW);
  }
  
  if(phtrRead < 969*0.3 && tempConv > 28){
    servo.write(90);
  }else{
    servo.write(0);
  }
  
  if(soilRead < 876 * 0.70){
  	analogWrite(nmos_trans, 127);
  }else{
    analogWrite(nmos_trans, 0);
  }
  
  if(tempConv > 45){
   	tone(buzzer, 392);
  }else{
  	noTone(buzzer);
  }
  
  delay(1000);
}
