#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int searchNum(int *num, int n);
void printNum(int *num);

void main() {
	cout << "1���� �迭�� Ȱ��_01" << endl;
	cout << "1���� �迭 ������ �˻��ϱ�" << endl<<endl;
	// : int num[10] �迭�� 1~20 ������ ������ �ʱ�ȭ �� �� �迭 ���� �����Ϳ��� ����ڰ� ������ ������ �˻��Ͽ� �迭 ���� ����� ��ġ(index)�� ����Ѵ�.
	// : ���� �˻� : ���� �ڷᱸ������ �����͸� ó������ ���������� �ϳ��� ���ϸ鼭 ã�� ��� (��, �˻� ��� ã�� �����Ͱ� ���� �� �� ������ �����ؾ��Ѵ�)

	int num[10];
	//�迭�� ũ�� ����Ҷ� : int size = sizeof(num)/sizeof(num[0]);
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 20 +1 ; //1~20������ ���� (+1 �����ָ� 1~19������ �ش��)
	}
	printNum(num);
	cout << endl;

	int n;
	cout << "ã���ô� ������ �����Դϱ�? : ";
	cin >> n;
	cout << endl;

	int index = searchNum(num, n);
	if (index == -1) {
		cout << "ã���ô� ������ �������� �ʽ��ϴ�" << endl;
	}
	else {
		cout << "ã���ô� ������ " << index << "�� �濡 ��ġ�մϴ�." << endl;
	}

}

int searchNum(int *num, int n) {
	int index = -1;
	for (int i = 0; i < 10; i++) {
		if (num[i] == n) {
			index = i;
			break;
		}
	}
	return index;
}

void printNum(int *num) {
	cout << "�迭�� ��� ������ : ";
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
}