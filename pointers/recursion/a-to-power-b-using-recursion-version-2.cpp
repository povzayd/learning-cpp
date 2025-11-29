#include <iostream>
using namespace std;
long long cal(long long x, long long y){
    if(y == 0) return 1;         // Base case
    long long half = cal(x, y / 2);   
    if(y % 2 == 0){
        return half * half;     // (x^(y/2))^2
    } else {
        return x * half * half; // x * (x^(y/2))^2
    }
}
int main(){
    long long a,b;
    cout << "Enter Base: ";
    cin >> a;
    cout << "Enter Power: ";
    cin >> b;

    cout << "Answer: " << cal(a,b) << endl;
    return 0;
}