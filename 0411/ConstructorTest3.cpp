#include<iostream>
#include<string>
using namespace std;

class Car{
private : 
	int speed;
	int gear;
	string color;
public :
	Car(int s, int g, string c);
	Car(string c);
	void print();
};

Car::Car(int s, int g, string c) : speed(s), gear(g), color(c){
	cout << "�Ű������� 3�� �ִ� ������ ȣ��" << endl;
	
}

Car::Car(string c){
	cout << "�Ű������� 1�� �ִ� ������ ȣ��" << endl;
	new (this)Car(0, 0, c);
}

void Car::print(){
	cout << "============" << endl;
	cout << "�ӵ� :" << speed << endl;
	cout << "��� :" << gear << endl;
	cout << "���� :" << color << endl;
	cout << "============" << endl;
}

int main(){
	Car c1("white");
	c1.print();
	return 0;
}