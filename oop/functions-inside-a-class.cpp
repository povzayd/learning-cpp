/*Printing all the details of a given object.*/
#include <iostream>
using namespace std;
class Player{
public:
	string name;
	int runs;
	float avg;
	Player(){}
	Player(string name, int runs, float avg){
		this->name= name;
		this->runs= runs;
		this->avg= avg;

	}
	void print(){//function inside a class..
	cout << this->name << "  " << this->runs << "  "<< this->avg << endl;
    }
    int matches(){
    	return runs/avg;
    }
};
int main(){
	Player p1("Viral Kohli", 200, 33.45);
	Player p2("Rohit Sharma", 400, 38.45);
	p1.print();
	p2.print();
	cout << p1.matches() << endl;
	cout << p2.matches();

}
