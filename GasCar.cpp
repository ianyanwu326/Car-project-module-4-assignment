#include "GasCar.h"
#include <iostream>
using namespace std;

// Constructor initializes gas car and sets its engine
GasCar::GasCar(string make, string model, int year, string vin, Engine engine)
  : Car(make, model, year, vin), engine(engine) {
}

// Displays gas car details
void GasCar::displayInfo() const {
  cout << "[Gas Car]" << endl;
  cout << year << " " << make << " " << model << " (VIN: " << vin << ")" << endl;
  engine.display();  // Display engine info
}

// Returns type of car
string GasCar::getType() const {
  return "Gas";
}

