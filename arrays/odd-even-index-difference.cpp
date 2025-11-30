#include <iostream>
using namespace std;
int main()
{
	int x[]={1,2,3,4,5,6,7,8,9,99,5,1,2};
	int odd=0;
	int even=0;
	int size=sizeof(x)/4;
	for(int i=0; i<size;i++){
		if(i%2!=0){
			odd+=x[i];
		}
		if(i%2==0){
			even+=x[i];
		}
	}
	cout << odd << " - " << even << " = " << odd-even;

}
