#include <iostream>
using namespace std;
void fun(){
	class Apple
	{
		int a,b;
	public:
		void show(){
			cout << "Enter 1st Number: ";
			cin >> a;
			cout << "Enter 2nd Number: ";
			cin >> b;
			cout << "Product: " << a*b ;
		}
	};
	Apple a1;
	a1.show();
}
int main(){
	fun();
}