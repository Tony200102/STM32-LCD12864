#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "lcd.h"
#include "lcd12864.h"
u8 dis1[]="ZС��";
int main()
{

        delay_init(168);
        lcd_GPIO_init();
				Lcd_Init();
        while(1)
        {
					/*ͼƬ��ʾ*/
							//LCD_Display_Picture( );  //������Ҫ�Լ�����ͼƬ��������
							//delay_ms(2000);     //�����ʱ����Ҫ��
					/*������ʾ*/
					    LCD_Display_Words(0,0,"��ʱ���º�ʱ��");
              LCD_Display_Words(1,0,"���ﳤ����δ��");
              LCD_Display_Words(2,0,"��ʹ���Ƿɽ���");
              LCD_Display_Words(3,0,"���̺������ɽ");

        }
}
