#include <iostream>
using namespace std;
int main()
{
	//int x[5]={1,2,3,4,5}
	int num;
	cout << "Enter the size of array: ";
	cin >> num;
	int x[num];
	for(int i=1;i<=num;i++){
		cout << "Enter element number " << i << ": " ;
		cin >> x[i];
	}
	cout << "The elements are: " ;
	for(int i=1; i<=num; i++){
		cout << x[i] << " ";
	}
	//reverse
	cout << endl <<"The elements in reverse are: " ;
	for(int i=num; i>=1; i--){
		cout << x[i] << " ";
	}
	return 0;
}
