#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string str;
	ifstream inFile;
	inFile.open("./file1.txt");
	while(getline(inFile, str)){
		cout << str;
	}
	inFile.close();
}