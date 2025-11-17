#include <iostream>
using namespace std;
int main(){
	int cost_price,selling_price;
	cout << "^-^Profit=+=Loss=+=Calculator^-^" << endl;
	cout << "Enter your cost price: ";
	cin >> cost_price;
	cout << "Enter your selling price: ";
	cin >> selling_price;
	if (cost_price>selling_price){
		cout << "35 lakh ka to apna investment hai, 36 lakh ka ghata kaise hoo gaya?" << endl;
		cout << "App "<< (selling_price-cost_price) << " ke profit me hain.";
	}
	else if(cost_price==selling_price){
		cout << "Aese ghar nhi chalta mitr!!!!";
	}
	else{
		cout << "Paisa bohot hai mere jaan par sukoon hi nhi hai!" << endl;
		cout << "App ne " << (selling_price-cost_price) << " kama liye.";
	}
	return 0;
}
