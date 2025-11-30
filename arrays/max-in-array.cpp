#include <iostream>
#include <climits>
using namespace std;
int main(){
	int x[]={-1,0,999,12,44,99};
	int size= sizeof(x)/4;
	int maxi=INT_MIN;
	for(int i=1; i<size; i++){
		if(x[i]>maxi)
			maxi = x[i];
		//maxi = max(maxi, x[i]);
	}
	cout << maxi;
}
