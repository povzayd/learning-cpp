#include <iostream>
using namespace std;
int main(){
	int x[]={1,2,3,4,5,6,7};
	int size = sizeof(x)/4;
	int y[size];
	for(int i=0;i<size;i++){
		int j = size-i-1;
		y[i] = x[j];
	}
	for(int i=0; i<size; i++){
		cout << y[i] << " ";
	}
}