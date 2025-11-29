#include <iostream>
using namespace std;
int power(int a,int b){
	if(a==1 || b==0){
		return 1;
	}
	return a * power(a,(b-1));
}
int main(){
	int base,exp;
	cout << "Enter The Base: ";
	cin >> base;
	cout << "Enter The Power: ";
	cin >> exp;
	cout << base << " To The Power Of " << exp << " Is Equal To " << power(base,exp) << ".";
}