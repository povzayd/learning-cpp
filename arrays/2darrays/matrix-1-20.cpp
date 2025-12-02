#include <iostream>
using namespace std;
int main(){
	int x[100][100];
	int one=0,sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			x[i][j]=++one;
			cout << x[i][j] << "   ";
		}
		cout << endl ;
	}
}
