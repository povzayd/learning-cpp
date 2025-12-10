#include <iostream>
using namespace std;
class Vehicle{
public:
	int topspeed;
	float mileage;
	string fuel;
};
class Car : public Vehicle{
	bool Sunroof;
}
class Bike : public Vehicle{
	int gears;
}
class Truck : public Vehicle{
	int space;
}
int main(){

}
