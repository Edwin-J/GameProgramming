#include<iostream>
using namespace std;
template <class T>

T bigger(T x, T y) {
	if (x > y) return x;
	else return y;
}

int main(){
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20, 50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a', 'z') 의 결과는 " << bigger(c, d) << endl;
}