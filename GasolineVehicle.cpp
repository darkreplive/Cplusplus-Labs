#include "Vehicle.cpp"
class GasolineVehicle : public Vehicle {
	int maxEnergy;
	float efficiencyRating;
public:
	GasolineVehicle(int max, float efficiency) {
		maxEnergy = max;
		efficiencyRating = efficiency;
	};
};