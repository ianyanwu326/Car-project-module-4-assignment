#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"
#include "Battery.h"

class ElectricCar : public Car {
private:
  Battery battery;
