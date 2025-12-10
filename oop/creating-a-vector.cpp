#include <iostream>
using namespace std;
class VECTOR{
public:
	int size;
	int capacity;
	int* x;	
	VECTOR(){
		size=0;
		capacity=1;
		x = new int[1];
	}
	void add(int ele){
		if(size==capacity){
			capacity*=2;
			int *y = new int[capacity];
			for(int i=0;i<size;i++){
				y[i]=x[i];
			}
			delete[] x;
			x=y;
		}
		x[size++]= ele;
	}
	void print(){
		for(int i=0;i<size;i++){
			cout << x[i] << "  ";
		}
		cout << endl;
	}
	void siize(VECTOR a){
		cout << "Size: "<<a.size << "  " << "Capacity: "<< a.capacity << "  " << endl;
	}
	int get(int indx){
		if(size==0){
			cout << "ARRAY IS EMPTY!!" << endl;
			return 0;
		}
		if(indx>=size || indx<0){
			cout << "INVALID INDEX!" << endl;
			return 0;
		}
		return x[indx];
    }
    void remove(){
    	if(size==0){
			cout << "ARRAY IS EMPTY!!" << endl;
		}
    	size--;
    }
};
int main(){
	VECTOR v;
	v.add(10);
	v.print();	
	v.add(11);
	v.print();
	v.add(12);
	v.print();
	v.add(13);
	v.print();
	v.add(14);
	v.print();
	v.add(15);
	v.print();
	v.add(16);
	v.print();
	v.add(17);
	v.print();
	v.add(18);
	v.print();
	v.add(19);
	v.print();
	v.add(20);
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
	v.remove();
	v.print();
}

