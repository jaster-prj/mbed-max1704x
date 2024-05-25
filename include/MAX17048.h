#ifndef MAX17048_H
#define MAX17048_H

#include "MAX1704X.h"

class MAX17048 : public MAX1704X {
  public:
    MAX17048(PinName sda, PinName scl);
    MAX17048(PinName sda, PinName scl, uint8_t address);
    MAX17048(I2C *i2c);
    MAX17048(I2C *i2c, uint8_t address);
};

#endif
