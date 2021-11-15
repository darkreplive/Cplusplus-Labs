// Lab7.cpp : Defines the entry point for the application.
//040979598
//November 11th 2021


#include"HybridVehicle.h"
#include <iostream>
#include <vector>
using namespace std;

template<class T>
T testVehicle(T pVehicle, const char* vehicleName) {

	cout << vehicleName << "’s range is: " << pVehicle->calculateRange() << endl;
	pVehicle->drive(150); //drive 150 km
	cout << vehicleName << "’s energy left is: " << pVehicle->percentEnergyRemaining() << endl;
	cout << vehicleName << "’s range is now: " << pVehicle->calculateRange() << endl;
	return pVehicle;
}

namespace Helper {
	template<class T>
	T min(T a, T b) {
		if (a < b) {
			return a;
		}
		else {
			return b;
		}
	}
	template<class T>
	T max(T a, T b) {
		if (a < b) {
			return b;
		}
		else {
			return a;
		}
	}

}


void testTemplateLibrary() {
	vector<float> hold = { 5.0f,4.0f,3.0f,2.0f,1.0f };
	while(!hold.empty()){
		cout << "Last Element : " << hold.back() << " "; //print the last element
		hold.pop_back(); // removes the last element
	}
}

int main(int argc, char** argv)
{
	//50L of gas, 7.1 L/100km
	delete  testVehicle(new GasolineVehicle(50, 7.1), "Corolla");
	//42 L of gas, 4.3 L/100km, 8.8kWh, 22 kWh/100km
	delete testVehicle((new HybridVehicle(42, 4.3, 8.8, 22.0)), "Prius");
	//75 kWh, 16 kWh/100km
	delete testVehicle(new ElectricVehicle(75, 16), "Tesla 3");


	cout << "min of string(Hello) and string(world) is:" << Helper::min(string("Hello"), string("World")) << endl;
	cout << "max of string(Hello) and string(world) is:" << Helper::max(string("Hello"), string("World")) << endl;
	testTemplateLibrary();
	return 0;
}
