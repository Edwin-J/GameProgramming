#include <iostream>
#include <string>

using namespace std;

int main()
{

	char str1[20];
	char str2[20];

	cout << "str1의 문자열을 입력하세요 : ";
	cin >> str1;
	cout << "str2의 문자열을 입력하세요 : ";
	cin >> str2;

	strcat(str1, str2); // 뒤에다 이어주는 함수

	cout << "str : " << str1 << endl;

}