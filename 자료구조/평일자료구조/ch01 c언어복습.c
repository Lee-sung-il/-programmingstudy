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

/*
	i			j(공백)			k(*)
	0				X			0-6
	1			  0-0			0-4
	2			  0-1			0-2
	3			  0-2			0-0
---------------------------------------
				  j=0			k=0
				  j<i			k<=6-2*i
*/

//#include <stdio.h>
//
//int main() {
//	int i = 0; //줄바꿈
//	int j = 0; //공백
//	int k = 0; //별찍기
//	while (i < 4)
//	{
//		//공백찍기
//		j = 0;
//		while (j < i )
//		{
//			printf(" ");
//			j++;
//		}
//
//
//		//별찍기
//		k = 0;
//		while (k <= 6 - 2 * i)
//		{
//			printf("*");
//			k++;
//		}
//
//		printf("\n");
//		i++;
//
//	}
//
//	return 0;
//
//}

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
/*
		i(줄바꿈)		j(공백)				k(별찍기)
		0				0-n-1					0-0
		1				0-n-2					0-2
		2				0-n-3					0-4
		3				0-0					    0-6
		4				X						0-8
		...
		n				X					    0-2*n

--------------------------------------------------------------------
						j=0						k=0
						j<=(n-1)-i				k<=2*i
*/


//#include <stdio.h>
//int main() {
//	int i = 0; //줄바꿈
//	int j = 0; //공백
//	int k = 0; //별찍기
//	int n;  //높이 저장
//	printf("삼각형의 높이 : ");
//	scanf_s("%d", &n);
//	while (i < n)
//	{
//
//		//공백
//		j = 0;
//		while (j<=(n-1)-i)
//		{
//			printf(" ");
//			j++;
//		}
//
//
//		//별찍기
//		k = 0;
//		while (k<= 2*i)
//		{
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}

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

int num = 3;  //3값을 int 공간 num에 대입
int *ptr = &num; // num의 메모리주소값을 int크기를 가리키는 ptr포인터변수에 초기화
*ptr = 10; // 10값을 ptr포인터가 가리키는 공간에 대입
int num2 = *ptr; //ptr이 가리키는 곳의 값을 num2변수에 초기화
printf("*ptr = %d\n",*ptr); //ptr이 가리키는 곳의 값을 10진정수 서식에 맞게 출력
*/

// 1) 포인터 복습
//메모리맵을 그리고 오른쪽에 주석으로 해석해봅시다.

//#include <stdio.h>
//int main() {
//	int num = 10; //10 상수값을 num변수공간에 초기화
//	int *ptr1 = &num; // num의 메모리주소값을 int크기를 가리키는 ptr1포인터변수에 초기화
//	int *ptr2 = ptr1; // ptr1의 값(주소값)을 ptr2포인터변수에 초기화
//
//	(*ptr1)++; // ptr1이 가리키는 곳의 값을 1증가
//	(*ptr2)++;//  ptr2이 가리키는 곳의 값을 1증가
//	printf("%d\n", num); //12
//	return 0;
//}

// 2) 포인터와 배열

//#include <stdio.h>
//
//int main() {
//
//	int arr[4] = { 10,20,30,40 };
//	int *ptr = &arr[0];
//
//	printf("%d %d\n", *(ptr),ptr[0]);
//	printf("%d %d\n", *(ptr + 1),ptr[1]);
//	printf("%d %d\n", *(ptr + 2),ptr[2]);
//	printf("%d %d\n", *(ptr + 3),ptr[3]);
//
//	/*printf("%x\n", (ptr + 0));
//	printf("%x\n", (ptr + 1));
//	printf("%x\n", (ptr + 2));
//	printf("%x\n", (ptr + 3));*/
//
//
//	return 0;
//}


// 3) 포인터와 함수

