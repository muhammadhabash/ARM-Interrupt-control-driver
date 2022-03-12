/**********************************************************************************************************************
   
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *       File:  IntCtrl_Cfg.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_CFG_H
#define INTCTRL_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "../Mcal/IntCtrl_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define NVIC_ELEMENTS             (78)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum
{
  GROUP_0,
  GROUP_1,
  GROUP_2,
  GROUP_3,
  GROUP_4,
  GROUP_5,
  GROUP_6,
  GROUP_7
}IntCtrl_InterruptGroup;

typedef enum
{
  SUB_GROUP_0,
  SUB_GROUP_1,
  SUB_GROUP_2,
  SUB_GROUP_3,
  SUB_GROUP_4,
  SUB_GROUP_5,
  SUB_GROUP_6,
  SUB_GROUP_7
}IntCtrl_InterruptSubGroup;

typedef struct
{
  uint8 Group    : 3;
  uint8          : 5;
}IntCtrl_PriorityGrouping_1;

typedef struct
{
  uint8 SubGroup : 1;
  uint8 Group    : 2;
  uint8          : 5;
}IntCtrl_PriorityGrouping_2;

typedef struct
{
  uint8 SubGroup : 2;
  uint8 Group    : 1;
  uint8          : 5;
}IntCtrl_PriorityGrouping_3;

typedef struct
{
  uint8 SubGroup : 3;
  uint8          : 5;
}IntCtrl_PriorityGrouping_4;

typedef union
{
  uint8 INTX;
  IntCtrl_PriorityGrouping_1 Field;
}Level_1_Tag;

typedef union
{
  uint8 INTX;
  IntCtrl_PriorityGrouping_2 Field;
}Level_2_Tag;

typedef union
{
  uint8 INTX;
  IntCtrl_PriorityGrouping_3 Field;
}Level_3_Tag;

typedef union
{
  uint8 INTX;
  IntCtrl_PriorityGrouping_4 Field;
}Level_4_Tag;

typedef const struct
{
  IntCtrl_InterruptType      InterruptID;
  uint8                      InterruptMode;
  IntCtrl_PriorityGrouping_1 InterruptPriority;
}IntCtrl_Interrupt_Level_1;

typedef const struct
{
  IntCtrl_InterruptType      InterruptID;
  uint8                      InterruptMode;
  IntCtrl_PriorityGrouping_2 InterruptPriority;
}IntCtrl_Interrupt_Level_2;

typedef const struct
{
  IntCtrl_InterruptType      InterruptID;
  uint8                      InterruptMode;
  IntCtrl_PriorityGrouping_3 InterruptPriority;
}IntCtrl_Interrupt_Level_3;

typedef const struct
{
  IntCtrl_InterruptType      InterruptID;
  uint8                      InterruptMode;
  IntCtrl_PriorityGrouping_4 InterruptPriority;
}IntCtrl_Interrupt_Level_4;

extern IntCtrl_Interrupt_Level_1 Interrupts_Configs_Level_1[NVIC_ELEMENTS];
extern IntCtrl_Interrupt_Level_2 Interrupts_Configs_Level_2[NVIC_ELEMENTS];
extern IntCtrl_Interrupt_Level_3 Interrupts_Configs_Level_3[NVIC_ELEMENTS];
extern IntCtrl_Interrupt_Level_4 Interrupts_Configs_Level_4[NVIC_ELEMENTS];
#endif  /* INTCTRL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Cfg.h
 *********************************************************************************************************************/