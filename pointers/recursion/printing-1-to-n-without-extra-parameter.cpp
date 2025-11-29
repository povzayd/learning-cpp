#include <iostream>
using namespace std;
void printing(int a){
	if(a==0)
		return;
	printing(a-1);
	cout << a << endl;
}
int main(){
	int num;
	cout << "Enter A Number: ";
	cin >> num;
	printing(num);
}
