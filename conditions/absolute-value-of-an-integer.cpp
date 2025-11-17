#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter An Integer: " ;
	cin >> num;
	if(num>=0){
		cout << "The absolute value of " << num << " is " << num << ".";
	}
	else{
		cout << "The absolute value of " << num << " is " << (-1*num) << ".";
	}
	return 0;

}