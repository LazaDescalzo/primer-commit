#include <Servo.h>

Servo cerradura;

int pincerradura =   // falta agregar
int pulsomin = 1000;
int pulsomax = 2000;
int permitido = 1
int huella
void setup(){
  cerradura.attach(PinServo, PulsoMin, PulsoMax)
}

void loop(){
  if(huella = permitido){
    cerradura.write(180);
    delay(5000);
  }
  else{
    cerradura.write(0);
  }
}
