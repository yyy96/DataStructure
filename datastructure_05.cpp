#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void intArr(int num[3][4]);
void printArr(int num[3][4]);
void countArr(int num[3][4]);

void main() {
	cout << "2차원 배열의 활용_01" << endl;
	cout << "2차원 숫자배열의 행,열의 합" << endl;
	// : int num[3][4] 배열을 선언하여 각 방의 값을 1~20 사이의 난수로 초기화 시킨후,
	// : 각 방의 내용 및 행의 합계, 열의 합계를 출력하는 프로그램

	int num[3][4];
	intArr(num);
	printArr(num);
	countArr(num);

}

void intArr(int num[3][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			num[i][j] = rand() % 20 + 1;
		}
	}
}

void printArr(int num[3][4]) {
	cout << "< 배열 출력 >" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << num[i][j]<< " ";
		}
		cout << endl;
	}
}

void countArr(int num[3][4]) {
	cout << "< 배열 합 출력 >" << endl;
	int rowsum[3] = { 0 };
	int colsum[4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			rowsum[i] += num[i][j];
		}
		cout << i << "행의 합 : " << rowsum[i] << endl;
	}

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			colsum[j] += num[i][j];
		}
		cout << j << "열의 합 : " << colsum[j] << endl;
	}
}