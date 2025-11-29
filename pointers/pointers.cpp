#include <iostream>
using namespace std;
int main(){
	int x=10;
	int* p= &x;
	cout << x << endl;
	cout << p << endl;
	cout << *p << endl;
	//changing value of x
	*p =66;
	cout << x << endl;
	return 0;
}
