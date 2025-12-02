#include <iostream>
using namespace std;
int main(){
	string x;
	int vowels=0;
	cout << "Enter A String: ";
	cin >> x;
	for(int i=0; i<x.length(); i++){
		if(x[i]=='a' || x[i]=='A' || x[i]=='e' || x[i]=='E' || x[i]=='i' || x[i]=='I' || x[i]=='o' || x[i]=='O' || x[i]=='u' || x[i]=='U'){
			vowels+=1;
		}
		
	}
cout << vowels << endl;
}