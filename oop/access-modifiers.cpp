#include <iostream>
using namespace std;
class Student{
public:
	int rno;
	string name;
	void display(){
		cout << name << " " << marks << " " << rno << endl;
	}
	Student(int rno, string name, float marks){
		this->rno = rno;
		this->name = name;
		this->marks = marks;

	}
	float getmarks(){
		return marks;
	}
	void setmarks(float m){
		marks =m;
	}
private:
	float marks;
};
int main(){
	Student s1(12, "Taimour", 45.66);
	s1.display();
	cout << s1.getmarks() << endl;
	s1.setmarks(78.550);
	cout << s1.getmarks();
}
