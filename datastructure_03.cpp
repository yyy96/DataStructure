#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


void main() {
	cout << "1���� �迭�� Ȱ��_01" << endl;
	cout << "ȸ�� �˻� ���α׷�" << endl << endl;
	// : ȸ���� level, bob �� ���� ������ ������ �ڷ� ������ �Ȱ��� �ܾ��̴�. �Էµ� ���� �ܾ��� ȸ�� ���θ� �˻��ϴ� ���α׷��� �ۼ�����.
	// + end �Է½� ����ȴ�.


	char word[100] = { 0 };
	bool check = 0;

	while (strcmp(word,"end")!=0) { //���� ������ �� ���
		cout << "�ܾ� �Է� : ";
		cin >> word;
		int size = strlen(word)-1; //������ ���ڿ� ��ġ�� �˱����ؼ�(�� ���ڴ� ī��Ʈ ����)

		if (strcmp(word, "end") != 0) {
		for (int i = 0; i < size; i++) {
			if (size % 2 == 0) {
				//cout << "¦���ܾ��Դϴ�" << endl;
				if (i+1 == (size - i)) {
					break;
				}
				else {
					if (word[i] == word[size - i]) {
						check = 1;
					}
					else {
						check = 0;
					}
				}
			}
			else {
				//cout << "Ȧ���ܾ��Դϴ�" << endl;
				if (i == (size - i)) {
					break;
				}
				else{
					if (word[i] == word[size - i]) {
						check = 1;
					}
					else {
						check = 0;
					}
				}
				
			}

		}

		if (check == 1) {
			cout << "'" << word << "' �� ȸ���Դϴ�." << endl;
		}
		else {
			cout << "'" << word << "' �� ȸ���� �ƴմϴ�." << endl;
		}
		}
		else {
			cout << "end �� ����˴ϴ�" << endl;
			break;
		}
	}
	

}