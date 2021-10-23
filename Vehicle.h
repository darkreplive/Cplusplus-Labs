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
		Vehicle& operator=(Vehicle& other);
		bool operator==(const Vehicle&);
		bool operator!=(const Vehicle&);

		Vehicle& operator++(void);

		Vehicle& operator++(int i);

		Vehicle& operator--(void);

		Vehicle& operator--(int i);

		int  getDoors()const;
		int  getWheels()const;
		void setDoors(int d);
		void setWheels(int q);
		
	};
std::ostream& operator<<(std::ostream& out, const Vehicle& v) {
	out << "Wheels are: " << v.getWheels() <<" Doors are: "<< v.getDoors();
	return out;
}