//-----------------------------------
//����Լ�
//------------------------------------
//�����θ� �ݺ������� ȣ���ϴ� ������ �ڵ带 �����ϴ� �Լ�

//1) ����Լ� �⺻

//#include <stdio.h>
//void Recursive(int num) {
//
//	if (num > 0) {
//		printf("Recursive call!! : %d\n", num);
//		Recursive(num - 1); //�ڽ��� ȣ��
//	}
//}
//
//
//int main() {
//
//	Recursive(3);
//	return 0;
//}


// 2) ����Լ� �⺻

//#include <stdio.h>
//void Recursive(int num) {
//
//	if (num > 0) {
//		Recursive(num - 1); //�ڽ��� ȣ��
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

//3) ����Լ� �⺻

//#include <stdio.h>
//void Recursive(int num) {
//
//	if (num > 0) {
//		printf("Recursive call!! : %d\n", num); // 3 -> 2 -> 1 
//		Recursive(num - 1); //�ڽ��� ȣ��
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


// 4) ����Լ��� �̿��ؼ� 1���� 10������ �� ���ϱ�

//#include <stdio.h>
//
//int recursive(int num) {
//
//	int sum = 0;
//
//	if (num > 0)
//	{
//		sum = recursive(num - 1) + num;
//		printf("num %d�� ���� sum�� �� : %d\n", num, sum);
//		return sum;
//		
//	}
//	return 0;
//	
//}
//int main() {
//	int total = recursive(10);
//	printf("�հ� : %d\n", total);
//	return 0;
//}


// 5) 1���� 10������ ������ 3�� ����� ���Ѱ��� ��� (�� % 3 == 0)

//#include <stdio.h>
//
//int recursive(int num) {
//
//	int sum = 0;
//
//	//���޹��� ���ڰ� 3�� ����� �ɶ� ���� num�� ����
//	while (num % 3 != 0 ) // 3�� ����� �ɶ�����
//	{
//		num--; // num�� 1����
//	}
//	//while�� �������ö� 9,6,3,0
//		if (num > 0)
//		{
//				sum = recursive(num - 1) + num;
//				printf("num %d�� ���� sum�� �� : %d\n", num, sum);
//				return sum;
//
//		}
//	return 0;
//}
//int main() {
//	int total = recursive(10);
//	printf("3�ǹ�� �հ� : %d\n", total);
//	return 0;
//}


//6) ����Լ��� �����

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



// 7) ����Լ��� �����
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


//����
//    *
//   ***
//  *****
//*********


//����
//*********
//  *****
//   ***
//    *

