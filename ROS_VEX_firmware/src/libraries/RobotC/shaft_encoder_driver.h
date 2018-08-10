/* *************************************************************
   Encoder driver function definitions
   ************************************************************ */

const short left_encoder=dgtl7;
const short right_encoder=dgtl9;

long readEncoder(int i){
//	if (i == LEFT) return SensorValue[left_encoder];
//	else return SensorValue[right_encoder];
	return 100;
}
void resetEncoder(int i){
	if (i == LEFT) SensorValue[left_encoder]=0;
	else SensorValue[right_encoder]=0;
}
void resetEncoders(){
	resetEncoder(LEFT);
  resetEncoder(RIGHT);
}
