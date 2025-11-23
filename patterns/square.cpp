#include <iostream>
using namespace std;
int main(){
	int side;
	cout << "Enter Side: ";
	cin >> side;
	for(int i=1; i<=side;i++){
		for(int i=1;i<=side;i++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}