#include<iostream>
using namespace std;

template <class T1>
T1 get_max(T1 a, T1 b) {
	if (a > b) return a;
	else return b;
}

int main() {
	cout << get_max<int>(1, 3) << endl;
	cout << get_max(1.4, 8.5) << endl;
}