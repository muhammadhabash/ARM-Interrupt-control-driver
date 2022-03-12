/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  IntCrtl.c
 *        \brief  Nested Vector Interrupt Controller Driver
 *
 *      \details  The Driver Configure All MCU interrupts Priority into gorups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../Common/Std_Types.h"
#include "IntCtrl.h"
#include "../Common/Mcu_Hw.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/	

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
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
void IntCrtl_Init(void)
{
       volatile APINT_Tag APINT_cfg;
       /*Configure Grouping\SubGrouping System in APINT register in SCB*/
       APINT_cfg.Field.PRIGROUP = EIGHT_GROUPS_ONE_SUBGROUP;
       APINT = APINT_cfg.Register;
       
       uint8  InterruptIndex;
       uint8  InterruptID;
       uint8  InterruptMode;
       uint8  InterruptPriority;
       uint32 EN_Address;
       uint32 PRI_Address;
       L
       /*Assign Group\Subgroup priority in NVIC_PRIx Nvic and SCB_SYSPRIx Registers*/  
       switch(APINT_cfg.Field.PRIGROUP)
       {
          case EIGHT_GROUPS_ONE_SUBGROUP:
           
            for (InterruptIndex = 0; InterruptIndex < NVIC_ELEMENTS ; InterruptIndex++)
            {
              InterruptID = Interrupts_Configs_Level_1[InterruptIndex].InterruptID;
              EN_Address  = EN_ADDRESS(InterruptID);
              PRI_Address = PRI_ADDRESS(InterruptID);
              InterruptMode     = Interrupts_Configs_Level_1[InterruptIndex].InterruptMode;
              InterruptPriority = Interrupts_Configs_Level_1[InterruptIndex].InterruptPriority.Group;
              NVIC_CONTROL_MODE(EN_Address, InterruptMode);
              NVIC_SET_PRI(PRI_Address, InterruptPriority);
            }
          break;
          
          case FOUR_GROUPS_TWO_SUBGROUPS:
            
            for (InterruptIndex = 0; InterruptIndex < NVIC_ELEMENTS ; InterruptIndex++)
            {
              InterruptID   = Interrupts_Configs_Level_2[InterruptIndex].InterruptID;
              InterruptMode = Interrupts_Configs_Level_2[InterruptIndex].InterruptMode;
              EN_Address    = EN_ADDRESS(InterruptID);
              PRI_Address   = PRI_ADDRESS(InterruptID);
              NVIC_CONTROL_MODE(EN_Address, InterruptMode);
              NVIC_SET_PRI(PRI_Address,InterruptPriority);
            }
          break;
          
          case TWO_GROUPS_FOUR_SUBGROUPS:
            
            for (InterruptIndex = 0; InterruptIndex < NVIC_ELEMENTS ; InterruptIndex++)
            {
              NVIC_CONTROL_MODE(Interrupts_Configs_Level_3[InterruptIndex].InterruptID,Interrupts_Configs_Level_3[InterruptIndex].InterruptMode);
              NVIC_SET_PRI(Interrupts_Configs_Level_3[InterruptIndex].InterruptID,Interrupts_Configs_Level_3[InterruptIndex].InterruptPriority);
            }
          break;
          
          case ONE_GROUP_EIGHT_SUBGROUPS:
            
            for (InterruptIndex = 0; InterruptIndex < NVIC_ELEMENTS ; InterruptIndex++)
            {
              NVIC_CONTROL_MODE(Interrupts_Configs_Level_4[InterruptIndex].InterruptID,Interrupts_Configs_Level_4[InterruptIndex].InterruptMode);
              NVIC_SET_PRI(Interrupts_Configs_Level_4[InterruptIndex].InterruptID,Interrupts_Configs_Level_4[InterruptIndex].InterruptPriority);
            }
          break;

       }
       /*Enable\Disable based on user configurations in NVIC_ENx and SCB_Sys Registers */

}

/**********************************************************************************************************************
 *  END OF FILE: IntCrtl.c
 *********************************************************************************************************************/
