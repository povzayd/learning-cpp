#include <iostream>
using namespace std;
class Admin{
public:
	void show(){
		cout << "Hello World From Admin!";
	}

};
class User:public Admin{
public:
	void show(){
	cout << "Hello World From User!";
	}
};
int main(){
	User obj;
	obj.show();

}