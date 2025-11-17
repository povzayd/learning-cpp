#include <iostream>
using namespace std;
int main(){
	float principle=1222,rate=2,time=22;
	float simpleint=(principle*rate*time)/100;
	cout << "<<SIMPLE INTEREST CALCULATOR>>" << endl << "ENTER YOUR PRINCIPLE: ";
	cout << "The Total Amount Will Be: " << (simpleint + principle) << " Only.";
	return 0;
}
