#include<iostream>
using namespace std;

int main(){
	int pizzaSlices = 0;
	int persons = 0;
	int slicesPerPerson = 0;

	try {
		cout << "피자 조각 수를 입력하시오 : ";
		cin >> pizzaSlices;
		cout << "사람 수를 입력하시오 : ";
		cin >> persons;
		
		if (persons == 0) throw persons;
		slicesPerPerson = pizzaSlices / persons;
		cout << "한 사람 당 피자는 " << slicesPerPerson << "입니다." << endl;
	}

	catch (int e) {
		cout << "사람이 " << e << "명 입니다." << endl;
	}

}