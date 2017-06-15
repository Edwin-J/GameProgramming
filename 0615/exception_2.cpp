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
		cout << "피자 조각 수를 입력하시오 : ";
		cin >> pizzaSlices;
		cout << "사람 수를 입력하시오 : ";
		cin >> persons;

		slicesPerPerson = DividePizza(pizzaSlices, persons);
		cout << "한 사람당 피자는 " << slicesPerPerson << "조각 입니다." << endl;
	}

	catch (int e){
		cout << "사람이 " << e << "명 입니다." << endl;
	}
}