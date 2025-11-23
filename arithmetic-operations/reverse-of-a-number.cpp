#include <iostream>
using namespace std;
int main()
{
	int num,out;
	cout << "Enter a number: " ;
	cin >> num ;
	while(num!=0){
		out=num%10;
		cout << out;
		num/=10;
	}
	return 0;
}