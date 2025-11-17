#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "PLEASE ENTER A NUMBER: ";
	cin >> num;
	if(num%5==0 || num%3==0){
		if(num%5==0 && num%3==0){
		    cout << "THE NUMBER " << num << " IS DIVISIBLE BY BOTH 3 & 5.";
	    }
	    else if(num%3==0){
	    	cout << "THE NUMBER " << num << " IS DIVISIBLE BY 3 ONLY.";
	    }
	    else
	    {
	    	cout << "THE NUMBER " << num << " IS DIVISIBLE BY 5 ONLY.";
	    }
    }
	else{
		cout << "ATMKBFJG";
	}
	return 0;
}