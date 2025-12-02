#include <iostream>
using namespace std;
int main(){
	int x[2][3];
	x[0][0] = 6;
	x[0][1] = 1;
	x[0][2] = 2;
	x[1][0] = 3;
	x[1][1] = 4;
	x[1][2] = 7;
	for(int j=0;j<3;j++){
		for(int i=0; i<2;i++){
			cout << x[i][j] << "  ";
		}
		cout << endl;
	}	
}
