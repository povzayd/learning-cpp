#include <iostream>
using namespace std;
class Car{
public:
	string name;
	int price;
	int seats;
	string type;
};
void print(Car c){
	cout << "Name: "<<c.name << " " << "Price: "<< c.price << " " << "Seats: "<< c.seats << " " << "Type: "<< c.type << endl;
}
void change(Car c){
	c.price=99;//pass by value hota hai mitrrr.
}
void change2(Car& c){
	c.price=99;//pass by reference kr rahe hai mitrrr.
}
int main(){
	Car c1;
	c1.name = "Honda City";
	c1.price = 12345;
	c1.seats = 5;
	c1.type = "Sedan";
	//
	Car c2;
	c2.name = "MG Astor";
	c2.price = 54321;
	c2.seats = 5;
	c2.type = "Hatch Back";
	//
	Car c3;
	c3.name = "Defender";
	c3.price = 654321;
	c3.seats = 8;
	c3.type = "SUV";
	print(c1);
	change(c1);
	print(c1);
	change2(c1);
	print(c1);
	print(c2);
	print(c3);

	// cout << "Name: "<<c1.name << " " << c1.price << " " << c1.seats << " " << c1.type << endl;
	// cout << c2.name << " " << c2.price << " " << c2.seats << " " << c2.type << endl ;
	// cout << c3.name << " " << c3.price << " " << c3.seats << " " << c3.type << endl;
}