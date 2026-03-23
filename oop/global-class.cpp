#include <iostream>
using namespace std;
class Student{
	string name;
	string age;
public:
	void input(){
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Age: ";
		cin >> age;
	}
	void show(){
		cout << "Name: " << name << endl;
		cout << "Age: " << age;
	}

};
int main(){
	Student s1;
	s1.input();
	s1.show();
}

