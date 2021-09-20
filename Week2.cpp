// Lab2.cpp : Using Git
//

#include<iostream>
using namespace std;

namespace cst8219 {
	class Vehicle {
	private:
		int numWheels;
		int numDoors;
	public:
		Vehicle(int w, int d) {
			numDoors = d;
			numWheels = w;
			cout << "In constructor with 2 parameters" << endl;
		}
		Vehicle(int w) : Vehicle(4, 4) { cout << "In constructor with 1 parameters, wheels =" << w << endl; }
		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}
		~Vehicle() {
			cout << "In destructor" << endl;
		}
	};
}


int main(int argc, char** argv)
{
	cst8219::Vehicle myVehicle(4);
	cout << "Hello World!" << endl;
	return 0;
}
