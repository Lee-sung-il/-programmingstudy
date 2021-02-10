//-----------------------------------
//재귀함수
//------------------------------------
//스스로를 반복적으로 호출하는 형태의 코드를 포함하는 함수

//1) 재귀함수 기본

//#include <stdio.h>
//void Recursive(int num) {
//
//	if (num > 0) {
//		printf("Recursive call!! : %d\n", num);
//		Recursive(num - 1); //자신을 호출
//	}
//}
//
//
//int main() {
//
//	Recursive(3);
//	return 0;
//}


// 2) 재귀함수 기본

//#include <stdio.h>
//void Recursive(int num) {
//
//	if (num > 0) {
//		Recursive(num - 1); //자신을 호출
//		printf("Recursive call!! : %d\n", num);
//	
//	}
//}
//
//
//int main() {
//
//	Recursive(3);
//	return 0;
//}

//3) 재귀함수 기본

//#include <stdio.h>
//void Recursive(int num) {
//
//	if (num > 0) {
//		printf("Recursive call!! : %d\n", num); // 3 -> 2 -> 1 
//		Recursive(num - 1); //자신을 호출
//		printf("Recursive call!! : %d\n", num);//1 -> 2 -> 3
//	
//	}
//}
//
//
//int main() {
//
//	Recursive(3);
//	return 0;
//}


// 4) 재귀함수를 이용해서 1부터 10까지의 합 구하기

//#include <stdio.h>
//
//int recursive(int num) {
//
//	int sum = 0;
//
//	if (num > 0)
//	{
//		sum = recursive(num - 1) + num;
//		printf("num %d를 더한 sum의 값 : %d\n", num, sum);
//		return sum;
//		
//	}
//	return 0;
//	
//}
//int main() {
//	int total = recursive(10);
//	printf("합계 : %d\n", total);
//	return 0;
//}


// 5) 1부터 10까지의 수증의 3의 배수만 더한값을 출력 (수 % 3 == 0)

//#include <stdio.h>
//
//int recursive(int num) {
//
//	int sum = 0;
//
//	//전달받은 인자가 3의 배수가 될때 까지 num값 감소
//	while (num % 3 != 0 ) // 3의 배수가 될때까지
//	{
//		num--; // num을 1감소
//	}
//	//while을 빠져나올때 9,6,3,0
//		if (num > 0)
//		{
//				sum = recursive(num - 1) + num;
//				printf("num %d를 더한 sum의 값 : %d\n", num, sum);
//				return sum;
//
//		}
//	return 0;
//}
//int main() {
//	int total = recursive(10);
//	printf("3의배수 합계 : %d\n", total);
//	return 0;
//}


//6) 재귀함수로 별찍기

//*
//**
//***
//****

//#include <stdio.h>
//
//void star(int n) {
//
//	if (n > 0)
//	{
//		
//		star(n - 1); //3 -> 2 -> 1 -> 0
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//		
//
//	}
//	return 0;
//	
//}
//
//
//int main() {
//
//	star(50);
//	return 0;
//
//}



// 7) 재귀함수로 별찍기
//****
//***
//**
//*

#include <stdio.h>

void star(int n) {

	if (n > 0)
	{
		
		
		for (int i = 0; i < n; i++)
		{
			printf("*");

		}
		printf("\n");
		star(n - 1); //3 -> 2 -> 1 -> 0

	}
	return 0;
	
}


int main() {

	star(4);
	return 0;

}


//문제
//    *
//   ***
//  *****
//*********


//문제
//*********
//  *****
//   ***
//    *

