#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "=+=Highest=+=Factor=+=Calculator=+=" << endl;
	cout << "Please Enter A Number: ";
	cin >> num;
	for(int i=num/2;i>=1;i--){
		if(num%i==0){
			cout << i << endl;
			break;
		}

	}
	return 0;
}
