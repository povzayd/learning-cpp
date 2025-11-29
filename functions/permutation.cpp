#include <iostream>
using namespace std;
int factorial(int a){
	int product1=1;
	for (int i=1;i<=a;i++){
		product1*=i;
	}	
	return product1;
}
int main(){
	int num,r,x,y;
	cout << "Enter n: ";
	cin >> num;
	cout << "Enter n: ";
	cin >> r;
	x= factorial(num);
	y= factorial(num-r);
	cout << "The permutations will be: " << (float)x/(float)y;
}
