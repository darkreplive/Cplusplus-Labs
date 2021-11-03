#include "Vehicle.cpp"
class ElectricVehicle : public Vehicle {
	int maxEnergy;
	float efficiencyRating;
public:
	ElectricVehicle(int max, float efficiency);
};