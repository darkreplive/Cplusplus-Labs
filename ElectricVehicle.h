//040979598
//November 5th 2021
#pragma once
#include"Vehicle.h"
class ElectricVehicle : public Vehicle {
	float maxEnergy;
	float currentEnergy;
public:
	ElectricVehicle();
	ElectricVehicle(float max, float efficiency);
	~ElectricVehicle();
	 float calculateRange();

	 float percentEnergyRemaining();

	 void drive(float km);

	void setmaxEnergy(float max);
	float getmaxEnergy();

	void setcurrentEnergy(float cur);

	float getcurrentEnergy();

};