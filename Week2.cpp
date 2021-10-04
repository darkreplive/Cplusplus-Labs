// Lab3.cpp : Defines the entry point for the application.
//

#include<iostream>
#include "Vehicle.cpp"
using namespace std;

void CreateVehicle(Vehicle& v, int w=4, int d=2) {
	v.setDoors(d);
	v.setWheels(w);

}


int main(int argc, char** argv)
{
	Vehicle original; //empty constructor no ()
	Vehicle copy(original); // copy constructor by reference

	Vehicle secondCopy(&original); //copy constructor by pointer
	copy.printVehicle(copy);
	CreateVehicle(copy, 2); //wheels is 2, everything else is default value
	copy.printVehicle(copy);
	CreateVehicle(copy, 2, 3); //wheels is 2, doors is 3
	copy.printVehicle (copy);
	copy = secondCopy;
	copy.printVehicle(copy);// copy is same as second copy
	cout << " week 4 works" << endl;
	return 0;
}
