#include "Battery.h"
#include <iostream>
using namespace std;

// Constructor initializes battery with capacity and brand
Battery::Battery(int capacityKWh, string brand)
  : capacityKWh(capacityKWh), brand(brand) {
}

// Displays battery information
void Battery::display() const {
  cout << "Battery - Brand: " << brand << ", Capacity: " << capacityKWh << " kWh" << endl;
}
