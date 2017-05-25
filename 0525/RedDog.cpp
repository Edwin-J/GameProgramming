#include<iostream>
#include<random>
#include<time.h>
using namespace std;

void main(){
	srand((unsigned)time(NULL));
	int card[52];
	int shape[3], number[3];
	int dest, sour, temp;
	int gameCount = 0, turn = 0;
	int betting, money = 1000;

	for (int i = 0; i < 52; i++)
		card[i] = i;

	for (int i = 0; i < 1000; i++){
		dest = rand() % 52;
		sour = rand() % 52;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	while (gameCount <= 17){
		if (money <= 0){
			cout << "파산하였습니다!!" << endl;
			break;
		}
		cout << "====================================" << endl;
		for (int i = 0; i < 3; i++){
			shape[i] = card[i + turn] / 13;
			number[i] = card[i + turn] % 14;

			switch (shape[i]){
			case 0:
				cout << "♤"; break;
			case 1:
				cout << "♧"; break;
			case 2:
				cout << "♡"; break;
			case 3:
				cout << "◇"; break;
			}

			if (i != 2){
				switch (number[i]){
				case 0:
					cout << "A\t"; break;
				case 10:
					cout << "J\t"; break;
				case 11:
					cout << "Q\t"; break;
				case 12:
					cout << "K\t"; break;
				default:
					cout << number[i] + 1 << "\t"; break;
				}
			}
			else {
				cout << "?" << "\t";
			}
		}

			cout << "내가 가진 돈 : " << money << "\t" << "베팅할 금액 : ";
			cin >> betting;

			if (betting > money) {
				cout << "소지금이 부족합니다." << endl;
				continue;
			}

			cout << "결과 : ";
			if (number[0] > number[2] && number[1] < number[2]){
				cout << betting << "을 땄음!!" << endl;
				money += betting;
			}
			else {
				cout << betting << "을 잃음!!" << endl;
				money -= betting;
			}
			gameCount++;
			turn += 3;
	}
	cout << "게임이 끝났습니다!!" << endl;

}