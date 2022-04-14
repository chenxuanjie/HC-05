/**************************************************/
/*
		��������
		ʹ�ô��ڣ�USART1
		���ֻ������������������ݺ󣬵�Ƭ�������ֻ�������ͬ�����ݣ�
	ͬʱ����ʾ������ʾ���յ������ݡ�
		(PS:���յ�������Ϊ�ַ��ͣ����ǵ������գ�����ֵ�����ASCII���)
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
