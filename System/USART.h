#ifndef __USART_H__
#define __USART_H__

#include <stdio.h>

extern uint16_t Data;

void USART1_Config(void);
void Usart_SendString( USART_TypeDef * pUSARTx, char *str);


#endif
