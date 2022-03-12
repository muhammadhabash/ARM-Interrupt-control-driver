/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCrtl.h
 *       Module:  IntCrtl
 *
 *  Description:  header file for IntCrtl Module    
 *  
 *********************************************************************************************************************/
#ifndef IntCrtl_H
#define IntCrtl_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../Common/Std_Types.h"
#include "../Config/IntCtrl_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define EN0_OFFSET          	  (0x100)  //EN0 Register offset
#define PRI0_OFFSET         	  (0x400)  //PRI0 Register offset 
#define EN_OFFSET_FACTOR     	  (4U)     //The offset between each two ENx registers
#define PRI_OFFSET_FACTOR   	  (4U)     //The offset between each two PRIx registers
#define INTERRUPTS_PER_REG  	  (4U)     //Number of interrupts priority fields per register
#define PRI_SHIFTING_FACTOR 	  (0x11)   //Factor to calculate priority field shift
#define EIGHT_GROUPS_ONE_SUBGROUP (0x4)   
#define FOUR_GROUPS_TWO_SUBGROUPS (0x5)
#define TWO_GROUPS_FOUR_SUBGROUPS (0x6)
#define ONE_GROUP_EIGHT_SUBGROUPS (0x7)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define EN_OFFSET(InterruptID)   (EN0_OFFSET + ((uint8)InterruptID/WORD_LENGTH_BITS) * EN_OFFSET_FACTOR)
#define EN_SHIFT(InterruptID)    ((uint8)InterruptID - (((uint8)InterruptID/WORD_LENGTH_BITS) * WORD_LENGTH_BITS))
#define PRI_OFFSET(InterruptID)  (PRI0_OFFSET + (((uint8)InterruptID/INTERRUPTS_PER_REG) * PRI_OFFSET_FACTOR))
#define PRI_SHIFT(InterruptID)   ((((uint8)InterruptID & PRI_SHIFTING_FACTOR) * 8) + 5)
#define EN_ADDRESS(InterruptID)  (CORTEXM4_PERI_BASE_ADDRESS + EN_OFFSET(InterruptID))
#define PRI_ADDRESS(InterruptID) (CORTEXM4_PERI_BASE_ADDRESS + PRI_OFFSET(InterruptID))
   
#define NVIC_CONTROL_MODE(Address, Mode) (*((volatile uint32*)Address) |= (Mode << EN_SHIFT(InterruptID)))
#define NVIC_SET_PRI(Address, INTX)      (*((volatile uint32*)Address) |= (INTX << PRI_SHIFT(InterruptID))) 


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
 
/******************************************************************************
* \Syntax          : void IntCrtl_Init(void)                                      
* \Description     : initialize Nvic\SCB Module by parsing the Configuration 
*                    into Nvic\SCB registers                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void IntCrtl_Init(void);
 
#endif  /* IntCrtl_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.h
 *********************************************************************************************************************/
