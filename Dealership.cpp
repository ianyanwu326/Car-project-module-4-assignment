#include "Dealership.h"
#include <iostream>
using namespace std;

// Adds a new car (pointer to base class) to inventory
void Dealership::addCar(Car* car) {
  inventory.push_back(car);
}

