#include <iostream>
using namespace std;
class A{
	int a;
public:
	A()
	{
		a=100;
	}
	void show(){
		cout << a;
	}
};
int main(){
	A a1 = A();
	a1.show();

}