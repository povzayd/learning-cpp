#include <iostream>
using namespace std;
int main(){
	int num,last_digit,product=1;
	cout << "Enter A Number: ";
	cin >> num;
	while(num!=0){
		last_digit=num%10;
		if(last_digit==0){
			// last_digit+=1;
			// product*=last_digit;
			cout << "Your Number Contains A Zero. Enter A Number Without Zero!!" ;
			return 0;
		}
		else
		{
			product*=last_digit;
		}
		num/=10;
	}
	cout << product ;
	return 0;
}