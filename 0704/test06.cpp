#include<iostream>
using namespace std;

template<typename T>
class Box {
	T data;
public :
	Box();
	void set(T value) {
		data = value;
	}
	T get() {
		return data;
	}
};

template<typename T>
Box<T>::Box() {}