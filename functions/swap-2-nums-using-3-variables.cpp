#include <iostream>
using namespace std;
void swap(int& x, int& y){
	int temp;
	temp = x;
	x=y;
	y=temp;
	cout << "======================================" << endl;
}
int main(){
	int a,b;
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "Enter 2nd Number: ";
	cin >> b;
	cout << "The Current Value Of The 1st Number Is: " << a << endl;
	cout << "The Current Value Of The 2nd Number Is: " << b << endl;
	swap(a,b);
    cout << "Now The Value Of The 1st Number Is: " << a << endl;
	cout << "And The Value Of The 2nd Number Is: " << b << endl;
	return 0;
}
