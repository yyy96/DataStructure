#include <iostream>
using namespace std;

void inputWord(char word[5][80]);
void printWord(char word[5][80]);

void main() {
	cout << "2차원 배열의 활용_01" << endl;
	cout << "문자열 첫 문자와 마지막 문자 출력하기" << endl;
	// : 다섯개의 문자열을 입력받아 char 5행 80열의 2차원 배열 word에 순서대로 저장한 후에,
	// : 문자열 전체, 첫 문자, 마지막 문자를 출력하는 프로그램을 작성

	char word[5][80]; //5개의 단어, 최대 단어글자는 80글자

	inputWord(word);
	printWord(word);
}

void inputWord(char word[5][80]) {
	for (int i = 0; i < 5; i++) {
		cout << i << "번 문자열 입력 : ";
		cin >> word[i]; //이중 포문 할 필요없이 이렇게만 쓰면 됨
	}
}
void printWord(char word[5][80]) {
	for (int i = 0; i < 5; i++) {
		cout << i << "번째 문자열의 첫글자, 마지막글자 : ";
		cout << word[i][0] << ", ";
		for (int j = 0; j < 80; j++) {
			if (word[i][j] == '\0') {
				cout << word[i][j - 1]<<endl;
			}
		}
	}

	//위와 같이 해도 되고
	// length 를 구하여 문자열의 마지막 length index 를 출력해도 됨.
	// int len0 = strlen(word[0]);
	// cout << word[0][len0];

}