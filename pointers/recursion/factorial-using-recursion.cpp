#include <iostream>
using namespace std;
int factorial(int a){
	if(a==1 || a==0)
		return 1;
	return a * factorial(a-1);
}
int main(){
	int num;
	cout << "Enter A Number: ";
	cin >> num;
	cout << factorial(num)<< endl;
}