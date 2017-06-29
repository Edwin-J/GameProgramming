#include<iostream>
using namespace std;

template <class T>
class Box {
	T data;
public:
	Box();
	void set(T value) {
		data = value;
	}
	T get(){
		return data;
	}
};

template <typename T>
Box<T>::Box(){}

int main() {
	Box<int> box1;
	box1.set(100);
	cout << box1.get() << endl;

	Box<double> box2;
	box2.set(3.141592);
	printf("%.6lf\n", box2.get());

	return 0;
}