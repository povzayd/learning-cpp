#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream onFile;
	onFile.open("./file1.txt");
	onFile<<"This is a text present in file1.txt";
	cout << "File created!";
	onFile.close();
}