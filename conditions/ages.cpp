#include <iostream>
using namespace std;
int main(){
	int ram,shyam,ajay;
	cout << "Enter Ram's Age: " ;
	cin >> ram ;
	cout << "Enter Shyam's Age: " ;
	cin >> shyam ;
	cout << "Enter Ajay's Age: " ;
	cin >> ajay ;
	if(ram<shyam && ram<ajay){
		cout << "Ram is the youngest.";
	}
	else if(ram>shyam && shyam<ajay){
		cout << "Shyam is the youngest.";
	}
	else {
		cout << "Ajay is the youngest.";
	}
	return 0;

}