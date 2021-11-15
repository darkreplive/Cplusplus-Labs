//040979598
//November 5th 2021
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int w, int d) {
	numDoors = d;
	numWheels = w;
	//cout << "In constructor with 2 parameters" << endl;
}
Vehicle::Vehicle(int w) : Vehicle(4, 4) { 
	//cout << "In constructor with 1 parameters, wheels =" << w << endl; 
	}
Vehicle::Vehicle() : Vehicle(4) {
	//cout << "In constructor with 0 parameters" << endl;
}
Vehicle::~Vehicle() {
	//cout << "In destructor" << endl;
}

Vehicle::Vehicle(Vehicle& copy) {
	setDoors(copy.getDoors());
	setWheels(copy.getWheels());

}

Vehicle::Vehicle(Vehicle* copy) {
	setDoors(copy->getDoors());
	setWheels(copy->getWheels());
}

int  Vehicle::getDoors()const {
	return numDoors;
}
int  Vehicle::getWheels()const {
	return numWheels;
}

void Vehicle::setDoors(int d) {
	numDoors = d;
}

void Vehicle::setWheels(int q) {
	numWheels = q;
}

Vehicle& Vehicle::operator=(Vehicle& other) {
	Vehicle *temp(this);
	return *temp;
}

bool Vehicle::operator==(const Vehicle& other) {
	if (this->getDoors() == other.getDoors() && this->getWheels() == other.getWheels()) {
		return true;
	}
	else {
		return false;
	}
}
bool Vehicle::operator!=(const Vehicle& other) {
	if (this->getDoors() == other.getDoors() && this->getWheels() == other.getWheels()) {
		return false;
	}
	else {
		return true;
	}
}

Vehicle& Vehicle::operator++(void) {//prefix ++v
	this->numDoors++;
	this->numWheels++;
	return *this;
}

Vehicle& Vehicle::operator++(int i) {//postfix v++
	Vehicle *temp(this);
	this->numDoors++;
	this->numWheels++;
	return *temp;
}

Vehicle& Vehicle::operator--(void) {//prefix --v
	this->numDoors--;
	this->numWheels--;
	return *this;
}

Vehicle& Vehicle::operator--(int i) {//postfix v--
	Vehicle *temp(this);
	this->numDoors--;
	this->numWheels--;
	return *temp;
}

