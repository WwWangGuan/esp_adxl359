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
    uint8_t status;
    uint8_t fifo_entiries; // 存储在 FIFO 中的数据样本数量
    float temperature;

    float s_Axis_Accel;
    float Y_Axis_Accel;
    float Z_Axis_Accel;
    uint8_t fifo_data;

    uint16_t offset_x_axis;
    uint16_t offset_y_axis;
    uint16_t offset_z_axis;

    uint8_t act_detect_enable;

    uint8_t act_thresh_x_axis;
    uint8_t act_thresh_y_axis;
    uint8_t act_thresh_z_axis;
    uint8_t act_count;

    uint8_t filter_config;

    uint8_t fifo_samples_count;

    uint8_t int_maps;

    uint8_t data_sync;


};
