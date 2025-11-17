#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Enter The Number You Want To Print From: ";
	cin >> a;
	cout << "Enter The Number You Want To Print To: ";
	cin >> b;
	for(int i=a; i<=b; i++){
		cout << i << endl;
	}
	return 0;
}
