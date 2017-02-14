#include "sys.h" 	
#include "delay.h"	
#include "led.h"
//ALIENTEK战舰STM32开发板 实验1
//跑马灯 实验  
//技术支持：www.openedv.com
//广州市星翼电子科技有限公司
int main(void)
{				  
	Stm32_Clock_Init(9);//系统时钟设置
	delay_init(72);	  	//延时初始化
	LED_Init();		  	//初始化与LED连接的硬件接口
	while(1)
	{
			GPIOE->ODR=~(1<<5);       //PE.5输出低
	    GPIOE->ODR=~(1<<6);       //PE.6输出低
		  delay_ms(1000);
			GPIOE->ODR|=(1<<5);       //PE.5输出低
	    GPIOE->ODR|=(1<<6);       //PE.6输出低
		  delay_ms(1000);  
	}	  
}

