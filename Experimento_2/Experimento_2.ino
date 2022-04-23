#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop()
{
  int raw = analogRead(A0);
  float vin = raw*500.0/1023.0;
  Serial.print("Temperatura: " + String(vin) + "ºC\t");
  Serial.println(String((vin*1.8)+32) + "ºF");
  delay(1000); // Wait for 1000 millisecond(s)
}

//Ejercicio sobre un sensor de temperatura LM35