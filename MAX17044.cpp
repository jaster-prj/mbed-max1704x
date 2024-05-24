#include "MAX17044.h"

MAX17044::MAX17044(PinName sda, PinName scl) : MAX1704X(sda, scl)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17044);
}

MAX17044::MAX17044(PinName sda, PinName scl, uint8_t address) : MAX1704X(sda, scl, address)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17044);
}

MAX17044::MAX17044(I2C *i2c) : MAX1704X(i2c)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17044);
}

MAX17044::MAX17044(I2C *i2c, uint8_t address) : MAX1704X(i2c, address)
{
    setDevice(max1704x_devices_e::MAX1704X_MAX17044);
}
