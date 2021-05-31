#include "MotorControllerLibrary.h"

MotorControllerLib::MotorControllerLib(){
}

void MotorControllerLib::turnRight(int degree, int speed){
    steppermotor.setSpeed(speed);    
    StepsRequired  =  (STEPS_PER_OUT_REV / 360) * degree;
    steppermotor.step(StepsRequired);
}

void MotorControllerLib::turnLeft(int degree, int speed){
    steppermotor.setSpeed(speed);
    StepsRequired  =  - (STEPS_PER_OUT_REV / 360) * degree;
    steppermotor.step(StepsRequired);
}