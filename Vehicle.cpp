#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(int w, int d) {
	numDoors = d;
	numWheels = w;
	cout << "In constructor with 2 parameters" << endl;
}
Vehicle::Vehicle(int w) : Vehicle(4, 4) { 
	cout << "In constructor with 1 parameters, wheels =" << w << endl; 
	}
Vehicle::Vehicle() : Vehicle(4) {
	cout << "In constructor with 0 parameters" << endl;
}
Vehicle::~Vehicle() {
	cout << "In destructor" << endl;
}

void Vehicle::printVehicle(Vehicle v) {
	cout << "Vehicle at address:" << &v <<
		" Doors: " << v.getDoors() <<
		" Wheels: " << v.getWheels() << endl ;
}

Vehicle::Vehicle(Vehicle& copy) {
	setDoors(copy.getDoors());
	setWheels(copy.getWheels());

}

Vehicle::Vehicle(Vehicle* copy) {
	setDoors(copy->getDoors());
	setWheels(copy->getWheels());
}