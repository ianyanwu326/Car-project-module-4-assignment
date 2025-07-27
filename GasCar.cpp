#include "GasCar.h"
#include <iostream>
using namespace std;

// Constructor initializes gas car and sets its engine
GasCar::GasCar(string make, string model, int year, string vin, Engine engine)
  : Car(make, model, year, vin), engine(engine) {
}

