//---------------------------------
// 순차탐새
//---------------------------------

#include <stdio.h>

//순차탐색 함수
int  LSearch(int* ar, int len, int target) {  //ar : mian함수 arr을 가리키는 포인터
												//len : 배열의 길이
												// target : 찾을 데이터
	/*
	배열의 0 번째 에서 마지막 요소까지 차레로 이동하면서
	target과 일치하는 데이터가 있는 확인후 존재하다면
	//해당 요소의 idx값을 retrun 합니다.
	target과 일치하는 데이터 없을때 -1을 return한다.
	*/

}

int main()
{
	int arr[] = { 3,5,2,4,9 };
	int idx;
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx = -1)
	{
		printf("해당 숫자는 존재하지 않습니다");
	}
	else {
		printf("타겟 저장 IDX: %d\n", idx);
	}
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx = -1)
	{
		printf("해당 숫자는 존재하지 않습니다");
	}
	else {
		printf("타겟 저장 IDX: %d\n", idx);
	}
	return 0;
}