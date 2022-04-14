/**************************************************/
/*
		蓝牙调试
		使用串口：USART1
		用手机连接蓝牙，发送数据后，单片机会向手机发送相同的数据，
	同时在显示屏上显示接收到的数据。
		(PS:接收到的数据为字符型，且是单个接收，具体值请对照ASCII码表。)
*/
/**************************************************/

#include "stm32f10x.h"                  // Device header
#include "USART.h"
#include "OLED.h"
#include "Delay.h"

int main(void)
{
	OLED_Init();
	USART1_Config();
	while(1)
	{
//		Usart_SendString(USART1, "Successful!\n");
		printf("Successful!!\n");
		Delay_ms(1500);
		OLED_ShowNum(1, 1, Data, 4);
	}
}
