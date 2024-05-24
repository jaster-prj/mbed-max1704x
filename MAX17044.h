#ifndef MAX17044_H
#define MAX17044_H

#include "MAX1704X.h"

class MAX17044 : public MAX1704X {
  public:
    MAX17044(PinName sda, PinName scl);
    MAX17044(PinName sda, PinName scl, uint8_t address);
    MAX17044(I2C *i2c);
    MAX17044(I2C *i2c, uint8_t address);
};

#endif
