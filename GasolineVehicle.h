//040979598
//November 5th 2021
#pragma once
#include "Vehicle.h"
class GasolineVehicle : public Vehicle {
	float maxGasoline;
	float currentGasoline;
public:
	GasolineVehicle();
	GasolineVehicle(float max, float efficiency);
	~GasolineVehicle();
	 float calculateRange();

	 float percentEnergyRemaining();

	 void drive(float km);

	void setmaxGasoline(float max);
	float getmaxGasoline();

	void setcurrentGasoline(float cur);

	float getcurrentGasoline();
};