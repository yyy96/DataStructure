#include <iostream>
using namespace std;

void inputArr(int(*p)[4], int row);
void outputArr(int(*p)[4], int row);

void main() {
	int arr[3][4]; //3행x4열
	int row;
	row = sizeof(arr) / sizeof(arr[0]); //48(4byte*12칸) / 16(4byte*4열) = 3행
	inputArr(arr, row);
	outputArr(arr, row);

}

void inputArr(int(*p)[4], int row) {
	//int(*p)[4] = int 가 4칸인 배열의 포인터 - 여기서 0행 전체를 가리킴
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 4; j++) { //열은 이미 지정되서 보내줘서 그냥 계산안함. (int(*p)[4] 이거)
			cout << i << "행 " << j << "열 값 : ";
			cin >> p[i][j];
		}
	}
}
void outputArr(int(*p)[4], int row) {
	for (int i = 0; i < row; i++) {
		cout << i << "행: ";
		for (int j = 0; j < 4; j++) {
			cout << p[i][j] << ", ";
		}
		cout << endl;
	}
}