#include<iostream>
using namespace std;

class Company {
	int sales, profit;
	friend void sub(Company &c);
public :
	Company() : sales(100), profit(500) {}
};

void sub(Company &c) {
	cout << c.profit << endl;
}

int main(){
	Company c1;
	sub(c1);

	return 0;
}