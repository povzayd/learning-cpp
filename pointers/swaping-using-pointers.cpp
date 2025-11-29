#include <iostream>
using namespace std;
void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int a,b;
	cout << "Enter 1st Number: " ;
	cin >> a;
	cout << "Enter 2nd Number: " ;
	cin >> b;
	cout << "The 1st Number is " << a << " And The Second Number Is " << b << endl;
	swap(&a,&b);
	cout << "Swaping........................"<< endl;
	cout << "Now The 1st Number is " << a << " And The Second Number Is " << b << endl;
	return 0;
}
