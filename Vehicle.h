#pragma once
class Vehicle {
		int numWheels;
		int numDoors;
	public:
		Vehicle(Vehicle&);
		
		Vehicle(Vehicle*);

		Vehicle(int w, int d);
		Vehicle(int w);
		Vehicle();
		~Vehicle();
		void printVehicle(Vehicle v);

		int  getDoors() {
			return numDoors;
		}
		int  getWheels() {
			return numWheels;
		}

		void setDoors(int d) {
			numDoors = d;
		}

		void setWheels(int q) {
			numWheels = q;
		}
	};