#include <iostream>
using namespace std;
class Person{
	string name;
	int age;
	string address;
public:
	void input(){
		cout << "Enter The Name: ";
		cin >> name;
		cout << "Enter The Age: ";
		cin >> age;
		cout << "Enter The Email Address: ";
		cin >> address;
		cout << "============================" << endl;
	}
	void show(){
		cout << "Name: "<< name << endl;
		cout << "Age: "<< age << endl;
		cout << "Email Address: "<< address << endl;
		cout << "============================" << endl;
	}
};
int main(){
	Person p1, p2, p3;
	p1.input();
	p2.input();
	p3.input();
	p1.show();
	p2.show();
	p3.show();

}