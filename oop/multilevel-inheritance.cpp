#include <iostream>
using namespace std;
class Vehicle{
public:
	int topspeed;
	float mileage;
	string fuel;
};
class TwoWheeler : public Vehicle{
public:
	bool Sunroof;
}
class Bike : public TwoWheeler{
public: 
	int gears;
}
class Truck : public TwoWheeler{
public:
	int space;
}
int main(){

}
