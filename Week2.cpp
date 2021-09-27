// Lab3.cpp : Defines the entry point for the application.
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
	cst8219::Vehicle veh1; // This calls constructor Vehicle()
	cst8219::Vehicle veh2(4); //This calls constructor Vehicle(int);
	cst8219::Vehicle veh3(4, 2); //This calls constructor Vehicle( int, int)
	char answer;
	do {
		cout << "Do you want to create a vehicle or quit? (Q for quit)" << endl; //asks user if they want to continue
		cin >> answer;
		if (answer == 'q') {

		}
		else {
			int d;
			int w;
			while (true) {
				cout << "Enter number of doors" << endl;
				if (cin >> d) {
					break;
				}
				else {
					cout << "Please only enter integer values" << endl;
					cin.clear();
				}
			}
			
			while (true) {
				cout << "Enter number of wheels" << endl;
				if (cin >> w) {
					break;
				}
				else {
					cout << "Please only enter integer values" << endl;
					cin.clear();
				}
			}
			cst8219::Vehicle pVehicle(d, w);
		}
	} while (answer != 'q');

	cout << "Hello World!" << endl;
	cout << "Vehicle 1 takes " << sizeof(veh1) << endl;
	cout << "Vehicle 2 takes " << sizeof(veh2) << endl;
	cout << "Vehicle 3 takes " << sizeof(veh3) << endl;
	return 0;
}
