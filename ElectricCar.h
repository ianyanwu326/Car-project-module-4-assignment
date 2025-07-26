#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"
#include "Battery.h"

class ElectricCar : public Car {
private:
  Battery battery;
public:
  ElectricCar(string make, string model, int year, string vin, Battery battery);
  void displayInfo() const override;
  string getType() const override;
};

#endif
