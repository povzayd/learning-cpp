#include <iostream>
using namespace std;
int sum(int x,int y){
	int ret;
	ret = x + y;
	return ret;
}
int main(){
	int a,b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << sum(a,b);
	return 0;
}
