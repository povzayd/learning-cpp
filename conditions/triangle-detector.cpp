#include <iostream>
using namespace std;
int main(){
	int side1,side2,side3;
	cout << "ENTER THE FIRST SIDE OF THE TRIANGLE: ";
	cin >> side1;
	cout << "ENTER THE SECOND SIDE OF THE TRIANGLE: ";
	cin >> side2;
	cout << "ENTER THE THIRD SIDE OF THE TRIANGLE: ";
	cin >> side3;
	if((side1+side2)>side3 && (side1+side3)>side2 && (side1+side3)>side1){
		cout << "THE GIVEN PARAMETERS ARE POSSIBLE.";
	}
	else{
		cout << "NOT POSSIBLE";
	}
	return 0;
}