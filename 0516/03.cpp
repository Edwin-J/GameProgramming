#include<iostream>
using namespace std;

class Base{
public:
	int baseMember1;
	string baseMember2;
	void showBase(){
		cout << "Base Function" << endl;
	}
};
class Derived : public Base {
public:
	int derivedMember1;
	string derivedMember2;
	void showDerived(){
		cout << "Derived Function" << endl;
	}
};

int main(){
	Base *b = new Derived();

	Derived *d1;
	d1 = (Derived *)b;

	d1->showBase();
	d1->showDerived();

	return 0;
}