// Call-by-value		:함수를 실행할때 전달하는 인자가 데이터값인 경우
// Call-by-address      :함수를 실행할때 전달하는 인자가 메모리주소값인 경우
// Call-by-Reference(C++) : 함수를 실행할때 전달하는 인자가 참조 값인 경우

//#include <stdio.h>
//void Swap(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//
//}
//int main() {
//	int a = 10, b = 20;
//	printf("Swap 전 a = %d,	b = %d\n", a, b);
//	Swap(&a, &b); // Call-by-value
//	printf("Swap 후 a = %d,	b = %d\n", a, b);
//	return 0;
//}

// Call-by-address  

//#include <stdio.h>
//void Swap(int *x, int *y) {
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main() {
//	int a = 10, b = 20;
//	printf("Swap 전 a = %d,	b = %d\n", a, b);
//	Swap(&a, &b); // Call-by-value
//	printf("Swap 후 a = %d,	b = %d\n", a, b);
//	return 0;
//}


//4) 포인터와 문자열

//#include <stdio.h>
//int main() {
//	char arr[20] = "hello World"; //배열공간을 따로 만들어서 문자열 상수값을 저장
//	char *ptr1 = "hello World";
//	char *ptr2 = "hello World";
//
//	printf("arr배열의 주소 : %x\n", arr); //배열의 이름 배열의 시작주소를 담고있는 포인터상수이다.
//	printf("hello World의 주소 : %x\n", "hello World");
//	printf("ptr1안의 주소 : %x\n", ptr1);//"hello World"라는 문자열 상수를 가리킴(ptr1==ptr2)
//	printf("ptr2안의 주소 : %x\n", ptr2);//"hello World"라는 문자열 상수를 가리킴(ptr1==ptr2)
//	
//	return 0;
//}


//----------------------------
// 4 동적할당
//----------------------------

//코드 영역	: 컴파일된 데이터 저장
//데이터 영역 : 공유메모리영역(전역변수,static변수)			 프로그램 시작시 생성 - > 프로그램 종료시 소멸
//스택영역	: 중괄호({}) 내에서 선언되지는 변수(지역변수)	 중괄호에서 생성 -> 중괄호 벗어나면 소멸
//힙영역		: 동적할당 영역			malloc 함수 공간생성 -> free 공간소멸


//동적할당: 필요한 만큼 공간을 할당 받아 저장하기 위한 문법
//동적할당은 Heap 영역에 형성이 된다.
//동적할당함수 : malloc(★), realoc, calloc
//동적할당 해제 함수 : free;

#include <stdio.h>
#include <stdlib.h>
int main() {

	/*int* pi;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("동적할당 실패!");
		exit(1);
	}
	*pi = 10;
	printf("pi = %d\n", *pi);
	
	free(pi);*/

	// 동적할당 배열
	int* arr;
	arr = (int*)malloc(sizeof(int) * 7);
	if (arr == NULL)
	{
		printf("동적할당 실패!");
		exit(1);
	}
	//동적할당 배열에 값넣기
	for (int i = 0; i < 7; i++)
	{
		arr[i] = i + 10; //포인터에 배열의 시작주소를 담으면
						//포인터를 배열처럼 사용할수 있다!!
	}
	//동적할당 배열의 값 출력
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

// int 형배열 10칸 배열을 동적할당해서
// 각각의 요소에 키보드로 입력한 정수값을 저장하세요
//그리고 각저장된 수의 합과 최소값/최대값을 구해보세요
/*
	[출력 예]
	0 idx에 정수 값 : 10
	1 idx에 정수 값 : 5
	2 idx에 정수 값 : 4
	3 idx에 정수 값 : 22
	4 idx에 정수 값 : 77
	5 idx에 정수 값 : 123
	6 idx에 정수 값 : 45
	7 idx에 정수 값 : 23
	8 idx에 정수 값 : 89
	9 idx에 정수 값 : 122

	총합 : ? 최대값 : ? 최소값 : ?

*/




