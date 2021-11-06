//040979598
//November 5th 2021
#pragma once
#include <iostream>
using namespace std;
class Vehicle {
		int numWheels;
		int numDoors;
		float engineEfficiency;
	public:
		
		Vehicle(Vehicle&);
		Vehicle(Vehicle*);
		Vehicle(int w, int d);
		Vehicle(int w);
		Vehicle();
		virtual ~Vehicle();
		Vehicle& operator=(Vehicle& other);
		bool operator==(const Vehicle&);
		bool operator!=(const Vehicle&);

		Vehicle& operator++(void);

		Vehicle& operator++(int i);

		Vehicle& operator--(void);

		Vehicle& operator--(int i);

		int  getDoors()const;
		int  getWheels()const;
		float getEngine() {
			return engineEfficiency;
		};
		void setDoors(int d);
		void setWheels(int q);
		void setEngine(float e) {
			engineEfficiency = e;
		}

		virtual float calculateRange()=0;
		virtual float percentEnergyRemaining()=0;
		virtual void drive(float km)=0;

	};

/*std::ostream& operator<<(std::ostream& out, const Vehicle& v) {
	out << "Wheels are: " << v.getWheels() << " Doors are: " << v.getDoors();
	return out;
} */


