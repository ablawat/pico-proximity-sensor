#include "vl6180x-config.h"
#include "vl6180x-registers.h"

#define REGISTERS_PRIVATE_NUM  UINT8_C(30)
#define REGISTERS_PUBLIC_NUM   UINT8_C( 6)

/* Private Registers [Mandatory] */
static const struct device_register_s registers_private[REGISTERS_PRIVATE_NUM] =
{
    { UINT16_C(0x0207), UINT8_C(0x01) },
    { UINT16_C(0x0208), UINT8_C(0x01) },
    { UINT16_C(0x0096), UINT8_C(0x00) },
    { UINT16_C(0x0097), UINT8_C(0xFD) },
    { UINT16_C(0x00E3), UINT8_C(0x01) },
    { UINT16_C(0x00E4), UINT8_C(0x03) },
    { UINT16_C(0x00E5), UINT8_C(0x02) },
    { UINT16_C(0x00E6), UINT8_C(0x01) },
    { UINT16_C(0x00E7), UINT8_C(0x03) },
    { UINT16_C(0x00F5), UINT8_C(0x02) },
    { UINT16_C(0x00D9), UINT8_C(0x05) },
    { UINT16_C(0x00DB), UINT8_C(0xCE) },
    { UINT16_C(0x00DC), UINT8_C(0x03) },
    { UINT16_C(0x00DD), UINT8_C(0xF8) },
    { UINT16_C(0x009F), UINT8_C(0x00) },
    { UINT16_C(0x00A3), UINT8_C(0x3C) },
    { UINT16_C(0x00B7), UINT8_C(0x00) },
    { UINT16_C(0x00BB), UINT8_C(0x3C) },
    { UINT16_C(0x00B2), UINT8_C(0x09) },
    { UINT16_C(0x00CA), UINT8_C(0x09) },
    { UINT16_C(0x0198), UINT8_C(0x01) },
    { UINT16_C(0x01B0), UINT8_C(0x17) },
    { UINT16_C(0x01AD), UINT8_C(0x00) },
    { UINT16_C(0x00FF), UINT8_C(0x05) },
    { UINT16_C(0x0100), UINT8_C(0x05) },
    { UINT16_C(0x0199), UINT8_C(0x05) },
    { UINT16_C(0x01A6), UINT8_C(0x1B) },
    { UINT16_C(0x01AC), UINT8_C(0x3E) },
    { UINT16_C(0x01A7), UINT8_C(0x1F) },
    { UINT16_C(0x0030), UINT8_C(0x00) },
};

/* Public Registers [Recommended] */
static const struct device_register_s registers_public[REGISTERS_PUBLIC_NUM] =
{
    { REG_SYSTEM_MODE_GPIO1,               UINT8_C(0x10) },
    { REG_READOUT_AVERAGING_SAMPLE_PERIOD, UINT8_C(0x30) },
    { REG_SYSALS_ANALOGUE_GAIN,            UINT8_C(0x46) },
    { REG_SYSRANGE_VHV_REPEAT_RATE,        UINT8_C(0xFF) },
    { REG_SYSALS_INTEGRATION_PERIOD,       UINT8_C(0x63) },
    { REG_SYSRANGE_VHV_RECALIBRATE,        UINT8_C(0x01) },
};

const struct device_register_s * config_get_registers_private(void)
{
    return registers_private;
}

const size_t config_get_registers_private_num(void)
{
    return REGISTERS_PRIVATE_NUM;
}

const struct device_register_s * config_get_registers_public(void)
{
    return registers_public;
}

const size_t config_get_registers_public_num(void)
{
    return REGISTERS_PUBLIC_NUM;
}

#undef REGISTERS_PRIVATE_NUM
#undef REGISTERS_PUBLIC_NUM
