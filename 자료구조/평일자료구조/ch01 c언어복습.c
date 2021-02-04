// ------------------------------------------------------
//1. 배열 
/////////////////

//1) 배열 크기 확인

//#include <stdio.h>
//
//int main() {
//	char c; 
//	int i;
//	short s;
//	float f;
//	long l;
//	char c_array[100];
//	int i_array[100];
//	short s_array[100];
//	float f_array[100];
//	long l_array[100];
//	printf("char c 크기 : %d char c_array크기 =%d \n", sizeof(c), sizeof(c_array));	
//	printf("int i 크기 : %d int i_array크기 =%d \n", sizeof(i), sizeof(i_array));
//	printf("short s 크기 : %d short s_array크기 =%d \n", sizeof(s), sizeof(s_array));
//	printf("float f크기 : %d char f_array크기 =%d \n", sizeof(f), sizeof(f_array));
//	printf("long l 크기 : %d char l_array크기 =%d \n", sizeof(l), sizeof(l_array));
//	return 0;
//}

// 2) 문자열 vs 문자열

//#include <stdio.h>
//
//int main() {
//	char str1[4] = "abc"; // 문자열 o 문자배열 o
//	char str2[4] = "abcd";// 문자열 x 문자배열 o
//
//	printf("str1 = %s\n",str1); // 정상 출력
//	printf("str2 = %s\n", str2); // 비정상 출력(문자열의 끝, Null의 위치를 파악하지 못함)
//	return 0;
//
//}

//-----------------
//2 흐름제어문
//----------------

//1) 전체 구구단 수 출력
// 2 ~9 단
// 중첩 while문을 이용

//#include <stdio.h>
//
//int main() {
//	// 반복의 탈출 조건
//	// 1 탈출용 변수의 초기값 지정
//	// 2 탈출용 조건식
//	// 3 변수의 증감을 통해 조건식을 거짓으로 만듦
//	int dan = 2; // 탈출용 변수
//	int j = 1;
//	while (dan < 10) // 참 0이 아닌 모든 값  거짓 0
//	{
//		j = 1;
//		while (j < 10)
//		{
//			printf("%d x %d = %d\n", dan, j, dan*j);
//			j++;
//		}
//		printf("\n");
//		dan++;
//		
//		//반복코드
//	}
//	return 0;
//}

// 별찍기

//   *      
//  ***
// *****
//*******
/*
  i		k(공백)		j(*)
  0		0-2			0-0
  1		0-1			0-2
  2		0-0			0-4
  3		X			0-6
  ----------------------
		k=0			j=0
		k<=2-i		j<=2*i
*/

//#include <stdio.h>
//
//int main() {
//	int i = 0; //줄바꿈용
//	int k = 0; //공백찍기
//	int j = 0; //별찍기
//
//	while (i < 4)
//	{
//		k = 0;
//		while (k <= 2 - i)
//		{
//			printf(" ");
//			k++;
//		}
//		// 별찍기
//		j = 0;
//		while (j <= 2 * i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//
//	}
//
//	return 0;
//}

// *******
//  *****
//   ***
//    *

//정수값 하나를 입력받아 해당 수만큼의 개행작업이 이뤄지면서
// 정삼각형 모양의 별을 만들어 보세요
/*
 [출력 예]
 높이 입력 : 6

		*
	   ***
	  *****
	 *******
	*********

*/

//----------------------------
// 3포인터
//----------------------------
/*
Point : 점, 가리키다
Pointer : 가르키는 도구

특정 공간의 위치정보(메모리주소)를 담아 메모리공간을 제어(값저장/변경)할수있는 특수변수

변수종류

일반 변수 : 데이터값을 저장
포인터변수 : 메모리주소값을 저장

포인터 연산자
* : 포인터 연산자
& : 참조연산자

int num = 3;
*/