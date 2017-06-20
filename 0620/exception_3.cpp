#include <iostream>
using namespace std;

class MyException {
	string msg;
public :
	MyException() {
		cout << "���� �߻�" << endl;
	}
};

class InvalidInputException : public MyException {
public :
	InvalidInputException() {
		cout << "���� �Է� ���� �߻�" << endl;
	}
};

class DivideByZeroException : public MyException {
public :
	DivideByZeroException() {
		cout << "0���� ������ ���� �߻�" << endl;
	}
};

int main() {
	int x, y;
	try {
		cout << "�� ���� ���� ������ �Է��ϼ��� : ";
		cin >> x >> y;

		if (x < 0 || y < 0) throw InvalidInputException();
		if (y == 0) throw DivideByZeroException();
		
		cout << (double)x / (double)y; 
	}

	catch (DivideByZeroException &e) {	}
	catch (InvalidInputException &e) {	}

	return 0;
}