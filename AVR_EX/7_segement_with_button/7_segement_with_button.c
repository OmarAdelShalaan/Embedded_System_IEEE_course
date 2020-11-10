/*
 * 7_segement_with_button.c
 *
 *  Created on: ???/???/????
 *      Author: Omar Adel Shalaan
 */

#define F_CPU 1000000UL
#include<avr/io.h>
#include<avr/delay.h>

int main(){

	DDRC=0X0F;
	DDRD=0x00;
	PORTC=0x01;
	int arr[10]={0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09};
	int i=0;
	while(1)
	{
          if(PIND&(1<<PD7))
             {
        	  i++;
              _delay_ms(30);
             }
          PORTC=arr[i];
          _delay_ms(250);

          if (i==10)
        	  i=0;

	}

	return 0;
}


