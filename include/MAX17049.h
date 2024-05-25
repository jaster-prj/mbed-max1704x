#ifndef MAX17049_H
#define MAX17049_H

#include "MAX1704X.h"

class MAX17049 : public MAX1704X {
  public:
    MAX17049(PinName sda, PinName scl);
    MAX17049(PinName sda, PinName scl, uint8_t address);
    MAX17049(I2C *i2c);
    MAX17049(I2C *i2c, uint8_t address);
};

#endif
