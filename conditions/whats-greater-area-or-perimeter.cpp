#include <iostream>
using namespace std;
int main(){
	int len,width,area,perimeter;
	cout << "PROGRAM TO COMPARE AREA & PERIMETER OF A RECTANGLE!" << endl;
	cout << "Enter the lenght: ";
	cin >> len;
	cout << "Enter the width: ";
	cin >> width;
	area = (len*width);
	perimeter = 2*len+2*width;
	if(area>perimeter){
		cout << "THE AREA IS GREATER THEN PERIMETER.";
	}
	else if(area<perimeter){
		cout << "THE AREA IS SMALLER THEN PERIMETER.";
	}
	else{
		cout << "THE AREA & PERIMETER ARE EQUAL!!";

	}
	return 0;
}

