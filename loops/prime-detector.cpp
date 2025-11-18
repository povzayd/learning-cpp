#include <iostream>
using namespace std;
int main()
{
	int num,num2;
	cout << "Enter a number: ";
	cin >> num;
	for(int i=num/2; i>=0; i--){
		if(num%i==0){
			num2 = i;
			break;
		}
	}	
	if (num2==1){
		cout << "The given number is a prime number!";
	}
	else {
		cout << "The Given Number Is A Composite Number.";
	}
    
	return 0;
}
