#include "stm32f4xx.h"
#include "clk_user.h"
#include "timer_pwm.h"

int main(void) {
	clk_user();
	TIM2_Init();

	while (1) {
		TIM2->CCR3 = 100;
	}

}

