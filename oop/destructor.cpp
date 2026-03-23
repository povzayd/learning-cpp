#include <iostream>
using namespace std;
class A{
	int a;
public:
	A(){
		a = 100;
		cout << a << endl;
	}
	~A(){
		cout << "OBJECT DESTROYED!";
	}
};
int main(){
	A obj;
}