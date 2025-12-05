//dynamic allocation happns at run time. Mtlb ye jo int 123 hai ye run time pr allocate hogi memory naki compilation time pr.
#include <iostream>
using namespace std;
int main(){
	int *x = new int(123);//int of value 123 dynamically allocated.Stored in heap memory
	int *y = new int[10];//array of size 10 dynamically allocated.Stored in heap memory
	cout << *x << endl;
}