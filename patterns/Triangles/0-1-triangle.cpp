/*
1
01
101
0101
10101
010101
if((r+c)%2==0)===> 1
else=0
*/
#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	for(int i=1; i<=num; i++){
		for(int j=1;j<=i; j++){
			if((i+j)%2==0){
				cout << "1" << " ";
			}
			else{
				cout << "0" << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
