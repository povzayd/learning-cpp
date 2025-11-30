#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter A Number: ";
	cin >> num;
	int x[num];
	for(int i=0;i<=num-1;i++)
	{
		x[i]=(i+1) * (i+1);
	}
	for(int i=0;i<=num-1;i++)
	{
		cout << x[i] << " ";
	}
}
