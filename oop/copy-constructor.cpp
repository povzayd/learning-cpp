#include <iostream>
using namespace std;
class A{
	int a,b;
public:
	A(int x, int y){
		a=x;
		b=y;
	}
	A(A &ref){
		a = ref.a;
		b = ref.b;
	}
	void show(){
		cout << a << "  " << b << endl;
	}
};
int main(){
	A obj1(1,2);
	A obj2=obj1;
	obj1.show();
	obj2.show();
}