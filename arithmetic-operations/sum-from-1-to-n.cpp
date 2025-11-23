#include <iostream>
using namespace std;
int main(){
	int num,sum=0,sum2=0,choice;
	cout << "Enter the number: ";
	cin >> num;
	cout << "How do you want to proceed?"<< endl << "If you want to use for loop, type '1' if you want to solve this using the formula type '2': ";
	cin >> choice ;
	if(choice==1){
	for(int i=0;i<=num;i++){
		sum+=i;
	}
	cout << "The sum of numbers from 1 to " << num << " will be " << sum << ".";
	}
	else{
		sum2= num*(num+1)/2;
		cout << "The sum of numbers from 1 to " << num << " will be " << sum2 << ".";

	}
//	cout << "The sum of numbers from 1 to " << num << " will be " << sum << ".";
	return 0; 
}