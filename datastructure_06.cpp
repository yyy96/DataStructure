#include <iostream>
using namespace std;

void inputWord(char word[5][80]);
void printWord(char word[5][80]);

void main() {
	cout << "2���� �迭�� Ȱ��_01" << endl;
	cout << "���ڿ� ù ���ڿ� ������ ���� ����ϱ�" << endl;
	// : �ټ����� ���ڿ��� �Է¹޾� char 5�� 80���� 2���� �迭 word�� ������� ������ �Ŀ�,
	// : ���ڿ� ��ü, ù ����, ������ ���ڸ� ����ϴ� ���α׷��� �ۼ�

	char word[5][80]; //5���� �ܾ�, �ִ� �ܾ���ڴ� 80����

	inputWord(word);
	printWord(word);
}

void inputWord(char word[5][80]) {
	for (int i = 0; i < 5; i++) {
		cout << i << "�� ���ڿ� �Է� : ";
		cin >> word[i]; //���� ���� �� �ʿ���� �̷��Ը� ���� ��
	}
}
void printWord(char word[5][80]) {
	for (int i = 0; i < 5; i++) {
		cout << i << "��° ���ڿ��� ù����, ���������� : ";
		cout << word[i][0] << ", ";
		for (int j = 0; j < 80; j++) {
			if (word[i][j] == '\0') {
				cout << word[i][j - 1]<<endl;
			}
		}
	}

	//���� ���� �ص� �ǰ�
	// length �� ���Ͽ� ���ڿ��� ������ length index �� ����ص� ��.
	// int len0 = strlen(word[0]);
	// cout << word[0][len0];

}