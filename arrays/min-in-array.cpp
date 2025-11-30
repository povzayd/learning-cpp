#include <iostream>
#include <climits>
using namespace std;
int main(){
	int x[]={-1,0,999,12,44,-99};
	int size= sizeof(x)/4;
	int mini=INT_MAX;
	for(int i=1; i<size; i++){
		mini = min(mini, x[i]);
	}
	cout << mini;
}
