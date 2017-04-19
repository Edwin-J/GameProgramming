#include<iostream>
using namespace std;

int main(){
	int i;
	char menu[5][10] = {
		"init",
		"open",
		"close",
		"read",
		"write"
	};
	for (i = 0; i < 5; i++){
		cout << i + 1 << "번째 메뉴 : " << menu[i] << endl;
	}
	return 0;
}