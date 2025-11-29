/*
0 1 2 3 4 5
0 1
1 1 1
2 1 2 1
3 1 3 3 1
4 1 4 6 4 1 0
5 1 5 10 10 5 1
It uses the 5C3 formula = 5!/(3!*(5-3)!)
*/
#include <iostream>
using namespace std;
int factorial(int a){
	int product1=1;
	for (int q=1;q<=a;q++){
		product1*=q;
	}	
	return product1;
}
int main(){
	int num,num1,num2,num3;
    cout << "Enter A Number: ";
    cin >> num;
	for(int i=0;i<=num;i++){
		for(int j=0;j<=i;j++){
		num1=factorial(i);
		num2=factorial(j);
		num3=factorial(i-j);

		cout << num1/(num2*num3)<< " ";
		}
		cout << endl;
	}
}