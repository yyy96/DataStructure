#include <iostream>
using namespace std;

void printArray(int *parr, int count);
void deleteData(int *parr, int *pcount, int index);
void insertData(int *parr, int *pcount, int index, int data);

void main() {
	cout << "1차원 배열 자료구조의 삽입, 삭제" << endl <<endl;
	// 배열 내의 데이터 삭제하기
	// : 배열의 n번 방의 데이터를 삭제하면 (n+1)방 이후의 데이터들을 앞으로 당겨주는 작업을 해야한다.
	// 배열 내의 데이터 삽입하기
	// : 배열의 n번 방에 데이터를 추가하려면 n번 방 이후의 유효 데이터들을 뒤로 밀어준 후에 n번 방에 데이터를 저장해줘야한다.
	// : 단, 추가시에는 실제 배열크기(요소 개수)를 초과해서 저장되지 않도록 유의해야한다.

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int count = 10;
	printArray(arr, count);

	deleteData(arr, &count, 4);
	//위와 달리 count의 주소로 보낸 이유는 : deleteData 함수를 갔다오면 count 변수가 변해야하기 때문에.
	//Java는 포인터 개념 사용x
	printArray(arr, count); //결과 출력

	insertData(arr, &count, 4, 4); //4번방에 다시 값'4' 추가
	printArray(arr, count);

}

void printArray(int *parr, int count) {
	cout << "배열의 내용: ";
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
			//*parr 는 포인터 변수지만, 배열 표현을 사용해서 각 방에 접근 할 수 있다는 것 유의
			//*pcount 는 main 의 count 에 접근해서 값을 가져올 수 도 있고 바꿀 수 도 있음
			//index 는 1차원 배열의 몇번째 공간을 삭제할지
		}
	}
}

void insertData(int *parr, int *pcount, int index, int data) {
	if (index <= *pcount) {
		for (int i = *pcount; i > index; i--) {
			parr[i] = parr[i - 1];
			//뒷 칸이 앞의 칸들의 값들로 채워지는 중
		}
		parr[index] = data;
		(*pcount)++;
	}
}
