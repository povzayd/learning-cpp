#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> v1;
	cout << v1.size() << endl;
	v1.push_back(222);
	v1.push_back(223);
	v1.push_back(224);
	cout << "After Push Back Size Will Be: " << v1.size() << endl;
	for(int i: v1){
		cout << i << "  " ; 
	}
	cout << endl;
	v1.pop_back();//removes last element from the vector..
	cout << "After Pop Back Size Will Be: " << v1.size() << endl;
	for(int i: v1){
		cout << i << "  "; 
	}
	cout << endl;
	vector <int> v2={1,2,3,4,5,6,7,8,9};
	cout << v2.front()<< "  ";// prints the 1st element from the vector.
    cout << v2.back()<< endl;// prints the last element from the vector.
    ////accessing a particular index
    cout << "Accessing element at index 5";
    cout << v2.at(5);


}
