#include <Arduino.h>
#include <MsTimer2.h>

void analogPWM(){
  static bool up = false;
  digitalWrite(6,up);
  up = !up;
}

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);

  MsTimer2::set(2, analogPWM); // 50ms period
  MsTimer2::start();
}

void loop()
{
}

//Ejercicio libreria MSTimer