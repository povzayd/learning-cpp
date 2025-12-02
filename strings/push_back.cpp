#include <iostream>
using namespace std;
int main(){
	string x = "Mich";
	cout << x << endl;
	x.push_back('a');
	cout << x << endl;	
	x.push_back('e');
	cout << x << endl;
	x.push_back('l');
	cout << x << endl;
	x.pop_back();
	cout << x << endl;
	x.pop_back();
	cout << x << endl;
	x.pop_back();
	cout << x << endl << endl;
	
	x.append("hael Bay");
	cout << x << endl;
	x.clear();
	cout << x << endl;
	cout << "==================" << endl;
	x = "Michael Bay";
	x = x + " Director.";
	cout << x << endl;
	x.clear();
	x = "Michael Bay";
	x = "Directed By " + x;
	cout << x << endl;
}