/*
 * CAN_AutoLeveller.h
 *
 *  Created on: Sep 24, 2025
 *      Author: Jeeva
 */

#ifndef CAN_AUTOLEVELLER_CAN_AUTOLEVELLER_H_
#define CAN_AUTOLEVELLER_CAN_AUTOLEVELLER_H_

#include "main.h"
#include "stm32g4xx_hal.h"
#include "stdio.h"
#include "FDCAN.h"

#define MAX 3

typedef struct Sensor_Struct
{
	uint16_t scanningSensor;
	uint16_t coilerSensor;
    uint8_t sendCounter;
    float Updated_Draft;
    uint16_t BR_MotorRPM;
    uint16_t autoLevellerArr[MAX];
    float avgAutoLeveller;
    uint8_t Toggle_Switch;

}SensorTypeDef;

extern SensorTypeDef S;


void FDCAN_SendSensorvalues_ToMotor(void);

#endif /* CAN_AUTOLEVELLER_CAN_AUTOLEVELLER_H_ */
