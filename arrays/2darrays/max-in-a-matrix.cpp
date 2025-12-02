#include <iostream>
#include <climits>
using namespace std;
int main(){
	int x[3][2]={{1,77},{3,4},{5,6}};
	int maxi= INT_MIN;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			maxi=max(maxi,x[i][j]);
		}
	}
	cout << maxi;
	return 0;
}