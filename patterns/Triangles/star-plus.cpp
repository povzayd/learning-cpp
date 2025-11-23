/*
12345
##*##1
##*##2
*****3
##*##4
##*##5
===============

1234567
###*### 1
###*### 2
###*### 3
******* 4
###*### 5
###*### 6
###*### 7

printing this???

*/
#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter A Number(ODD Only): ";
	cin >> num;
	if(num%2==0){
		cout << "Only Odd Numbers Are Accepted.";
	}
	else{
	cout << ":::Printing=The=Star=Pattern:::" << endl;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i==(num/2+1) || j==(num/2+1)){
				cout <<"*" ;
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
	return 0;

}