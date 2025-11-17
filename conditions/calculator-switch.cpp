#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	char operation;
	cout<<"CALCULATOR IN C++" << endl;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "Enter the operation(/,*,-,+,%): ";
	cin >> operation;
	switch(operation){
		case '+':
			cout << num1+num2;
			break;
		case '-':
			cout << num1-num2;
			break;
		case '*':
			cout << num1*num2;
			break;
		case '/':
			cout << (float)num1/(float)num2;
			break;
		default:
			cout << "ATMKBFJG";
	}
	return 0;
}