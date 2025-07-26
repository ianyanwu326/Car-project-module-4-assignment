#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <vector>
#include "Car.h"
using namespace std;

class Dealership {
private:
  vector<Car*> inventory;
public:
  void addCar(Car* car);
  void showInventory() const;
  ~Dealership();
};

#endif
