#include "led.h"
#include "stm32f10x.h"    //顶层头文件
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板V3
//LED驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/1/9
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 

//设置为PE5 PE6
//LED IO初始化
void LED_Init(void)
{ 
	RCC->APB2ENR|=1<<6;     //使能PORTE时钟	
	   
	GPIOE->CRL&=0XFF0FFFFF; //先清除相关位  
	GPIOE->CRL|=0X00300000; //PE.5推挽输出
	GPIOE->ODR|=1<<5;       //PE.5输出高
	
	GPIOE->CRL&=0XF0FFFFFF;  
  GPIOE->CRL|=0X03000000;
	GPIOE->ODR|=1<<6;       //PE.6输出高
//	GPIOE->ODR&=111111111011111;       //PE.6输出低
//	GPIOE->ODR&=0XFFBF;    //输出为低
}







