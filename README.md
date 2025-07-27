Okay so in this readme I will talk about the purpose of my code, the structure, and how it functions.

This was for my Computer Science 2 assignment project.
The implementation is from a C++ version of a car System . It uses object-oriented programming and multiple classes to keep things organized. The system models different types of cars (electric, gas, and hybrid), each with its own components like battery and engine. A dealership holds a collection of these cars and displays them using **polymorphism**.

My project has specific classes, all playing key roles to enable the code to function accurately.

The Class Overview

Battery.h / Battery.cpp – Manages battery data like brand and capacity  
Engine.h / Engine.cpp – Stores fuel type and horsepower for engine  
Car.h / Car.cpp – Abstract base class for all cars  
ElectricCar.h / ElectricCar.cpp– Inherits from `Car`, adds `Battery`  
GasCar.h / GasCar.cpp – Inherits from `Car`, adds `Engine`  
**HybridCar.h / HybridCar.cpp – Inherits from `Car`, adds both `Battery` and `Engine`  
Dealership.h / Dealership.cpp – Holds and manages a list of cars (using `Car*`)  
main.cpp– Contains the main driver code to test and run the system

 How THE GAME Works 
I Created a few car objects (gas, electric, hybrid)  
 I Added those cars to a `Dealership`  
The dealership uses polymorphism to display car details  
Aggregation is used: Cars "have" batteries and/or engines  
 Program automatically shows the dealership’s full inventory  

Then Some highlights i saw from the code are:

The CAR CLASS — base abstract class for all cars
cpp
class Car {
protected:
  string make, model, vin;
  int year;
public:
  virtual void displayInfo() const = 0;
  virtual string getType() const = 0;
}; 

The BATTERY CLASS — handles battery info
class Battery {
private:
  int capacityKWh;
  string brand;
public:
  Battery(int capacityKWh = 50, string brand = "Generic");
  void display() const;
};

The ENGINE CLASS — handles engine data
class Engine {
private:
  int horsepower;
  string fuelType;
public:
  Engine(int horsepower = 150, string fuelType = "Gasoline");
  void display() const;
};

The DEALERSHIP — aggregates cars using a polymorphic list
class Dealership {
private:
  vector<Car*> inventory;
public:
  void addCar(Car* car);
  void showInventory() const;
  ~Dealership(); // deletes cars
};


Thank you and I hope you enjoy the Car System project!!!!
