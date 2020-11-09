/*
 * toggle_led.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */



#define F_CPU 1000000UL
#include<avr/io.h>
#include<avr/delay.h>

int main(){

	DDRA|=(1<<PA3);
	DDRC&=~(1<<PC5);

	while(1)
	{
		if(PINC & (1<<PC5))
		{
			PORTA|=(1<<PA3);
			_delay_ms(200);
			PORTA&=~(1<<PA3);
			_delay_ms(200);

		}
		else
			PORTA&=~(1<<PA3);

	}

	return 0;
}
