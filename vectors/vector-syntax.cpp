/*vector <type> name;
vector <int> marks; //rn the size is 0.
//==================
vector <int> marks = {1,2,3}
vector <int> marks(size,value-at-each-index);
vector <int> marks(3,0)// size=3 & har index pe 0 store hoo raha hai.

*/
#include <vector>
#include <iostream>
using namespace std;
int main(){
	vector <char> v={'a','b','c','d'};
	for(char i: v){//for each loop is used here.>>>>>
	cout << i << "  ";

}
}
