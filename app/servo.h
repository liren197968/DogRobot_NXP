#ifndef _SERVO_H
#define _SERVO_H

#include <stdbool.h>
#include <stdint.h>

#define SERVO_SPEED_DIV_STP         5
#define ROBOT_SERVO_MAX_NUM         18U

#define ROBOT_SERVO_CENTER          256U

#define SERVO_MAX_PWM_DAT           512U
#define SERVO_MIN_PWM_DAT           102U

#define FOR_RIG_ARM_CENTER          240U
#define FOR_RIG_LEG_CENTER          256U
#define FOR_RIG_FET_CENTER          256U

#define BAK_RIG_ARM_CENTER          270U
#define BAK_RIG_LEG_CENTER          256U
#define BAK_RIG_FET_CENTER          256U

#define FOR_LEF_ARM_CENTER          270U
#define FOR_LEF_LEG_CENTER          256U
#define FOR_LEF_FET_CENTER          256U

#define BAK_LEF_ARM_CENTER          246U
#define BAK_LEF_LEG_CENTER          256U
#define BAK_LEF_FET_CENTER          256U

#define HED_MID_NEK_CENTER          256U
#define HED_RIG_EAR_CENTER          256U
#define HED_LEF_EAR_CENTER          256U

#define TAL_MID_SWG_CENTER          256U

void ServoTimerInit(void);
void ServoSpeedSet(uint16_t ServoRunTimeMs);

extern int16_t          gPwmExpetVal[ROBOT_SERVO_MAX_NUM];

#endif
