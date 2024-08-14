/*
 * SI4703.c
 *
 * Created: 2018-05-29 오후 9:13:44
 * Author : kiki
 */ 

#define F_CPU	8000000UL


#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <string.h>

#include "SI4703.h"
#include "uart.h"

#define PRESET1	89.9
#define PRESET2	105.7
#define PRESET3	95.7
#define PRESET4	97.5
#define PRESET5	101.5

uint8_t rcvCmd = 0;
char msg[150];

int main(void)
{	
	uart_init(9600);	
	
	
	if(!SI4703_Init())
	{
		memset(msg, 0, sizeof(msg));
		sprintf(msg, "SI4703_Init failed.\r\n");
		uart_print (msg);		
		
		while(1)
		{
			
		}
	}
	else
	{
		memset(msg, 0, sizeof(msg));
		sprintf(msg, "SI4703_Init succeeded.\r\n");
		uart_print(msg);	
	}	
	
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

