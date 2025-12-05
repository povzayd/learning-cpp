#include <iostream>
using namespace std;
class Player{
public:
	string name;
	int runs;
	float avg;
	Player(string name, int runs, float avg){
		this->name = name;
		this->runs = runs;
		this->avg = avg;
	}
	void print(){
		cout << this->name << "  " << this->runs << "  " << this->avg << "  " << endl;
	}
};
void change(Player *p){
		p->avg = 45.65;
		p->runs = 8888; // means (*p).avg = 8888 ?// a->b means (*a).b a must be a pointer.
	}
int main(){
	Player p1("Dhoni",3000,65.67);
	Player p2("Kohli",5000,75.67);
	p1.print();
	p2.print();
	Player* c1 = &p1;
	cout << c1->runs<< endl;
	c1->name = "Hardik";//changes can be done using pointers.
	p1.print();
	change(&p2);
	p2.print();
}