#include<iostream>
using namespace std;

int main() {
	try {
		throw 3;
		try {
			throw "abc";
			throw 5;
		}
		catch (int inner) {
			cout << inner << endl;
		}
	}
	
	catch (char*s) {
		cout << s;
	}
	catch (int outer) {
		cout << outer << endl;
	}
	return 0;
}