/* *************************************************************
   Encoder driver function definitions
   ************************************************************ */

const short left_motor_front=port1;
const short left_motor_back=port2;
const short right_motor_back=port9;
const short right_motor_front=port10;

long readEncoder(int i){
	if (i == LEFT) return getMotorEncoder(left_motor_front);
	else return getMotorEncoder(right_motor_front);
}
void resetEncoder(int i){
	if (i == LEFT) resetMotorEncoder(left_motor_front);
	else resetMotorEncoder(right_motor_front);
}
void resetEncoders(){
	resetEncoder(LEFT);
  resetEncoder(RIGHT);
}
