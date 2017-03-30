#include <iostream>
#include <string>

using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	char str3[20];

	cout << "str1 문자열을 입력하세요 : ";
	cin >> str1;

	strcpy(str2, str1); // 문자열을 복사하는 함수
	strcpy(str3, "복사할거얌");

	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
}