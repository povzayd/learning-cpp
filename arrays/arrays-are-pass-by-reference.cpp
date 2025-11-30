#include <iostream>
using namespace std;
void change(int a[]){
	a[0]=6;
}
int main()
{
	int x[5]={1,2,3,4,5};
	for(int i=0; i<=4; i++){
	cout << x[i] << " ";
}
	change(x);
	cout << endl;
	for(int i=0; i<=4; i++){
	cout << x[i] << " ";
}
	return 0;
}
/*Arrays are pass by reference not pass by value!!*/