//---------------------------------
// ����Ž��
//---------------------------------

#include <stdio.h>

//����Ž�� �Լ�
int  LSearch(int* ar, int len, int target) {  //ar : mian�Լ� arr�� ����Ű�� ������
												//len : �迭�� ����
												// target : ã�� ������
	/*
	�迭�� 0 ��° ���� ������ ��ұ��� ������ �̵��ϸ鼭
	target�� ��ġ�ϴ� �����Ͱ� �ִ� Ȯ���� �����ϴٸ�
	//�ش� ����� idx���� retrun �մϴ�.
	target�� ��ġ�ϴ� ������ ������ -1�� return�Ѵ�.
	*/

}

int main()
{
	int arr[] = { 3,5,2,4,9 };
	int idx;
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx = -1)
	{
		printf("�ش� ���ڴ� �������� �ʽ��ϴ�");
	}
	else {
		printf("Ÿ�� ���� IDX: %d\n", idx);
	}
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx = -1)
	{
		printf("�ش� ���ڴ� �������� �ʽ��ϴ�");
	}
	else {
		printf("Ÿ�� ���� IDX: %d\n", idx);
	}
	return 0;
}