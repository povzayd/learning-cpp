#include <iostream>
using namespace std;
int main(){
	int num;
	unsigned long long factorial=1;
	cout << "Enter A Number: ";
	cin >> num;
	for(int i=1;i<=num;i++){
		factorial*=i;
		cout << "Factorial of " << i << " will be " << factorial << endl;
	}
	return 0;
}
