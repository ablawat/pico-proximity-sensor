#ifndef VL6180X_CONFIG_H
#define VL6180X_CONFIG_H

struct device_register_s
{
    uint16_t m_address;
    uint8_t  m_value;
};

const struct device_register_s * config_get_registers_private (void);
const struct device_register_s * config_get_registers_public  (void);

const size_t config_get_registers_private_num (void);
const size_t config_get_registers_public_num  (void);

#endif
