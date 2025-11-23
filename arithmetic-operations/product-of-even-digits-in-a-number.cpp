#include <iostream>
using namespace std;
int main(){
	int num,product=1;
	cout << "Enter a number: " ;
	cin >> num ;
	while(num!=0){
		if(num%2==0){
			product*=num%10;
		}
		num/=10;
	}
	cout << product << endl;
	return 0;
}