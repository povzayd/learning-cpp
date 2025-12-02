#include <iostream>
using namespace std;
int main()
{
	int index[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			index[i][j]=10;
			cout << index[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}
