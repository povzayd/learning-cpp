#include <iostream>
using namespace std;
class Cricketer{
public: 
	int runs;
	float average;
	int wickets;
};
class Engineer{
public:
	int experience;
	string domain;

};
class everything : public Cricketer, Engineer{
public:
	string hobby;
};
int main(){

}
