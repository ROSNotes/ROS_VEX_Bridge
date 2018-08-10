/***************************************************************
   Motor driver function definitions
   *************************************************************/
const short left_motor_front=port1;
const short left_motor_back=port2;
const short right_motor_back=port9;
const short right_motor_front=port10;

void initMotorController(){
	//7-393 8-High 9-Turbo
	motorType[left_motor_front]=9;
	motorType[left_motor_back]=9;
	motorType[right_motor_back]=9;
	motorType[right_motor_front]=9;
}
void setMotorSpeed(int i, int spd){
	if (i == LEFT){
		motor[left_motor_front]=spd;
		motor[left_motor_back]=spd;
	}else{
		motor[right_motor_back]=spd;
		motor[right_motor_front]=spd;
	}
}
void setMotorSpeeds(int leftSpeed, int rightSpeed){
	setMotorSpeed(LEFT, leftSpeed);
	setMotorSpeed(RIGHT, rightSpeed);
}
