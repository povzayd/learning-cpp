#include <iostream>
using namespace std;
int sum(int a){
	if(a==1)
		return 1;
	return a + sum(a-1);
}
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;	
	cout << sum(num) << endl;

}