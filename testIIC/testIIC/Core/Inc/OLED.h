#ifndef _OLED_H_
#define _OLED_H_

#include <stm32f10x.h>
#include <stdint.h>
#include <stdbool.h>

#define OLED_ADDRESS 0x78

#define TIMEOUT 1000

extern bool TimeoutRcon;

bool I2C_WriteByte(uint8_t addr,uint8_t data);
void WriteCmd(unsigned char I2C_Command);
void WriteDat(unsigned char I2C_Data);
void OLED_Init(void);
void OLED_SetPos(unsigned char x, unsigned char y);
void OLED_Fill(unsigned char fill_Data);
void OLED_CLS(void);
void OLED_ON(void);
void OLED_OFF(void);
//void OLED_ShowStr(unsigned char x, unsigned char y, unsigned char ch[], unsigned char TextSize);
//void OLED_ShowCN(unsigned char x, unsigned char y, unsigned char N);
void OLED_DrawBMP(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);
void OLED_IIC_Init(void);
//void OLED_ShowNum(uint8_t x,uint8_t y,uint8_t *ch);
void OLED_ShowbigSizeNum( uint8_t x,
                      uint8_t y,
                      uint8_t * ch );

#endif


