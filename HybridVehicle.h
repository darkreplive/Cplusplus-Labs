//040979598
//November 5th 2021
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

	 float calculateRange();

	 float percentEnergyRemaining();

	 void drive(float km);

};