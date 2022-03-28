#include <Arduino.h>

volatile bool up = false;
volatile int times = 0;
void pulsado(){
  digitalWrite(6,up);
  up = !up;
  times++;
  Serial.println(times);
}

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2),pulsado,RISING);
}

void loop()
{
}