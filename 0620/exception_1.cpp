#include<iostream>
using namespace std;

int stringToInt(char s[]) {
	int sum = 0, len = strlen(s);
	for (int i = 0; i < len; i++){
		if (s[i] >= '0' && s[i] <= '0') 
			sum = sum * 10 + s[i] - '0';
		else 
			throw s;
	}
	return sum;
}

int main() {
	int n;
	try {
		n = stringToInt("123");
		cout << "\"123\"은 정수 " << n << "로 변환됨" << endl;
		n = stringToInt("1A3");
		cout << "\"1A3\"은 정수 " << n << "로 변환됨" << endl;
	}
	catch (char* s) {
		cout << s << " 자리에서 예외 발생!!" << endl;
		return 0;
	}
}