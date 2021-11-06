#pragma once
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"
class HybridVehicle : public GasolineVehicle, public ElectricVehicle {
	float gasEfficiency;
	float electricEfficiency;
public:
	HybridVehicle();
	HybridVehicle(float maxGas, float gasEfficiency, float maxCharge, float electricEfficiency);
	~HybridVehicle();

	virtual float calculateRange();

	virtual float percentEnergyRemaining();

	virtual void drive(float km);

};