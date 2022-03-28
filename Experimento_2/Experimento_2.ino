#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop()
{
  int raw = analogRead(A0);
  Serial.println("Temperatura: " + String(raw*500.0/1023.0) + "ยบC");
  delay(1000); // Wait for 1000 millisecond(s)
}
