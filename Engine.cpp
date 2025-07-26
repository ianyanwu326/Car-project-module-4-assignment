#include "Engine.h"
#include <iostream>
using namespace std;

// Constructor initializes engine with horsepower and fuel type
Engine::Engine(int horsepower, string fuelType)
  : horsepower(horsepower), fuelType(fuelType) {
}

// Displays engine information
void Engine::display() const {
  cout << "Engine - Horsepower: " << horsepower << ", Fuel Type: " << fuelType << endl;
}


