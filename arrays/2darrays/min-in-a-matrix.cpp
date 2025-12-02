#include <iostream>
#include <climits>
using namespace std;
int main(){
	int x[3][2]={{7,77},{3,4},{5,-6}};
	int mini= INT_MAX;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mini=min(mini,x[i][j]);
		}
	}
	cout << mini;
	return 0;
}