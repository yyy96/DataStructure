#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void intArr(int num[3][4]);
void printArr(int num[3][4]);
void countArr(int num[3][4]);

void main() {
	cout << "2���� �迭�� Ȱ��_01" << endl;
	cout << "2���� ���ڹ迭�� ��,���� ��" << endl;
	// : int num[3][4] �迭�� �����Ͽ� �� ���� ���� 1~20 ������ ������ �ʱ�ȭ ��Ų��,
	// : �� ���� ���� �� ���� �հ�, ���� �հ踦 ����ϴ� ���α׷�

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
	cout << "< �迭 ��� >" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << num[i][j]<< " ";
		}
		cout << endl;
	}
}

void countArr(int num[3][4]) {
	cout << "< �迭 �� ��� >" << endl;
	int rowsum[3] = { 0 };
	int colsum[4] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			rowsum[i] += num[i][j];
		}
		cout << i << "���� �� : " << rowsum[i] << endl;
	}

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			colsum[j] += num[i][j];
		}
		cout << j << "���� �� : " << colsum[j] << endl;
	}
}