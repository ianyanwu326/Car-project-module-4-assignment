#ifndef BATTERY_H
#define BATTERY_H

#include <string>
using namespace std;

class Battery {
private:
  int capacityKWh;
  string brand;
public:
  Battery(int capacityKWh = 50, string brand = "Generic");
  void display() const;
};

#endif 