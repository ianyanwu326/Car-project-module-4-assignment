#include "HybridCar.h"
#include <iostream>
using namespace std;

// Constructor initializes hybrid car with both engine and battery
HybridCar::HybridCar(string make, string model, int year, string vin, Engine engine, Battery battery)
  : Car(make, model, year, vin), engine(engine), battery(battery) {
}

