#include <iostream>
#include <climits>
using namespace std;
int main(){
	int sum=0;
	int x[3][2]={{1,77},{3,4},{5,6}};
	//int maxi= INT_MIN;
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			sum+=x[i][j];
		}
	}
	cout << sum;
	return 0;
}
