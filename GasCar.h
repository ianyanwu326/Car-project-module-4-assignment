#ifndef GASCAR_H
#define GASCAR_H

#include "Car.h"
#include "Engine.h"

class GasCar : public Car {
private:
  Engine engine;
public:
  GasCar(string make, string model, int year, string vin, Engine engine);
  void displayInfo() const override;
  string getType() const override;
};

#endif