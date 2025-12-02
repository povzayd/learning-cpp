#include <iostream>
using namespace std;
int main(){
	string x="Hello! My name is antony.";
	cout << "Before: " << endl << x << endl<< "After: " << endl;
	for(int i=0; i<x.size();i++){
		if(i%2==0)
			x[i]='a';
	}
	cout << x ;

}
