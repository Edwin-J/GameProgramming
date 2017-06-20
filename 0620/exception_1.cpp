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
		cout << "\"123\"�� ���� " << n << "�� ��ȯ��" << endl;
		n = stringToInt("1A3");
		cout << "\"1A3\"�� ���� " << n << "�� ��ȯ��" << endl;
	}
	catch (char* s) {
		cout << s << " �ڸ����� ���� �߻�!!" << endl;
		return 0;
	}
}