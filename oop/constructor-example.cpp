#include <iostream>
using namespace std;
class CAR{
public:
	string name;
	string type;
	int price;
	int seats;
	int year;

	CAR(int y, string n, string t, int p, int s){//constructor created by user. aka parameterised constructor.///001 same as 002 but the order is different.
		name =n;
		type =t;
		price =p;
		seats =s;
		year =y;
	}

	CAR(string n, string t, int p, int s, int y){//constructor created by user. aka parameterised constructor.///002
		name =n;
		type =t;
		price =p;
		seats =s;
		year =y;
	}
	CAR(string n, string t, int p, int s){//we can also write multiple constructors..
		name =n;
		type =t;
		price =p;
		seats =s;
	}
	CAR(){}//default constructor.

};
void print(CAR c){
	cout << "Name: " << c.name << "  " << "Type: " << c.type  << "  " << "Price: " << c.price  << "  " << "Capacity: " << c.seats<< " People"   << "  " << "Year: " << c.year  << "  " << endl;
}
int main(){
	CAR c1("Porche 911", "Sedan", 123456, 5, 2025);//using a constructor to add details..but the oder of the details should be same.
	print(c1);
	CAR c2;
	c2.name = "BMW M5";
	c2.type = "Sedan";
	c2.price = 654321;
	c2.seats = 5;
	c2.year = 2025;
	print(c2);
	CAR c3("Autobiography", "SUV", 456789, 5);
	c3.year = 2025;
	print(c3);
	CAR c4(2025, "MG Hector", "HatchBack", 65432, 7);
	print(c4);
	CAR c5 = c1;// Deep copy as there are no changes in c1.
    c5.name = "Land Rover Velar";
    print(c5);
    CAR c6(c1); // copy constructor. also deep copy as there are no changes in c1.
    c6.name = "Suzuki Swift";
    print(c6);
}
