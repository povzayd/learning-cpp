#include <iostream>
using namespace std;
class Scooty{ // parent class
public:
	int topSpeed;
	float mileage;
private:
	int bootspace;
};
class Bike : public Scooty{ //child class. aka derived class
	int gears;
};
int main()
{
	Bike b1;
	b1.topSpeed = 200;
	b1.mileage = 50.33;
	b1.gears = 6;
	return 0;
}
