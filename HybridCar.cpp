#include "HybridCar.h"
#include <iostream>
using namespace std;

// Constructor initializes hybrid car with both engine and battery
HybridCar::HybridCar(string make, string model, int year, string vin, Engine engine, Battery battery)
  : Car(make, model, year, vin), engine(engine), battery(battery) {
}

// Displays hybrid car details
void HybridCar::displayInfo() const {
  cout << "[Hybrid Car]" << endl;
  cout << year << " " << make << " " << model << " (VIN: " << vin << ")" << endl;
  engine.display();    // Show engine info
  battery.display();   // Show battery info
}

// Returns type of car
string HybridCar::getType() const {
  return "Hybrid";
}