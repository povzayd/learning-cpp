#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int x[]={4,5,6,7,9,4,2};
	int max1= INT_MIN;
	int size=sizeof(x)/4;
	for(int i=0;i<size;i++){
		max1 = max(max1,x[i]);
	}
	int max2=INT_MIN;
	for(int i=0;i<size;i++){
		if(x[i]!=max1){
		max2 = max(max2,x[i]);
	}
}
	cout << max2;
	return 0;
}
