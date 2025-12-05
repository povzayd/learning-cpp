#include <iostream>
using namespace std;
class Student
{
public:
	string name;
	int roll_no;
	float gpa;
	int age;
};
int main(){
	Student x;
	x.name = "Bruce Wayne";
	x.roll_no = 21;
	x.gpa = 3.4;
	x.age = 25;

	Student y;
	y.name = "Tom Holland";
	y.roll_no = 22;
	y.gpa = 3.3;
	y.age = 30;
	cout << x.name << " " << x.roll_no << " "<< x.gpa << " "<< x.age<< endl;
	cout << y.name << " " << y.roll_no << " "<< y.gpa << " "<< y.age<< endl;

}