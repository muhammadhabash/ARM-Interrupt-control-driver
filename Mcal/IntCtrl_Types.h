/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl_Types.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_TYPES_H
#define INTCTRL_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../Common/Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	GPIO_PORTA,
	GPIO_PORTB,
	GPIO_PORTC,
	GPIO_PORTD,
	GPIO_PORTE,
	UART0,
	UART1,
	SSI0,
	I2C0,
	PWM0_FAULT,
	PWM0_GENERATOR_0,
	PWM0_GENERATOR_1,
	PWM0_GENERATOR_2,
	QEI0,
	ADC0_SEQUENCE_0,
	ADC0_SEQUENCE_1,
	ADC0_SEQUENCE_2,
	ADC0_SEQUENCE_3,
	WATCHDOG_TIMER_0_TIMER_1,
	TIMER0A_16_32,
	TIMER0B_16_32,
	TIMER1A_16_32,
	TIMER1B_16_32,
	TIMER2A_16_32,
	TIMER2B_16_32,
	ANALOG_COMPARATOR_0,
	ANALOG_COMPARATOR_1,
	SYSTEM_CONTROL = 28,
	FALSH_EEPROM_CONTROL,
	GPIO_PORTF,
	UART2 = 33,
	SSI1,
	TIMER3A_16_32,
	TIMER3B_16_32,
	I2C1,
	QEI1,
	CAN0,
	CAN1,
	HIBERNATION = 43,
	USB,
	PWM0_GENERATOR_3,
	DMA_SW,
	DMA_ERROR,
	ADC1_SEQUENCE_0,
	ADC1_SEQUENCE_1,
	ADC1_SEQUENCE_2,
	ADC1_SEQUENCE_3,
	SSI2 = 57,
	SSI3,
	UART3,
	UART4,
	UART5,
	UART6,
	UART7,
	I2C2 = 68,
	I2C3,
	TIMER4A_16_32,
	TIMER4B_16_32,
	TIMER5A_16_32 = 92,
	TIMER5B_16_32,
	TIMER0A_32_64,
	TIMER0B_32_64,
	TIMER1A_32_64,
	TIMER1B_32_64,
	TIMER2A_32_64,
	TIMER2B_32_64,
	TIMER3A_32_64,
	TIMER3B_32_64,
	TIMER4A_32_64,
	TIMER4B_32_64,
	TIMER5A_32_64,
	TIMER5B_32_64,
	SYSTEM_EXCEPTION,
	PWM1_GENERATOR_0 = 134,
	PWM1_GENERATOR_1,
	PWM1_GENERATOR_2,
	PWM1_GENERATOR_3,
	PWM1_FAULT	
}IntCtrl_InterruptType;

 
#endif  /* INTCTRL_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Types.h
 *********************************************************************************************************************/
