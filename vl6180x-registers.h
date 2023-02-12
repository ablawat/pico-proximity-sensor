#ifndef VL6180X_REGISTERS_H
#define VL6180X_REGISTERS_H

/* Register Group - SYSTEM SETUP */
#define REG_SYSTEM_MODE_GPIO0                  UINT16_C(0x0010)
#define REG_SYSTEM_MODE_GPIO1                  UINT16_C(0x0011)

/* Register Group - RANGE SETUP */
#define REG_SYSRANGE_START                     UINT16_C(0x0018)
#define REG_SYSRANGE_INTERMEASUREMENT_PERIOD   UINT16_C(0x001B)
#define REG_SYSRANGE_PART_TO_PART_RANGE_OFFSET UINT16_C(0x0024)
#define REG_SYSRANGE_RANGE_CHECK_ENABLES       UINT16_C(0x002D)
#define REG_SYSRANGE_VHV_RECALIBRATE           UINT16_C(0x002E)
#define REG_SYSRANGE_VHV_REPEAT_RATE           UINT16_C(0x0031)

/* Register Group - ALS SETUP */
#define REG_SYSALS_ANALOGUE_GAIN               UINT16_C(0x003F)
#define REG_SYSALS_INTEGRATION_PERIOD          UINT16_C(0x0041)

/* Register Group - RESULTS */
#define REG_RESULT_RANGE_STATUS                UINT16_C(0x004D)
#define REG_RESULT_ALS_STATUS                  UINT16_C(0x004E)
#define REG_RESULT_INTERRUPT_STATUS_GPIO       UINT16_C(0x004F)
#define REG_RESULT_ALS_VAL                     UINT16_C(0x0050)
#define REG_RESULT_RANGE_VAL                   UINT16_C(0x0062)
#define REG_RESULT_RANGE_RAW                   UINT16_C(0x0064)

/* Other */
#define REG_READOUT_AVERAGING_SAMPLE_PERIOD    UINT16_C(0x010A)

#endif