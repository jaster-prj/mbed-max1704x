#ifndef MAX17043_H
#define MAX17043_H

#include "MAX1704X.h"

class MAX17043 : public MAX1704X {
  public:
    MAX17043(PinName sda, PinName scl);
    MAX17043(PinName sda, PinName scl, uint8_t address);
    MAX17043(I2C *i2c);
    MAX17043(I2C *i2c, uint8_t address);
};

#endif
