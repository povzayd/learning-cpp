#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter A Number: ";
	cin >> num;
	if(num%5==0){
		cout << "Yes, The given number " << num << " is divisible by 5.";
	}
	else{
		cout << "Ahh shit! Here we go again.";
	}
	return 0;
}