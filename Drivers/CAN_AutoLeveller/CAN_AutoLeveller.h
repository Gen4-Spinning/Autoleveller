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


typedef struct Sensor_Struct
{
	uint16_t scanningSensor;
	uint16_t coilerSensor;
    uint8_t sendCounter;



}SensorTypeDef;

extern SensorTypeDef S;


void FDCAN_SendSensorvalues_ToMotor(void);

#endif /* CAN_AUTOLEVELLER_CAN_AUTOLEVELLER_H_ */
