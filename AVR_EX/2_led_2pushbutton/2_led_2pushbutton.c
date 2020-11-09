/*
 * 2_led_2pushbutton.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */



#define F_CPU 1000000UL
#include<avr/io.h>
#include<avr/delay.h>

int main(){

	DDRA=0X09;
	DDRC=0X00;

	while(1)
	{
		if((PINC &(1<<PC0))&&(PINC &(1<<PC5)))
		{
			PORTA|=(1<<PA3);
			PORTA|=(1<<PA0);
		}
		else if(PINC &(1<<PC0))
			PORTA|=(1<<PA0);
		else if(PINC &(1<<PC5))
			PORTA|=(1<<PA3);
		else
			PORTA=0X00;


	}

	return 0;
}
