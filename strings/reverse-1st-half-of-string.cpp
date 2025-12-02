#include <bits/stdc++.h>
using namespace std;
int main(){
	string x = "String";
	cout << x << endl;
	int len=x.length();
	reverse(x.begin(),x.end()-len/2);
	cout << x << endl;;
}
