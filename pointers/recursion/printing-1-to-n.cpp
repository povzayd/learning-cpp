#include <iostream>
using namespace std;
void printing(int num1,int num2){
	if(num1>num2)
		return;
	cout << num1 << endl;
	printing(num1+1,num2);
}
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;	
	printing(1,num);
}