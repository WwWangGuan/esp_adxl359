//
// Created by WwWangGuan on 24-12-2.
//

#ifndef ADXL359_H
#define ADXL359_H

// Device ID Registers
#define DEVID_AD       0x00  // Read-only
#define DEVID_MST      0x01  // Read-only
#define PARTID         0x02  // Read-only
#define REVID          0x03  // Read-only

// Status Register
#define STATUS         0x04  // Read-only

// FIFO Registers
#define FIFO_ENTRIES   0x05  // Read-only
#define TEMP2          0x06  // Read-only
#define TEMP1          0x07  // Read-only

// X, Y, Z Data Registers
#define XDATA3         0x08  // Read-only
#define XDATA2         0x09  // Read-only
#define XDATA1         0x0A  // Read-only
#define YDATA3         0x0B  // Read-only
#define YDATA2         0x0C  // Read-only
#define YDATA1         0x0D  // Read-only
#define ZDATA3         0x0E  // Read-only
#define ZDATA2         0x0F  // Read-only
#define ZDATA1         0x10  // Read-only

// FIFO Data Register
#define FIFO_DATA      0x11  // Read-only

// Offset Registers
#define OFFSET_X_H     0x12  // Read/Write
#define OFFSET_X_L     0x13  // Read/Write
#define OFFSET_Y_H     0x14  // Read/Write
#define OFFSET_Y_L     0x15  // Read/Write
#define OFFSET_Z_H     0x16  // Read/Write
#define OFFSET_Z_L     0x17  // Read/Write

// Activity Threshold Registers
#define ACT_EN         0x18  // Read/Write
#define ACT_THRESH_H   0x19  // Read/Write
#define ACT_THRESH_L   0x1A  // Read/Write
#define ACT_COUNT      0x1B  // Read/Write

// Filter and FIFO Samples Registers
#define FILTER         0x1C  // Read/Write
#define FIFO_SAMPLES   0x1D  // Read/Write

// Interrupt and Sync Registers
#define INT_MAP        0x1E  // Read/Write
#define SYNC           0x1F  // Read/Write

// Range and Power Control Registers
#define RANGE          0x20  // Read/Write
#define POWER_CTL      0x21  // Read/Write

// Self Test and Reset Registers
#define SELF_TEST      0x22  // Read/Write
#define RESET          0x23  // Read/Write

#endif //ADXL359_H
