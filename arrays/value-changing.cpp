/*changing the value of 
-all odd index items to *2
-even index to +10
*/
#include <iostream>
using namespace std;
int main(){
	int x[]={1,2,3,4,5,6,7,8,9};
	int num=sizeof(x)/4;
	for(int i=0;i<num;i++){
		if(i%2==0){
			x[i]+=10;
		}
		else{
			x[i]*=2;
		}
	}
	for(int i=0;i<num;i++){
		cout << x[i] << "  ";
	}
}