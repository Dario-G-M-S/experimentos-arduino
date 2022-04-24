//Jose Antonio García Ortiz
//Darío González Martínez de Salazar

#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  digitalWrite(6,digitalRead(2));
}

//Ejercicio sobre pulsador mecanico