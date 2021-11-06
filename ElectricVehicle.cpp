//040979598
//November 5th 2021
#include "ElectricVehicle.h"
ElectricVehicle::ElectricVehicle() {};
ElectricVehicle::ElectricVehicle(float max, float efficiency) {
		maxEnergy = max;
		currentEnergy = max;
		Vehicle::setEngine(efficiency);
	};
ElectricVehicle::~ElectricVehicle() {
		std::cout << "In electric vehicle deconstructor" << endl;
	}
	 float ElectricVehicle::calculateRange() {
		return (currentEnergy * 100 / Vehicle::getEngine());
	};

	 float ElectricVehicle::percentEnergyRemaining() {
		return currentEnergy / maxEnergy * 100.0f;
	};

	 void ElectricVehicle::drive(float km) {
		currentEnergy -= (km / 100);
	};

	void ElectricVehicle::setmaxEnergy(float max) {
		maxEnergy = max;
	};
	float ElectricVehicle::getmaxEnergy() {
		return maxEnergy;
	};

	void ElectricVehicle::setcurrentEnergy(float cur) {
		currentEnergy = cur;
	};

	float ElectricVehicle::getcurrentEnergy() {
		return currentEnergy;
	};