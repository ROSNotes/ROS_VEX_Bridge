#pragma config(UART_Usage, UART1, uartUserControl, baudRate57600, IOPins, None, None)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1){
		sendChar(UART1,'m');
		//sendChar(UART1,'1');
		//sendChar(UART1,'0');
		sendChar(UART1,'1');
		sendChar(UART1,'0');
		sendChar(UART1,'\n');
		sleep(10);
	}
}
