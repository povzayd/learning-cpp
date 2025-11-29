#include <iostream>
using namespace std;
void printing(int q){
	if(q==0)
		return;
	cout << q << endl;
	printing(q-1);

}
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;	
	printing(num);
}