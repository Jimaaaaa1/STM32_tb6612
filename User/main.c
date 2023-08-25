#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Motor.h"
#include "Key.h"

uint8_t KeyNum;
int8_t Speed=100;

int main(void)
{
	//OLED_Init();
	Motor1_Init();
	Motor2_Init();
	//Key_Init();
	
	//OLED_ShowString(1, 1, "Speed:");
	
	while (1)
	{
//		KeyNum = Key_GetNum();
//		if (KeyNum == 1)
//		{
//			Speed += 20;
//			if (Speed > 100)
//			{
//				Speed = -100;
//			}
//		}
		Motor1_SetSpeed(10);
		Motor2_SetSpeed(90);
		//OLED_ShowSignedNum(1, 7, Speed, 3);
	}
}
