#include <iostream>
using namespace std;
class Person{
	int age;
public:
	string name;
};
int main(){
	Person p1;
	p1.name = "ADMIN";
	// p1.age = 21; cant be done as age is private i.e inaccessable
}