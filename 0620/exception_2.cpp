#include<iostream>
using namespace std;

class NoPersonException {
	int persons;
public :
	NoPersonException(int p) { persons = p; }
	int getPersons() { return persons; }
};

int main(){
	int pizzaSlices = 12;
	int persons = 0;
	int slicesPerPerson = 0;
	try {
		cout << "��� ���� �Է��Ͻÿ� : ";
		cin >> persons;
		if (persons <= 0) throw NoPersonException(persons);
		slicesPerPerson = pizzaSlices / persons;
		cout << "�� ����� ���ڴ� " << slicesPerPerson << "�Դϴ�." << endl;
	}
	catch (NoPersonException e){
		cout << "���� : ����� " << e.getPersons() << "���Դϴ�." << endl;
	}
}