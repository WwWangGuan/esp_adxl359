//
// Created by WwWangGuan on 24-12-2.
//

#include "adxl359.h"
#include <stdio.h>


typedef struct ADI_Acel
{
    uint8_t AnalogDeviceID;
    uint8_t AnalogDeviceMEMSID;
    uint8_t DeviceID;
    uint8_t MaskRevision;
    uint8_t Status;
    uint8_t FIFO_Entires; // 存储在 FIFO 中的数据样本数量
    float Temperature;

    float X_Axis_Accel;
    float Y_Axis_Accel;
    float Z_Axis_Accel;
    uint8_t FIFO_Data;

    uint16_t Offset_X_Axis;
    uint16_t Offset_Y_Axis;
    uint16_t Offset_Z_Axis;

    uint8_t Act_Detect_EN;

    uint8_t Act_Thresh_X_Axis;
    uint8_t Act_Thresh_Y_Axis;
    uint8_t Act_Thresh_Z_Axis;
    uint8_t Act_Count;
};
