#include <iostream>
using namespace std;

class MyException {
	string msg;
public :
	MyException() {
		cout << "예외 발생" << endl;
	}
};

class InvalidInputException : public MyException {
public :
	InvalidInputException() {
		cout << "음수 입력 예외 발생" << endl;
	}
};

class DivideByZeroException : public MyException {
public :
	DivideByZeroException() {
		cout << "0으로 나누는 예외 발생" << endl;
	}
};

int main() {
	int x, y;
	try {
		cout << "두 개의 양의 정수를 입력하세요 : ";
		cin >> x >> y;

		if (x < 0 || y < 0) throw InvalidInputException();
		if (y == 0) throw DivideByZeroException();
		
		cout << (double)x / (double)y; 
	}

	catch (DivideByZeroException &e) {	}
	catch (InvalidInputException &e) {	}

	return 0;
}