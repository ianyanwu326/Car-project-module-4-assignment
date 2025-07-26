#ifndef ENGINE_H
#define ENGINE_H

#include <string>
using namespace std;

class Engine {
private:
  int horsepower;
  string fuelType;
public:
  Engine(int horsepower = 150, string fuelType = "Gasoline");
  void display() const;
};

#endif 