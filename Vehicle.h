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

		int  getDoors();
		int  getWheels();

		void setDoors(int d);

		void setWheels(int q);
	};