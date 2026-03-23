#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int value = remove("./file2.txt");
	if(value == 0){
		cout << "Removed File Successfully";
    }
	else{
		cout << "Chud gaye guru!!";
	}
}