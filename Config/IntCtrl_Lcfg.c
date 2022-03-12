/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**     \file  IntCtrl_Lcfg.c
 *      \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../Common/Std_Types.h"
#include "../Mcal/IntCtrl_Types.h"
#include "IntCtrl_Cfg.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

IntCtrl_Interrupt_Level_1 Interrupts_Configs_Level_1[] = {
	
        {GPIO_PORTA  				        , STD_OFF , GROUP_0},
	{GPIO_PORTB 	 			        , STD_OFF , GROUP_0},
	{GPIO_PORTC  				        , STD_OFF , GROUP_0}, 
	{GPIO_PORTD  				        , STD_OFF , GROUP_0},
	{GPIO_PORTE  				        , STD_OFF , GROUP_0},
	{UART0       				        , STD_OFF , GROUP_0},
	{UART1       				        , STD_OFF , GROUP_0},
	{SSI0        				        , STD_OFF , GROUP_0},
	{I2C0        				        , STD_OFF , GROUP_0}, 
	{PWM0_FAULT  				        , STD_OFF , GROUP_0},
	{PWM0_GENERATOR_0			        , STD_OFF , GROUP_0},
	{PWM0_GENERATOR_1			        , STD_OFF , GROUP_0},
	{PWM0_GENERATOR_2			        , STD_OFF , GROUP_0},
	{QEI0						, STD_OFF , GROUP_0},
	{ADC0_SEQUENCE_0			        , STD_OFF , GROUP_0},
	{ADC0_SEQUENCE_1			        , STD_OFF , GROUP_0},
	{ADC0_SEQUENCE_2			        , STD_OFF , GROUP_0},
	{ADC0_SEQUENCE_3			        , STD_OFF , GROUP_0},
	{WATCHDOG_TIMER_0_TIMER_1	                , STD_OFF , GROUP_0},
	{TIMER0A_16_32					, STD_OFF , GROUP_0},
	{TIMER0B_16_32					, STD_OFF , GROUP_0},
	{TIMER1A_16_32					, STD_OFF , GROUP_0},
	{TIMER1B_16_32					, STD_OFF , GROUP_0},
	{TIMER2A_16_32					, STD_OFF , GROUP_0},
	{TIMER2B_16_32					, STD_OFF , GROUP_0},
	{ANALOG_COMPARATOR_0		                , STD_OFF , GROUP_0},
	{ANALOG_COMPARATOR_1		                , STD_OFF , GROUP_0},
	{SYSTEM_CONTROL 			        , STD_OFF , GROUP_0},
	{FALSH_EEPROM_CONTROL		                , STD_OFF , GROUP_0},
	{GPIO_PORTF					, STD_OFF , GROUP_0},
	{UART2 						, STD_OFF , GROUP_0},
	{SSI1						, STD_OFF , GROUP_0},
	{TIMER3A_16_32					, STD_OFF , GROUP_0},
	{TIMER3B_16_32					, STD_OFF , GROUP_0},
	{I2C1						, STD_OFF , GROUP_0},
	{QEI1						, STD_OFF , GROUP_0},
	{CAN0						, STD_OFF , GROUP_0},
	{CAN1						, STD_OFF , GROUP_0},
	{HIBERNATION 				        , STD_OFF , GROUP_0},
	{USB						, STD_OFF , GROUP_0},
	{PWM0_GENERATOR_3			        , STD_OFF , GROUP_0},
	{DMA_SW						, STD_OFF , GROUP_0},
	{DMA_ERROR					, STD_OFF , GROUP_0},
	{ADC1_SEQUENCE_0			        , STD_OFF , GROUP_0},
	{ADC1_SEQUENCE_1			        , STD_OFF , GROUP_0},
	{ADC1_SEQUENCE_2			        , STD_OFF , GROUP_0},
	{ADC1_SEQUENCE_3			        , STD_OFF , GROUP_0},
	{SSI2 						, STD_OFF , GROUP_0},
	{SSI3						, STD_OFF , GROUP_0},
	{UART3						, STD_OFF , GROUP_0},
	{UART4						, STD_OFF , GROUP_0},
	{UART5						, STD_OFF , GROUP_0},
	{UART6						, STD_OFF , GROUP_0},
	{UART7						, STD_OFF , GROUP_0},
	{I2C2 						, STD_OFF , GROUP_0},
	{I2C3						, STD_OFF , GROUP_0},
	{TIMER4A_16_32					, STD_OFF , GROUP_0},
	{TIMER4B_16_32					, STD_OFF , GROUP_0},
	{TIMER5A_16_32					, STD_OFF , GROUP_0},
	{TIMER5B_16_32					, STD_OFF , GROUP_0},
	{TIMER0A_32_64					, STD_OFF , GROUP_0},
	{TIMER0B_32_64					, STD_OFF , GROUP_0},
	{TIMER1A_32_64					, STD_OFF , GROUP_0},
	{TIMER1B_32_64					, STD_OFF , GROUP_0},
	{TIMER2A_32_64					, STD_OFF , GROUP_0},
	{TIMER2B_32_64					, STD_OFF , GROUP_0},
	{TIMER3A_32_64					, STD_OFF , GROUP_0},
	{TIMER3B_32_64					, STD_OFF , GROUP_0},
	{TIMER4A_32_64					, STD_OFF , GROUP_0},
	{TIMER4B_32_64					, STD_OFF , GROUP_0},
	{TIMER5A_32_64					, STD_OFF , GROUP_0},
	{TIMER5B_32_64					, STD_OFF , GROUP_0},
	{SYSTEM_EXCEPTION			        , STD_OFF , GROUP_0},
	{PWM1_GENERATOR_0			        , STD_OFF , GROUP_0},
	{PWM1_GENERATOR_1			        , STD_OFF , GROUP_0},
	{PWM1_GENERATOR_2			        , STD_OFF , GROUP_0},
	{PWM1_GENERATOR_3			        , STD_OFF , GROUP_0},
	{PWM1_FAULT				        , STD_OFF , GROUP_0}
};

