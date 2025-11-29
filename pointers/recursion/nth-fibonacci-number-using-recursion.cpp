/*
0 1 1 2 3 5 8 13...........
0 1 2 3 4 5 6 7............
fibo(n)=fibo(n-1)+fibo(n-2)
follows eulers tour tree algo!!!
*/
#include <iostream>
using namespace std;
int fibo(int a){
	if(a==2 || a==1)
		return 1;
	return fibo(a-1) + fibo(a-2);
}
int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << fibo(num) << " " ;
}
