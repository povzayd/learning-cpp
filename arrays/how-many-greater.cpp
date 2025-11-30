#include <iostream>
using namespace std;
int main()
{
	int x[]={1,2,3,4,5,6,7,8,9,99,5,1,2};
	int a=3;
	int count=0;
	int num= sizeof(x)/4;
	for(int i=0; i<num; i++){
		if(a<x[i]){
			count+=1;
		}
	}
	cout << count;
	return 0;
}
