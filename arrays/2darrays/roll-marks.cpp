#include <iostream>
using namespace std;
int main()
{
	int details[4][2]={{1,25},{2,26},{3,27},{4,28}};
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			cout << details[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}
