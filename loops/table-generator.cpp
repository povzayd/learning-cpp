#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "=*=TABLE=*=GENERATOR=*=" << endl ;
	cout << "Enter A Number: " ;
	cin >> num;
	for(int i=1;i<=10;i++){
		cout << num << " * " << i << " = " << (num * i) << endl;
	}
	return 0;
}