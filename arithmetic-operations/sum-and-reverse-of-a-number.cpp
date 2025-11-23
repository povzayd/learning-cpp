#include <iostream>
using namespace std;
int main()
{
	int num,out,sum=0;
	cout << "Enter a number: " ;
	cin >> num ;
	cout << "The reverse of the number " << num << " will be ";
	while(num!=0){
		out=num%10;
		cout << out ;
		sum+=out;
		num/=10;
	}
	cout << endl <<"The sum of the digits of the number will be " << sum << ".";
	return 0;
}