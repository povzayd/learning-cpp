#include <iostream>
using namespace std;
int main(){
	int x[]={11,11,11,11,11,11,33};
	int sum=0;
	int n = sizeof(x)/4;
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	cout << sum ;
}
