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

  // Create cars with components
  Car* car1 = new ElectricCar("Tesla", "Model S", 2023, "E123", teslaBattery);
  Car* car2 = new GasCar("Toyota", "Corolla", 2022, "G456", hondaEngine);
  Car* car3 = new HybridCar("Ford", "Fusion", 2021, "H789", hybridEngine, hybridBattery);

  // Add cars to dealership
  dealer.addCar(car1);
  dealer.addCar(car2);
  dealer.addCar(car3);

  // Display inventory (polymorphic behavior)
  dealer.showInventory();

  return 0;
}
