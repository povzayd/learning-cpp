#include <iostream>
using namespace std;
int main(){
	int x[]={1,2,3,4,5,6};
	int product=1;
	int n = sizeof(x)/4;
	for(int i=0;i<n;i++){
		product*=x[i];
	}
	cout << product ;
}
