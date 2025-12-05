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
};
int main(){
	Player p1("Viral Kohli", 20000, 33.45);
	Player* p2 = new Player("Rohit Sharma",18000,67.22);
	p1.print();
	cout << p2->name << " " << p2->runs << "  " << p2->avg << endl;
}
