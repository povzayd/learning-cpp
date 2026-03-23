#include <iostream>
using namespace std;
class Student{
protected:
	string name;
	int age;
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
class School:public Student
{
public:
	void display(){
		cout << endl << "Hello " << name << "! How are you? You told that you are " << age << " years old.";
	}
};
int main(){
	School c1;
	c1.input();
	c1.show();
	c1.display();
}

