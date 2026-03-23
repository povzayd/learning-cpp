#include <iostream>
using namespace std;
class A{
	int a;
	int b;
public:
	A(int x, int y){
		a=x;
		b=y;
		cout << "Product: " << a*b ;
	}
};
int main(){
	A obj(12,12);

}
