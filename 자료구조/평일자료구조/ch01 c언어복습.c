// ------------------------------------------------------
//1. �迭 
/////////////////

//1) �迭 ũ�� Ȯ��

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
//	printf("char c ũ�� : %d char c_arrayũ�� =%d \n", sizeof(c), sizeof(c_array));	
//	printf("int i ũ�� : %d int i_arrayũ�� =%d \n", sizeof(i), sizeof(i_array));
//	printf("short s ũ�� : %d short s_arrayũ�� =%d \n", sizeof(s), sizeof(s_array));
//	printf("float fũ�� : %d char f_arrayũ�� =%d \n", sizeof(f), sizeof(f_array));
//	printf("long l ũ�� : %d char l_arrayũ�� =%d \n", sizeof(l), sizeof(l_array));
//	return 0;
//}

// 2) ���ڿ� vs ���ڿ�

//#include <stdio.h>
//
//int main() {
//	char str1[4] = "abc"; // ���ڿ� o ���ڹ迭 o
//	char str2[4] = "abcd";// ���ڿ� x ���ڹ迭 o
//
//	printf("str1 = %s\n",str1); // ���� ���
//	printf("str2 = %s\n", str2); // ������ ���(���ڿ��� ��, Null�� ��ġ�� �ľ����� ����)
//	return 0;
//
//}

//-----------------
//2 �帧���
//----------------

//1) ��ü ������ �� ���
// 2 ~9 ��
// ��ø while���� �̿�

//#include <stdio.h>
//
//int main() {
//	// �ݺ��� Ż�� ����
//	// 1 Ż��� ������ �ʱⰪ ����
//	// 2 Ż��� ���ǽ�
//	// 3 ������ ������ ���� ���ǽ��� �������� ����
//	int dan = 2; // Ż��� ����
//	int j = 1;
//	while (dan < 10) // �� 0�� �ƴ� ��� ��  ���� 0
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
//		//�ݺ��ڵ�
//	}
//	return 0;
//}

// �����

//   *      
//  ***
// *****
//*******
/*
  i		k(����)		j(*)
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
//	int i = 0; //�ٹٲ޿�
//	int k = 0; //�������
//	int j = 0; //�����
//
//	while (i < 4)
//	{
//		k = 0;
//		while (k <= 2 - i)
//		{
//			printf(" ");
//			k++;
//		}
//		// �����
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
	i			j(����)			k(*)
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
//	int i = 0; //�ٹٲ�
//	int j = 0; //����
//	int k = 0; //�����
//	while (i < 4)
//	{
//		//�������
//		j = 0;
//		while (j < i )
//		{
//			printf(" ");
//			j++;
//		}
//
//
//		//�����
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

//������ �ϳ��� �Է¹޾� �ش� ����ŭ�� �����۾��� �̷����鼭
// ���ﰢ�� ����� ���� ����� ������
/*
 [��� ��]
 ���� �Է� : 6

		*
	   ***
	  *****
	 *******
	*********

*/
/*
		i(�ٹٲ�)		j(����)				k(�����)
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
//	int i = 0; //�ٹٲ�
//	int j = 0; //����
//	int k = 0; //�����
//	int n;  //���� ����
//	printf("�ﰢ���� ���� : ");
//	scanf_s("%d", &n);
//	while (i < n)
//	{
//
//		//����
//		j = 0;
//		while (j<=(n-1)-i)
//		{
//			printf(" ");
//			j++;
//		}
//
//
//		//�����
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
// 3������
//----------------------------
/*
Point : ��, ����Ű��
Pointer : ����Ű�� ����

Ư�� ������ ��ġ����(�޸��ּ�)�� ��� �޸𸮰����� ����(������/����)�Ҽ��ִ� Ư������

��������

�Ϲ� ���� : �����Ͱ��� ����
�����ͺ��� : �޸��ּҰ��� ����

������ ������
* : ������ ������
& : ����������

int num = 3;  //3���� int ���� num�� ����
int *ptr = &num; // num�� �޸��ּҰ��� intũ�⸦ ����Ű�� ptr�����ͺ����� �ʱ�ȭ
*ptr = 10; // 10���� ptr�����Ͱ� ����Ű�� ������ ����
int num2 = *ptr; //ptr�� ����Ű�� ���� ���� num2������ �ʱ�ȭ
printf("*ptr = %d\n",*ptr); //ptr�� ����Ű�� ���� ���� 10������ ���Ŀ� �°� ���
*/

// 1) ������ ����
//�޸𸮸��� �׸��� �����ʿ� �ּ����� �ؼ��غ��ô�.

