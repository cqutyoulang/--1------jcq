#include "sys.h" 	
#include "delay.h"	
#include "led.h"
//ALIENTEKս��STM32������ ʵ��1
//����� ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾
int main(void)
{				  
	Stm32_Clock_Init(9);//ϵͳʱ������
	delay_init(72);	  	//��ʱ��ʼ��
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	while(1)
	{
			GPIOE->ODR=~(1<<5);       //PE.5�����
	    GPIOE->ODR=~(1<<6);       //PE.6�����
		  delay_ms(1000);
			GPIOE->ODR|=(1<<5);       //PE.5�����
	    GPIOE->ODR|=(1<<6);       //PE.6�����
		  delay_ms(1000);  
	}	  
}

