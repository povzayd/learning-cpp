/*
input a string of len>5 & reverse the substring from **position**(no index!!!!!!!!!) 2 to 5 using inbuilt functions
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	string x;
	cout << "Enter a string: ";
	cin >> x;
	cout << "Your String: " << x << endl << "=================" << endl << "Inter-Changing Position 2 to 6: ";
	int len= x.length();
	reverse(x.begin()+1,x.begin()+5);
	cout << x << endl;
}
