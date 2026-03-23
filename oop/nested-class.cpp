#include <iostream>
using namespace std;
class A{

public:
	class B{ // Member variable of class A.
		int a,b;
	public:
		void input(){
			cout << "Enter 1st Number: ";
			cin >> a;
			cout << "Enter 2nd Number: ";
			cin >> b;
		}
		void show(){
			cout << "Product: " << a*b; //member function of class B
		}
	};
};
int main(){
	A::B obj1;
	obj1.input();
	obj1.show();
}