//#include <stdio.h>
//int main() {
//	int num = 10; //10 ������� num���������� �ʱ�ȭ
//	int *ptr1 = &num; // num�� �޸��ּҰ��� intũ�⸦ ����Ű�� ptr1�����ͺ����� �ʱ�ȭ
//	int *ptr2 = ptr1; // ptr1�� ��(�ּҰ�)�� ptr2�����ͺ����� �ʱ�ȭ
//
//	(*ptr1)++; // ptr1�� ����Ű�� ���� ���� 1����
//	(*ptr2)++;//  ptr2�� ����Ű�� ���� ���� 1����
//	printf("%d\n", num); //12
//	return 0;
//}

// 2) �����Ϳ� �迭

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


// 3) �����Ϳ� �Լ�

// Call-by-value		:�Լ��� �����Ҷ� �����ϴ� ���ڰ� �����Ͱ��� ���
// Call-by-address      :�Լ��� �����Ҷ� �����ϴ� ���ڰ� �޸��ּҰ��� ���
// Call-by-Reference(C++) : �Լ��� �����Ҷ� �����ϴ� ���ڰ� ���� ���� ���

//#include <stdio.h>
//void Swap(int x, int y) {
//	int tmp = x;
//	x = y;
//	y = tmp;
//
//}
//int main() {
//	int a = 10, b = 20;
//	printf("Swap �� a = %d,	b = %d\n", a, b);
//	Swap(&a, &b); // Call-by-value
//	printf("Swap �� a = %d,	b = %d\n", a, b);
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
//	printf("Swap �� a = %d,	b = %d\n", a, b);
//	Swap(&a, &b); // Call-by-value
//	printf("Swap �� a = %d,	b = %d\n", a, b);
//	return 0;
//}


//4) �����Ϳ� ���ڿ�

//#include <stdio.h>
//int main() {
//	char arr[20] = "hello World"; //�迭������ ���� ���� ���ڿ� ������� ����
//	char *ptr1 = "hello World";
//	char *ptr2 = "hello World";
//
//	printf("arr�迭�� �ּ� : %x\n", arr); //�迭�� �̸� �迭�� �����ּҸ� ����ִ� �����ͻ���̴�.
//	printf("hello World�� �ּ� : %x\n", "hello World");
//	printf("ptr1���� �ּ� : %x\n", ptr1);//"hello World"��� ���ڿ� ����� ����Ŵ(ptr1==ptr2)
//	printf("ptr2���� �ּ� : %x\n", ptr2);//"hello World"��� ���ڿ� ����� ����Ŵ(ptr1==ptr2)
//	
//	return 0;
//}


//----------------------------
// 4 �����Ҵ�
//----------------------------

//�ڵ� ����	: �����ϵ� ������ ����
//������ ���� : �����޸𸮿���(��������,static����)			 ���α׷� ���۽� ���� - > ���α׷� ����� �Ҹ�
//���ÿ���	: �߰�ȣ({}) ������ ��������� ����(��������)	 �߰�ȣ���� ���� -> �߰�ȣ ����� �Ҹ�
//������		: �����Ҵ� ����			malloc �Լ� �������� -> free �����Ҹ�


//�����Ҵ�: �ʿ��� ��ŭ ������ �Ҵ� �޾� �����ϱ� ���� ����
//�����Ҵ��� Heap ������ ������ �ȴ�.
//�����Ҵ��Լ� : malloc(��), realoc, calloc
//�����Ҵ� ���� �Լ� : free;

#include <stdio.h>
#include <stdlib.h>
int main() {

	/*int* pi;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("�����Ҵ� ����!");
		exit(1);
	}
	*pi = 10;
	printf("pi = %d\n", *pi);
	
	free(pi);*/

	// �����Ҵ� �迭
	int* arr;
	arr = (int*)malloc(sizeof(int) * 7);
	if (arr == NULL)
	{
		printf("�����Ҵ� ����!");
		exit(1);
	}
	//�����Ҵ� �迭�� ���ֱ�
	for (int i = 0; i < 7; i++)
	{
		arr[i] = i + 10; //�����Ϳ� �迭�� �����ּҸ� ������
						//�����͸� �迭ó�� ����Ҽ� �ִ�!!
	}
	//�����Ҵ� �迭�� �� ���
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

// int ���迭 10ĭ �迭�� �����Ҵ��ؼ�
// ������ ��ҿ� Ű����� �Է��� �������� �����ϼ���
//�׸��� ������� ���� �հ� �ּҰ�/�ִ밪�� ���غ�����
/*
	[��� ��]
	0 idx�� ���� �� : 10
	1 idx�� ���� �� : 5
	2 idx�� ���� �� : 4
	3 idx�� ���� �� : 22
	4 idx�� ���� �� : 77
	5 idx�� ���� �� : 123
	6 idx�� ���� �� : 45
	7 idx�� ���� �� : 23
	8 idx�� ���� �� : 89
	9 idx�� ���� �� : 122

	���� : ? �ִ밪 : ? �ּҰ� : ?

*/




