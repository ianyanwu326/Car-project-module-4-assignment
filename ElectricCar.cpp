#include "ElectricCar.h"
#include <iostream>
using namespace std;

// Constructor initializes electric car and sets its battery
ElectricCar::ElectricCar(string make, string model, int year, string vin, Battery battery)
  : Car(make, model, year, vin), battery(battery) {
}

// Displays electric car details
void ElectricCar::displayInfo() const {
  cout << "[Electric Car]" << endl;
  cout << year << " " << make << " " << model << " (VIN: " << vin << ")" << endl;
  battery.display();  // Display battery info
}

// Returns type of car
string ElectricCar::getType() const {
  return "Electric";
}
