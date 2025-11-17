#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "PLEASE ENTER A NUMBER: ";
	cin >> num;
	if(num%5==0 && num%3==0){
		cout << "THE NUMBER " << num << " IS DIVISIBLE BY BOTH 5 & 3.";
	}
	else{
		cout << "ATMKBFJG";
	}
	return 0;
}