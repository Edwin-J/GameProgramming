#include<iostream>
#include<time.h>
#include<random>
using namespace std;

void main() {
	srand(time(NULL));
	int randNum[3];
	for (int i = 0; i < 3; i++) {
		randNum[i] = rand() % 10;
	}
	cout << "���� : ";
	for (int i = 0; i < 3; i++) {
		cout << randNum[i];
	}
	cout << endl;

	int input[3];
	int count = 0;
	bool check = false;
	while (check == false) {
		int strike = 0, ball = 0, out = 0;

		cout << "�Է�(spacebar�� ����) : ";
		cin >> input[0] >> input[1] >> input[2];
		count++;

		for (int i = 0; i < 3; i++) {
			if (randNum[i] == input[i])
				strike++;
			else if (randNum[i] == input[0] || randNum[i] == input[1] || randNum[i] == input[2])
				ball++;
			else if (randNum[i] != input[i + 1] && randNum[i] != input[i])
				out++;
		}

		cout << "< strike, ball, out > : < " << strike << ", " << ball << ", " << out << " > " << endl;

		if (strike == 3)
			check = true;
		else
			check = false;

	}

	cout << count << "�� ���� �����Դϴ�!" << endl;

}