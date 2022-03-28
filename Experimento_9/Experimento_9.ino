#include <Arduino.h> 

const int ruleta[12] = {14,3,4,5,15,7,8,9,10,11,12,13};

int aciertos = 0;
int led = 0;

void ISR_ruleta(){

}

void setup() {
  Serial.begin(9600);
  for (size_t i = 0; i < 12; i++)
  {
    pinMode(ruleta[i],OUTPUT);
    digitalWrite(ruleta[i],LOW);
  }
  pinMode(2,INPUT);
  attachInterrupt(2,ISR_ruleta,RISING);
  delay(1000);
}

void loop() {
  static unsigned long lastime = 0;
  if (millis() - lastime >= (500-aciertos*50)){
    if (led == 0){
      digitalWrite(ruleta[12-1],LOW);
    }
    else
      digitalWrite(ruleta[led-1],LOW);
    digitalWrite(ruleta[led],HIGH);
        
    led++;
    if (led == 12) led = 0;
    lastime = millis();
  }
  if(digitalRead(2) == HIGH){
   	if (led == 1){
    	aciertos++;
 	}
  	else{
    	aciertos--;
  	}
    if (aciertos < 0) aciertos = 0;
    else if (aciertos > 9) {
      digitalWrite(6,HIGH);
      Serial.println("You are WINNER!");
      delay(1000);
      digitalWrite(6,LOW);
      aciertos = 0;
    }
    Serial.println(aciertos);
    delay(1000);
  }
}