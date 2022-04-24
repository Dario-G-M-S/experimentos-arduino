//Jose Antonio García Ortiz
//Darío González Martínez de Salazar

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

=======
}

//El loop queda vacío, ya que las tareas las ejecuta el timer utilizado.

