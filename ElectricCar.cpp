#include "ElectricCar.h"
#include <iostream>
using namespace std;

// Constructor initializes electric car and sets its battery
ElectricCar::ElectricCar(string make, string model, int year, string vin, Battery battery)
  : Car(make, model, year, vin), battery(battery) {
}

