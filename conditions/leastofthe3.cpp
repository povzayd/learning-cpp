#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout << "ENTER THE FIRST NUMBER: " ;
	cin >> x;
	cout << "ENTER THE SECOND NUMBER: " ;
	cin >> y;
	cout << "ENTER THE THIRD NUMBER: " ;
	cin >> z;
	if(x<y && x<z){
		cout << x << " IS THE LEAST NUMBER AMONG " << x << "," << y << " & " << z << ".";
	}
	else if (x>y && y<z){
		cout << y << " IS THE LEAST NUMBER AMONG " << x << "," << y << " & " << z << ".";

	}
	else {
		cout << z << " IS THE LEAST NUMBER AMONG " << x << "," << y << " & " << z << ".";
	}
	return 0;
}