#include <iostream>
using namespace std;
void showInfo(int age){
	cout << age << endl;
}
void showInfo(string name){
	cout << name << endl;
}
void showInfo(double marks){
	cout << marks << endl;
}
int main()
{	
	showInfo(12);
	showInfo("superadmin");
	showInfo(92.32);
	return 0;
}