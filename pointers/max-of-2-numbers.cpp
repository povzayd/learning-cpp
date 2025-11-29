#include <iostream>
using namespace std;
int maxof2(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int num1,num2;
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	cout << "The Biggest Number Is: " << maxof2(num1,num2);
	return 0;	
}