IntCtrl_Interrupt_Level_2 Interrupts_Configs_Level_2[] = {
	
        {GPIO_PORTA  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTB 	 			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTC  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}}, 
	{GPIO_PORTD  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTE  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART0       				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART1       				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI0        				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C0        				        , STD_OFF , {GROUP_0,SUB_GROUP_0}}, 
	{PWM0_FAULT  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{QEI0						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{WATCHDOG_TIMER_0_TIMER_1	                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ANALOG_COMPARATOR_0		                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ANALOG_COMPARATOR_1		                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SYSTEM_CONTROL 			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{FALSH_EEPROM_CONTROL		                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTF					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART2 						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{QEI1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{CAN0						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{CAN1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{HIBERNATION 				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{USB						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{DMA_SW						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{DMA_ERROR					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI2 						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI3						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART3						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART4						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART5						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART6						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART7						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C2 						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C3						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SYSTEM_EXCEPTION			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_FAULT				        , STD_OFF , {GROUP_0,SUB_GROUP_0}}
};

IntCtrl_Interrupt_Level_3 Interrupts_Configs_Level_3[] = {
	
        {GPIO_PORTA  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTB 	 			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTC  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}}, 
	{GPIO_PORTD  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTE  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART0       				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART1       				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI0        				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C0        				        , STD_OFF , {GROUP_0,SUB_GROUP_0}}, 
	{PWM0_FAULT  				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{QEI0						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC0_SEQUENCE_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{WATCHDOG_TIMER_0_TIMER_1	                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ANALOG_COMPARATOR_0		                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ANALOG_COMPARATOR_1		                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SYSTEM_CONTROL 			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{FALSH_EEPROM_CONTROL		                , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{GPIO_PORTF					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART2 						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{QEI1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{CAN0						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{CAN1						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{HIBERNATION 				        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{USB						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM0_GENERATOR_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{DMA_SW						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{DMA_ERROR					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{ADC1_SEQUENCE_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI2 						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SSI3						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART3						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART4						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART5						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART6						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{UART7						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C2 						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{I2C3						, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5A_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5B_16_32					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER0B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER1B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER2B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER3B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER4B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5A_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{TIMER5B_32_64					, STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{SYSTEM_EXCEPTION			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_0			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_1			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_2			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_GENERATOR_3			        , STD_OFF , {GROUP_0,SUB_GROUP_0}},
	{PWM1_FAULT				        , STD_OFF , {GROUP_0,SUB_GROUP_0}}
};

IntCtrl_Interrupt_Level_4 Interrupts_Configs_Level_4[] = {
	
        {GPIO_PORTA  				        , STD_OFF , SUB_GROUP_0},
	{GPIO_PORTB 	 			        , STD_OFF , SUB_GROUP_0},
	{GPIO_PORTC  				        , STD_OFF , SUB_GROUP_0}, 
	{GPIO_PORTD  				        , STD_OFF , SUB_GROUP_0},
	{GPIO_PORTE  				        , STD_OFF , SUB_GROUP_0},
	{UART0       				        , STD_OFF , SUB_GROUP_0},
	{UART1       				        , STD_OFF , SUB_GROUP_0},
	{SSI0        				        , STD_OFF , SUB_GROUP_0},
	{I2C0        				        , STD_OFF , SUB_GROUP_0}, 
	{PWM0_FAULT  				        , STD_OFF , SUB_GROUP_0},
	{PWM0_GENERATOR_0			        , STD_OFF , SUB_GROUP_0},
	{PWM0_GENERATOR_1			        , STD_OFF , SUB_GROUP_0},
	{PWM0_GENERATOR_2			        , STD_OFF , SUB_GROUP_0},
	{QEI0						, STD_OFF , SUB_GROUP_0},
	{ADC0_SEQUENCE_0			        , STD_OFF , SUB_GROUP_0},
	{ADC0_SEQUENCE_1			        , STD_OFF , SUB_GROUP_0},
	{ADC0_SEQUENCE_2			        , STD_OFF , SUB_GROUP_0},
	{ADC0_SEQUENCE_3			        , STD_OFF , SUB_GROUP_0},
	{WATCHDOG_TIMER_0_TIMER_1	                , STD_OFF , SUB_GROUP_0},
	{TIMER0A_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER0B_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER1A_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER1B_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER2A_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER2B_16_32					, STD_OFF , SUB_GROUP_0},
	{ANALOG_COMPARATOR_0		                , STD_OFF , SUB_GROUP_0},
	{ANALOG_COMPARATOR_1		                , STD_OFF , SUB_GROUP_0},
	{SYSTEM_CONTROL 			        , STD_OFF , SUB_GROUP_0},
	{FALSH_EEPROM_CONTROL		                , STD_OFF , SUB_GROUP_0},
	{GPIO_PORTF					, STD_OFF , SUB_GROUP_0},
	{UART2 						, STD_OFF , SUB_GROUP_0},
	{SSI1						, STD_OFF , SUB_GROUP_0},
	{TIMER3A_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER3B_16_32					, STD_OFF , SUB_GROUP_0},
	{I2C1						, STD_OFF , SUB_GROUP_0},
	{QEI1						, STD_OFF , SUB_GROUP_0},
	{CAN0						, STD_OFF , SUB_GROUP_0},
	{CAN1						, STD_OFF , SUB_GROUP_0},
	{HIBERNATION 				        , STD_OFF , SUB_GROUP_0},
	{USB						, STD_OFF , SUB_GROUP_0},
	{PWM0_GENERATOR_3			        , STD_OFF , SUB_GROUP_0},
	{DMA_SW						, STD_OFF , SUB_GROUP_0},
	{DMA_ERROR					, STD_OFF , SUB_GROUP_0},
	{ADC1_SEQUENCE_0			        , STD_OFF , SUB_GROUP_0},
	{ADC1_SEQUENCE_1			        , STD_OFF , SUB_GROUP_0},
	{ADC1_SEQUENCE_2			        , STD_OFF , SUB_GROUP_0},
	{ADC1_SEQUENCE_3			        , STD_OFF , SUB_GROUP_0},
	{SSI2 						, STD_OFF , SUB_GROUP_0},
	{SSI3						, STD_OFF , SUB_GROUP_0},
	{UART3						, STD_OFF , SUB_GROUP_0},
	{UART4						, STD_OFF , SUB_GROUP_0},
	{UART5						, STD_OFF , SUB_GROUP_0},
	{UART6						, STD_OFF , SUB_GROUP_0},
	{UART7						, STD_OFF , SUB_GROUP_0},
	{I2C2 						, STD_OFF , SUB_GROUP_0},
	{I2C3						, STD_OFF , SUB_GROUP_0},
	{TIMER4A_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER4B_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER5A_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER5B_16_32					, STD_OFF , SUB_GROUP_0},
	{TIMER0A_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER0B_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER1A_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER1B_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER2A_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER2B_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER3A_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER3B_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER4A_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER4B_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER5A_32_64					, STD_OFF , SUB_GROUP_0},
	{TIMER5B_32_64					, STD_OFF , SUB_GROUP_0},
	{SYSTEM_EXCEPTION			        , STD_OFF , SUB_GROUP_0},
	{PWM1_GENERATOR_0			        , STD_OFF , SUB_GROUP_0},
	{PWM1_GENERATOR_1			        , STD_OFF , SUB_GROUP_0},
	{PWM1_GENERATOR_2			        , STD_OFF , SUB_GROUP_0},
	{PWM1_GENERATOR_3			        , STD_OFF , SUB_GROUP_0},
	{PWM1_FAULT				        , STD_OFF , SUB_GROUP_0}
};


/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Lcfg.c
 *********************************************************************************************************************/