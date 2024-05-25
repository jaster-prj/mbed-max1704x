#include "../include/MAX17048.h"

MAX17048::MAX17048(PinName sda, PinName scl) : MAX1704X(sda, scl)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17048);
}

MAX17048::MAX17048(PinName sda, PinName scl, uint8_t address) : MAX1704X(sda, scl, address)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17048);
}

MAX17048::MAX17048(I2C *i2c) : MAX1704X(i2c)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17048);
}

MAX17048::MAX17048(I2C *i2c, uint8_t address) : MAX1704X(i2c, address)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17048);
}
