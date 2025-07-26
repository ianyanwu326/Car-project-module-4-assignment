#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
protected:
  string make, model, vin;
  int year;
public:
  Car(string make, string model, int year, string vin);
  virtual ~Car() {}
  virtual void displayInfo() const = 0;
  virtual string getType() const = 0;
};

#endif