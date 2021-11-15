//040979598
//November 5th 2021
#include "HybridVehicle.h"
HybridVehicle::HybridVehicle() {

}
HybridVehicle::HybridVehicle(float maxGas, float gasEfficiency, float maxCharge, float electricEfficiency) {
	GasolineVehicle::setmaxGasoline(maxGas);
	GasolineVehicle::setcurrentGasoline(this->getmaxGasoline());
	ElectricVehicle::setmaxEnergy(maxCharge);
	ElectricVehicle::setcurrentEnergy(this->getmaxEnergy());
	this->gasEfficiency = gasEfficiency;
	this->electricEfficiency = electricEfficiency;
};
HybridVehicle::~HybridVehicle() {
	cout << "In hybrid vehicle deconstructor" << endl;
}

float HybridVehicle:: calculateRange() {
	return (GasolineVehicle::getmaxGasoline() * 100 / gasEfficiency +
		ElectricVehicle::getmaxEnergy() * 100 / electricEfficiency);
};

float HybridVehicle::  percentEnergyRemaining() {
	return (this->GasolineVehicle::getcurrentGasoline() / GasolineVehicle::getmaxGasoline() * 100.0f +
		ElectricVehicle::getcurrentEnergy() / ElectricVehicle::getmaxEnergy() * 100.0f) / 2;
};

void HybridVehicle::  drive(float km) {
	float hold = ElectricVehicle::getcurrentEnergy() - (km / 100);
	if (hold == 0) {//when currentEnergy is 0 subtract from currentGasoline
		cout << "Your car is out of energy!";
		ElectricVehicle::setcurrentEnergy(0);
		GasolineVehicle::setcurrentGasoline(GasolineVehicle::getcurrentGasoline() - (km / 100));
		if (GasolineVehicle::getcurrentGasoline() <= 0) {//if gasoline is zero or less its set to 0
			GasolineVehicle::setcurrentGasoline(0);
			cout << "Your car is out of gas!";
		}
	}
	else if (hold < 0) {
		ElectricVehicle::setcurrentEnergy(0);
		GasolineVehicle::setcurrentGasoline(hold); //if hold is negative adding it to currentGasoline is like subtracting
		if (GasolineVehicle::getcurrentGasoline() <= 0) {//if gasoline is zero or less its set to 0
			GasolineVehicle::setcurrentGasoline(0);
			cout << "Your car is out of gas!";
		}
	}
	else {//if currentEnergy isnt negative or zero 
		ElectricVehicle::setcurrentEnergy(hold);
	}
};