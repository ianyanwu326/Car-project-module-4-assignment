#include "Dealership.h"
#include <iostream>
using namespace std;

// Adds a new car (pointer to base class) to inventory
void Dealership::addCar(Car* car) {
  inventory.push_back(car);
}

// Displays all cars in inventory using polymorphism
void Dealership::showInventory() const {
  for (const auto& car : inventory) {
    cout << "Type: " << car->getType() << endl;
    car->displayInfo();  // Virtual function call
    cout << "-------------------------" << endl;
  }
}

// Destructor deletes dynamically allocated cars
Dealership::~Dealership() {
  for (auto car : inventory) {
    delete car;
  }
}
