#include "GasolineVehicle.h"
GasolineVehicle::GasolineVehicle() {};
GasolineVehicle::GasolineVehicle(float max, float efficiency) {
	maxGasoline = max;
	currentGasoline = max;
	Vehicle::setEngine(efficiency);
};
GasolineVehicle::~GasolineVehicle() {
	cout << "In gasoline vehicle deconstructor" << endl;
}
 float GasolineVehicle::calculateRange() {
	return (currentGasoline * 100 / Vehicle::getEngine());
};

 float GasolineVehicle::percentEnergyRemaining() {
	return currentGasoline / maxGasoline * 100.0f;
};

 void GasolineVehicle::drive(float km) {
	currentGasoline -= (km / 100);
};

void GasolineVehicle::setmaxGasoline(float max) {
	maxGasoline = max;
};
float GasolineVehicle::getmaxGasoline() {
	return maxGasoline;
};

void GasolineVehicle::setcurrentGasoline(float cur) {
	currentGasoline = cur;
};

float GasolineVehicle::getcurrentGasoline() {
	return currentGasoline;
};