#include <iostream>
using namespace std;
int main(){
	int first_term,CommonRatio,number;
	//a x r(n-1)
	cout << "=+=GEOMETRIC=+=PROGRESSION=+=GENERATOR=+="<< endl;
	cout << "Enter your first term: ";
	cin >> first_term;
	cout << "Enter the common ratio: ";
	cin >> CommonRatio;
	cout << "Enter the number of terms you want: ";
	cin >> number;
	int term = first_term;
	for(int i=0;i<number;i++){
		cout <<term << endl;
		term = term*CommonRatio;
	}
}