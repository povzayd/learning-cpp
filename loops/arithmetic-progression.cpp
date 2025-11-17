#include <iostream>
using namespace std;
int main(){
	// a+ (n-1)d
	int first_term, last_term, common_diff, till;
	cout << "ARITHMETIC PROGRESSION GENERTAOR" << endl ;
	cout << "Enter The First Term: ";
	cin >> first_term;
	cout << "Enter How Many Terms You Want To: ";
	cin >> last_term;
	cout << "Enter The Common Difference: ";
	cin >> common_diff;
	till=first_term + ((last_term-1)*common_diff);
	for(int i=first_term; i<=till; i+=common_diff){
		cout << i << endl ;
 	}

}