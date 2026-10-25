#include <asf.h>

int main(void)
{
	board_init();

	while (true) 
	{
		bool button_state = ioport_get_pin_level(GPIO_PUSH_BUTTON_0);

		if (button_state) 
		{
			LED_On(LED0);
		} 
		else 
		{
			LED_Off(LED0);
		}
	}
}