/*
 * FDCAN.c
 *
 *  Created on: Sep 24, 2025
 *      Author: Jeeva
 */

#include "FDCAN.h"

#include "main.h"


//CAN variables here
uint32_t functionID,source_address, destination_address,data_size;
uint8_t TxData[5];

FDCAN_TxHeaderTypeDef   TxHeader;
FDCAN_RxHeaderTypeDef   RxHeader;



void FDCAN_TxInit(void)
{
	if(HAL_FDCAN_Start(&hfdcan1)!= HAL_OK){
	  Error_Handler();}
	if (HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0) != HAL_OK){
	 Error_Handler();
	}
    TxHeader.Identifier = 0x061E030A;
    TxHeader.IdType = FDCAN_EXTENDED_ID;
    TxHeader.TxFrameType = FDCAN_DATA_FRAME;
    TxHeader.DataLength = FDCAN_DLC_BYTES_4;
    TxHeader.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
    TxHeader.BitRateSwitch = FDCAN_BRS_ON;
    TxHeader.FDFormat = FDCAN_FD_CAN;
    TxHeader.TxEventFifoControl = FDCAN_NO_TX_EVENTS;
    TxHeader.MessageMarker = 0;
}



