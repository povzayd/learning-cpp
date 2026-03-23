#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream inFile;
	ofstream onFile;
	char str;
	inFile.open("./file1.txt");
	onFile.open("./file2.txt");
	while(inFile.get(str)){
		onFile.put(str);
	}
	cout << "Data Copied";
	inFile.close();
	onFile.close();
}