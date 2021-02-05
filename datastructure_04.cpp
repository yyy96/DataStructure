#include <iostream>
using namespace std;

void inputArr(int(*p)[4], int row);
void outputArr(int(*p)[4], int row);

void main() {
	int arr[3][4]; //3��x4��
	int row;
	row = sizeof(arr) / sizeof(arr[0]); //48(4byte*12ĭ) / 16(4byte*4��) = 3��
	inputArr(arr, row);
	outputArr(arr, row);

}

void inputArr(int(*p)[4], int row) {
	//int(*p)[4] = int �� 4ĭ�� �迭�� ������ - ���⼭ 0�� ��ü�� ����Ŵ
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 4; j++) { //���� �̹� �����Ǽ� �����༭ �׳� ������. (int(*p)[4] �̰�)
			cout << i << "�� " << j << "�� �� : ";
			cin >> p[i][j];
		}
	}
}
void outputArr(int(*p)[4], int row) {
	for (int i = 0; i < row; i++) {
		cout << i << "��: ";
		for (int j = 0; j < 4; j++) {
			cout << p[i][j] << ", ";
		}
		cout << endl;
	}
}