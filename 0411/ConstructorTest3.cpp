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
	cout << "매개변수가 3개 있는 생성자 호출" << endl;
	
}

Car::Car(string c){
	cout << "매개변수가 1개 있는 생성자 호출" << endl;
	new (this)Car(0, 0, c);
}

void Car::print(){
	cout << "============" << endl;
	cout << "속도 :" << speed << endl;
	cout << "기어 :" << gear << endl;
	cout << "색상 :" << color << endl;
	cout << "============" << endl;
}

int main(){
	Car c1("white");
	c1.print();
	return 0;
}