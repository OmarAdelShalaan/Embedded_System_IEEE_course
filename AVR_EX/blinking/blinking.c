/*
 * blinking.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */

#define F_CPU 1000000UL
#include<avr/io.h>
#include<avr/delay.h>

int main(){

	DDRA=0x01;
	while(1)
	{
		PORTA=0x01;
		_delay_ms(500);
		PORTA=0x00;
		_delay_ms(500);

	}

	return 0;
}

