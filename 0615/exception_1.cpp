#include<iostream>
using namespace std;

int main(){
	int pizzaSlices = 0;
	int persons = 0;
	int slicesPerPerson = 0;

	try {
		cout << "���� ���� ���� �Է��Ͻÿ� : ";
		cin >> pizzaSlices;
		cout << "��� ���� �Է��Ͻÿ� : ";
		cin >> persons;
		
		if (persons == 0) throw persons;
		slicesPerPerson = pizzaSlices / persons;
		cout << "�� ��� �� ���ڴ� " << slicesPerPerson << "�Դϴ�." << endl;
	}

	catch (int e) {
		cout << "����� " << e << "�� �Դϴ�." << endl;
	}

}