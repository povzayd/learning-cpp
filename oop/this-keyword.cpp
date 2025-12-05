#include <iostream>
using namespace std;
class Player{
public: 
	string name;
	int goals;
	Player(string name, int goals){
		this->name = name;
		this->goals = goals;// if this-> isn't used then the objects will have garbage values.
	}
	// Player(){}
};
void print(Player p){
	cout << "Name: " << p.name << " | " << "Goals: " << p.goals << endl;
}
int main(){
	// Player p1;
	// p1.name = "Jack";
	// p1.goals = 50;
	// print(p1);
	Player p2("Ronaldo",300);
	Player p3("Messi",400);
	print(p2);
	print(p3);
}