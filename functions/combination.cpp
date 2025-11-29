#include <iostream>
#include <cmath>
using namespace std;

int factorial(int a){
	int product1=1;
	for (int i=1;i<=a;i++){
		product1*=i;
	}	
	return product1;
}
int main(){
	int num,r,x,y,z;
	cout << "Enter n: ";
	cin >> num;
	cout << "Enter r: ";
	cin >> r;
	x= factorial(num);
	y= factorial(r);
	z= factorial(num-r);
	cout << "The Combinations Will Be:" << (float)x/(float)(y*z);
}