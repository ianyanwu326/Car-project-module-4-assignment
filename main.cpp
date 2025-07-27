#include <iostream>
#include "ElectricCar.h"
#include "GasCar.h"
#include "HybridCar.h"
#include "Dealership.h"

int main() {
  Dealership dealer;  // Create dealership

  // Create components
  Battery teslaBattery(100, "Tesla");
  Engine hondaEngine(180, "Gasoline");
  Battery hybridBattery(60, "Panasonic");
  Engine hybridEngine(120, "Hybrid Gas");

  