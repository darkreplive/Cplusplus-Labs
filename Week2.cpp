// Lab2.cpp : Defines the entry point for the application.
//

#include<iostream>
//test
using namespace std;

namespace cst8219{
class Vehicle {
private:
	int numWheels;
	int numDoors;
public:
	Vehicle(int w, int d) {
		numDoors = d;
		numWheels = w;
	}
	Vehicle(int w) : Vehicle(4,4){}
	Vehicle() : Vehicle(4){}
};
}


int main(int argc, char** argv)
{
	cout << "Hello World!" << endl;
	return 0;
}
