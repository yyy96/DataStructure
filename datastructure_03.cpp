#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


void main() {
	cout << "1차원 배열의 활용_01" << endl;
	cout << "회문 검사 프로그램" << endl << endl;
	// : 회문은 level, bob 과 같이 앞으로 읽으나 뒤로 읽으나 똑같은 단어이다. 입력된 영어 단어의 회문 여부를 검사하는 프로그램을 작성하자.
	// + end 입력시 종료된다.


	char word[100] = { 0 };
	bool check = 0;

	while (strcmp(word,"end")!=0) { //둘이 같으면 널 출력
		cout << "단어 입력 : ";
		cin >> word;
		int size = strlen(word)-1; //마지막 문자열 위치를 알기위해서(널 문자는 카운트 안함)

		if (strcmp(word, "end") != 0) {
		for (int i = 0; i < size; i++) {
			if (size % 2 == 0) {
				//cout << "짝수단어입니다" << endl;
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
				//cout << "홀수단어입니다" << endl;
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
			cout << "'" << word << "' 는 회문입니다." << endl;
		}
		else {
			cout << "'" << word << "' 는 회문이 아닙니다." << endl;
		}
		}
		else {
			cout << "end 로 종료됩니다" << endl;
			break;
		}
	}
	

}