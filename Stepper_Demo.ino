#include<Stepper.h>
const int StepsPerRevolution=2048 ; 
Stepper S1 = Stepper(StepsPerRevolution,8,10,9,11) ; 
void setup() {
  // put your setup code here, to run once:
  S1.setSpeed(15) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  S1.step(StepsPerRevolution);
}
