#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "THIS PROGRAM TELLS WHETHER A NUMBER IS A 3 DIGIT NUMBER OR NOT?" << endl << "ENTER A NUMBER: ";
	cin >> num;
	if(num > 99 && num <= 999){
	    cout << "THE GIVEN NUMBER IS A 3 DIGIT NUMBER!!";
    }
    else{
    	cout << "NAH! THE GIVEN NUMBER ISN'T A 3 DIGIT NUMBER.";
    }
	return 0;
}