#include <iostream>
using namespace std;
int main(){
	int row,col;
	cout << "Enter Number Of Rows: ";
	cin >> row;
	cout << "Enter Number OF Columns: ";
	cin >> col;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			cout << char(j+64) << " ";
	}
	cout << endl;
}
	return 0;
}
