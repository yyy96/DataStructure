#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int searchNum(int *num, int n);
void printNum(int *num);

void main() {
	cout << "1차원 배열의 활용_01" << endl;
	cout << "1차원 배열 데이터 검색하기" << endl<<endl;
	// : int num[10] 배열을 1~20 사이의 난수로 초기화 한 후 배열 내의 데이터에서 사용자가 지정한 정수를 검색하여 배열 내에 저장된 위치(index)를 출력한다.
	// : 순차 검색 : 선형 자료구조에서 데이터를 처음부터 순차적으로 하나씩 비교하면서 찾는 방법 (단, 검색 결과 찾는 데이터가 없을 수 도 있음에 유의해야한다)

	int num[10];
	//배열의 크기 계산할때 : int size = sizeof(num)/sizeof(num[0]);
	for (int i = 0; i < 10; i++) {
		num[i] = rand() % 20 +1 ; //1~20까지의 난수 (+1 안해주면 1~19까지만 해당됨)
	}
	printNum(num);
	cout << endl;

	int n;
	cout << "찾으시는 정수는 무엇입니까? : ";
	cin >> n;
	cout << endl;

	int index = searchNum(num, n);
	if (index == -1) {
		cout << "찾으시는 정수가 존재하지 않습니다" << endl;
	}
	else {
		cout << "찾으시는 정수는 " << index << "번 방에 위치합니다." << endl;
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
	cout << "배열에 담긴 정수들 : ";
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
}