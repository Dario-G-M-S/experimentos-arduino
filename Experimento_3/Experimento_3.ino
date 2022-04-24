//ALUMNOS:
//Jose Antonio García Ortiz
//Darío González Martínez de Salazar

#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop()
{
  int raw = analogRead(A0);
  float vin = raw*5.0/1023.0;
  Serial.println("Vin: " + String(vin));
  delay(1000); // Wait for 1000 millisecond(s)
}

//Ejercicio 3 sobre divisor de tensión LDR