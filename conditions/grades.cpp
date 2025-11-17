#include <iostream>
using namespace std;
int main(){
	int percent;
	cout << "Input Your Marks Percentage: ";
	cin >> percent ;
	if(percent>=81){
		puts("Very Good!");
		if(percent>100){
				puts("Aukat me bkl!\n");
		}
	}
	else if(80>=percent && percent>=61){
		puts("Good!");
	}
	else if (60>=percent && percent>=41)
	{
		puts("Average!");
	}
	else{
		puts("Fail!!");
	}
	return percent;
}