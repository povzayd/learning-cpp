/*
12345
*  *1
 * * 2
  *  3
 * * 4
*   *5
*/
#include <iostream>
using namespace std;
int main(){
	int rows;
	cout << "Enter Rows: ";
	cin >> rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
				if((i+j)==(rows+1) || (i==j)){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}