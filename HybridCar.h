#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H

#include "Car.h"
#include "Engine.h"
#include "Battery.h"

class HybridCar : public Car {
private:
  Engine engine;
  Battery battery;
public:
  HybridCar(string make, string model, int year, string vin, Engine engine, Battery battery);
  void displayInfo() const override;
  string getType() const override;
};

#endif
