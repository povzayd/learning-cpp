#include <iostream>
using namespace std;
class Student{
public:
	string name;
	int rno;
	float gpa;
	Student(string s, int r, float g){
		name = s;
		rno = r;
		gpa = g;
	}
};
void print(Student s){
	cout << "Name: " << s.name << " " << "Roll No.: " << s.rno << " " << "GPA: " << s.gpa << " " << endl;
}
int main(){
	Student s1("Ivy", 12, 3.5);
	Student s2("Mike", 13, 2.5);
	Student s3("Naina", 14, 4.5);
	Student s4("Jane", 15, 1.5);
	print(s1);
	print(s2);
	print(s3);
	print(s4);
}