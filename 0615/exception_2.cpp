#include<iostream>
using namespace std;

int DividePizza(int s, int p){
	if (p == 0) throw p;
	return s / p;
}

int main() {
	int pizzaSlices = 0;
	int persons = 0;
	int slicesPerPerson = 0;

	try {
		cout << "���� ���� ���� �Է��Ͻÿ� : ";
		cin >> pizzaSlices;
		cout << "��� ���� �Է��Ͻÿ� : ";
		cin >> persons;

		slicesPerPerson = DividePizza(pizzaSlices, persons);
		cout << "�� ����� ���ڴ� " << slicesPerPerson << "���� �Դϴ�." << endl;
	}

	catch (int e){
		cout << "����� " << e << "�� �Դϴ�." << endl;
	}
}