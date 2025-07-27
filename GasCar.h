#ifndef GASCAR_H
#define GASCAR_H

#include "Car.h"
#include "Engine.h"

class GasCar : public Car {
private:
  Engine engine;
