/*
 * 7_segement.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */

#define F_CPU 1000000UL
#include<avr/io.h>
#include<avr/delay.h>

int main(){

	DDRC=0X0F;
	PORTC=0x01;
	int arr[10]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09};
	int i=0;
	while(1)
	{

	   for(i=0;i<10;i++)
		{
		   PORTC=arr[i];
	       _delay_ms(500);
		}

	}

	return 0;
}

