#ifndef __SPI2_H
#define __SPI2_H

#include "stm32f10x.h"

#define HIGH	1
#define LOW		0

void SPI2_Init(void);			 //��ʼ��SPI��
void SPI2_SetSpeed(u8 SpeedSet); //����SPI�ٶ�   
u8 SPI2_ReadWriteByte(u8 TxData);//SPI���߶�дһ���ֽ�
#endif
