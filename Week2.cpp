// Lab6.cpp : Defines the entry point for the application.
//040979598
//November 5th 2021


#include"HybridVehicle.h"
#include <iostream>
using namespace std;

Vehicle* testVehicle(Vehicle* pVehicle, const char* vehicleName) {

	cout << vehicleName << "’s range is: " << pVehicle->calculateRange() << endl;
	pVehicle->drive(150); //drive 150 km
	cout << vehicleName << "’s energy left is: " << pVehicle->percentEnergyRemaining() << endl;
	cout << vehicleName << "’s range is now: " << pVehicle->calculateRange() << endl;
	return pVehicle;
}


int main(int argc, char** argv)
{
	//50L of gas, 7.1 L/100km
	delete  testVehicle(new GasolineVehicle(50, 7.1), "Corolla");
	//42 L of gas, 4.3 L/100km, 8.8kWh, 22 kWh/100km
	delete testVehicle(dynamic_cast<ElectricVehicle*>(new HybridVehicle(42, 4.3, 8.8, 22.0)), "Prius");
	//75 kWh, 16 kWh/100km
	delete testVehicle(new ElectricVehicle(75, 16), "Tesla 3");
	return 0;
}
