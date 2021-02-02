#include <iostream>
using namespace std;

void printArray(int *parr, int count);
void deleteData(int *parr, int *pcount, int index);
void insertData(int *parr, int *pcount, int index, int data);

void main() {
	cout << "1���� �迭 �ڷᱸ���� ����, ����" << endl <<endl;
	// �迭 ���� ������ �����ϱ�
	// : �迭�� n�� ���� �����͸� �����ϸ� (n+1)�� ������ �����͵��� ������ ����ִ� �۾��� �ؾ��Ѵ�.
	// �迭 ���� ������ �����ϱ�
	// : �迭�� n�� �濡 �����͸� �߰��Ϸ��� n�� �� ������ ��ȿ �����͵��� �ڷ� �о��� �Ŀ� n�� �濡 �����͸� ����������Ѵ�.
	// : ��, �߰��ÿ��� ���� �迭ũ��(��� ����)�� �ʰ��ؼ� ������� �ʵ��� �����ؾ��Ѵ�.

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int count = 10;
	printArray(arr, count);

	deleteData(arr, &count, 4);
	//���� �޸� count�� �ּҷ� ���� ������ : deleteData �Լ��� ���ٿ��� count ������ ���ؾ��ϱ� ������.
	//Java�� ������ ���� ���x
	printArray(arr, count); //��� ���

	insertData(arr, &count, 4, 4); //4���濡 �ٽ� ��'4' �߰�
	printArray(arr, count);

}

void printArray(int *parr, int count) {
	cout << "�迭�� ����: ";
	for (int i = 0; i < count; i++) {
		cout << parr[i] <<" ";
	}
	cout << endl;
}

void deleteData(int *parr, int *pcount, int index) {
	if (index < *pcount) {
		(*pcount)--;
		for (int i = index; i < *pcount; i++) {
			parr[i] = parr[i + 1];
			//*parr �� ������ ��������, �迭 ǥ���� ����ؼ� �� �濡 ���� �� �� �ִٴ� �� ����
			//*pcount �� main �� count �� �����ؼ� ���� ������ �� �� �ְ� �ٲ� �� �� ����
			//index �� 1���� �迭�� ���° ������ ��������
		}
	}
}

void insertData(int *parr, int *pcount, int index, int data) {
	if (index <= *pcount) {
		for (int i = *pcount; i > index; i--) {
			parr[i] = parr[i - 1];
			//�� ĭ�� ���� ĭ���� ����� ä������ ��
		}
		parr[index] = data;
		(*pcount)++;
	}
}
