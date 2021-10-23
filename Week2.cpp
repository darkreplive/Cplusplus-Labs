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
	cout << "Original is: " << original << " Copy is : " << copy << endl;
	cout << "Increment original: " << original++ << " Increment copy: " << ++copy << endl;
	cout << "Decrement original: " << --original << " Decrement copy: " << copy-- << endl;

	cout << "Compare equality 1: " << (original == copy) << endl;
	cout << "Compare equality 2: " << (--original == ++copy) << endl;
	cout << "Compare inequality: " << (original != copy) << endl;
	cout << "Assignment operator: " << (original = copy) << endl;

	cout << " week 5 works" << endl;
	return 0;
}
