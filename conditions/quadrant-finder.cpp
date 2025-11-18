#include <iostream>
using namespace std;
int main(){
	float x,y;
	cout << "+++()()QUADRANT-FINDER()()+++" << endl;
	cout << "Enter The 'x' COORDINATE: ";
	cin >> x;
	cout << "Enter The 'y' COORDINATE: ";
	cin >> y;
	if(x>0 && y>0){
		puts("The Point Lies In The First Quadrant.");
	}
	else if(y==0){
		puts("The Point Lies On The x Axis.");
	}
	else if(x==0){
		puts("The Point Lies On The y Axis.");
	}
	else if(x<0 && y>0){
		puts("The Point Lies In The Second Quadrant.");
	
	}
	else if(x<0 && y<0){
		puts("The Point Lies In The Third Quadrant.");
	}
	else if(x>0 && y<0){
		puts("The Point Lies In The Fourth Quadrant.");
	}
	else {
		puts("The Point Is The Origin.");
	}
	return 0;
}
//updated & fixed!!!!
