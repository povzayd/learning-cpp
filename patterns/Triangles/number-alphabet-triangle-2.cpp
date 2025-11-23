#include <iostream>
using namespace std;
int main(){
	int height;
	cout << "Enter the height: ";
	cin >> height;
	for(int i=1;i<=height;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0){
			cout << char(j+64);
		}
		else{
			cout << j ;
		}
		}
		cout << endl;
	}
	return 0;
}