//Jose Antonio García Ortiz
//Darío González Martínez de Salazar

#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  int luz = analogRead(A0);
  Serial.println(luz);
  //Programación del ciclo de histéresis
  if (luz < 500){
    digitalWrite(7,HIGH);
  }
  else if (luz > 600){
    digitalWrite(7,LOW);
  }
  delay(1000);
}

//Ejercicio sobre farola de encendido automático