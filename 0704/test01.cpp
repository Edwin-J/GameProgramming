#include<iostream>
using namespace std;

class Person {
public :
	void print() { cout << "PersonÀÇ print()" << endl; }
};

class Employee : public Person {
public :
	void print() { 
		Person::print();
		cout << "EmployeeÀÇ print()" << endl; 
	}
};

class Manager  : public Person, public Employee {
public :
	void print() {
		Employee::print();
		cout << "ManagerÀÇ print()" << endl;
	}
};

int main() {
	Manager obj;
	obj.print();
	return 0;
}