/*
 * CAN_AutoLeveller.c
 *
 *  Created on: Sep 24, 2025
 *      Author: Jeeva
 */

#include "main.h"
#include "stm32g4xx_hal.h"
#include "CAN_AutoLeveller.h"


void FDCAN_SendSensorvalues_ToMotor(void){
	TxHeader.Identifier = (0xA1E03<<8)|0x0A;//0A1E030A
    TxHeader.IdType = FDCAN_EXTENDED_ID;
    TxHeader.TxFrameType = FDCAN_DATA_FRAME;
    TxHeader.DataLength = FDCAN_DLC_BYTES_12;
    TxHeader.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
    TxHeader.BitRateSwitch = FDCAN_BRS_ON;
    TxHeader.FDFormat = FDCAN_FD_CAN;
    TxHeader.TxEventFifoControl = FDCAN_NO_TX_EVENTS;
    TxHeader.MessageMarker = 0;
    	TxData[0] = S.sendCounter;
    	TxData[1]=(S.scanningSensor)>>8;
    	TxData[2]=(S.scanningSensor);
    	TxData[3]=(S.coilerSensor>>8);
    	TxData[4]=(S.coilerSensor);
//    	TxData[5]=(((uint16_t)(S.Updated_Draft*100))>>8);
//    	TxData[6]=(uint16_t)(S.Updated_Draft*100);
//    	TxData[7]=(S.BR_MotorRPM)>>8;
//    	TxData[8]=(S.BR_MotorRPM);
    	TxData[9]=(S.Toggle_Switch);

    	if (HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan1)>1){
    		HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &TxHeader, TxData);
    	}
    	S.sendCounter++;
}


