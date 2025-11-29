#include <iostream>
using namespace std;
void swap(int x, int y){
        x=x+y;
        y=x-y;
        x=x-y;
        cout << "======================================" << endl;
        cout << "Now The Value Of The 1st Number Is: " << x << endl;
        cout << "And The Value Of The 2nd Number Is: " << y << endl;
}
int main(){
        int a,b;
        cout << "Enter 1st Number: ";
        cin >> a;
        cout << "Enter 2nd Number: ";
        cin >> b;
        cout << "The Current Value Of The 1st Number Is: " << a << endl;
        cout << "The Current Value Of The 2nd Number Is: " << b << endl;
        swap(a,b);
        return 0;
}
