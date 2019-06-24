/*
 * Author: Eric Ciurana
 * Purpose: Refresh some knowledge and do some microcontroller programming using an Arduino UNO
 * Language: C
 * Creation date: 24/06/2019 (DD/MM/YYYY)
 */

/*
 *	Registers
 */
volatile unsigned char * const DDRB = (unsigned char*)0x0024;
volatile unsigned char * const PORTB = (unsigned char*)0x0025;

/*
 * Global variables
 */
unsigned long int i = 0;

int main(){

	//Enables pin PB5 (pin13 onboard) as OUTPUT
	*DDRB = 0b00100000;
	for(;;){
		//Sets LED ON
		*PORTB = 0b00100000;
		//Delay 500k cycles, which is about 1 second
		for(i=0;i<500000;i++);
		//Sets LED OFF
		*PORTB = 0b00000000;
		//Delay 500k cycles, which is about 1 second
		for(i=0;i<500000;i++);
	}	
	return 0;
}
