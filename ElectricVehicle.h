#pragma once
#include"Vehicle.h"
class ElectricVehicle : public Vehicle {
	float maxEnergy;
	float currentEnergy;
public:
	ElectricVehicle();
	ElectricVehicle(float max, float efficiency);
	~ElectricVehicle();
	virtual float calculateRange();

	virtual float percentEnergyRemaining();

	virtual void drive(float km);

	void setmaxEnergy(float max);
	float getmaxEnergy();

	void setcurrentEnergy(float cur);

	float getcurrentEnergy();

};