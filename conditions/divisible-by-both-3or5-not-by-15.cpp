#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "ENTER A NUMBER: ";
	cin >> num;
	if((num%3==0 || num%5==0) && (num%15!=0)){
	    cout << "THE GIVEN NUMBER IS DIVISIBLE BY 5 OR 3 BUT NOT BY 15!!";
    }
    else{
    	cout << "NAH! THE GIVEN NUMBER ISN'T SO.";
    }
	return 0;
}