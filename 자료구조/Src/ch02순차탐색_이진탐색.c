//---------------------------------
// ����Ž��
//---------------------------------

//#include <stdio.h>
//
////����Ž�� �Լ� 
//int LSearch(int *ar, int len, int target)	//ar : main�Լ�arr������Ű�� ������
//{											//len : �迭�� ����
//											//target : ã�� ������ 
//
//	//�迭�� 0��°���� ������ ��ұ��� ���ʷ� �̵��ϸ鼭
//	//target�� ��ġ�ϴ� �����Ͱ� �ִ��� Ȯ���� �����Ѵٸ�
//	//�ش� ����� idx���� return �մϴ�
//	//target�� ��ġ�ϴ� �����Ͱ� ������ -1�� return �մϴ� 
//	
//	for (int i = 0; i < len; i++)
//	{
//		if (ar[i] == target)	//ar[i]��° ��Ұ��� target�� ��ġ�ϴٸ�
//			return i;			//�����ִ� idx�� ���� 
//	}
//	return -1;	//�ݺ����� ����Եȴٸ�(�迭��ҿ� target�̾���) -1 ����
//}
//int main()
//{
//	int arr[] = { 3,5,2,4,9 };
//	int idx;
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("�ش� ���ڴ� �������� �ʽ��ϴ�\n");
//	else
//		printf("Ÿ�� ���� IDX : %d\n", idx);
//
//	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("�ش� ���ڴ� �������� �ʽ��ϴ�\n");
//	else
//		printf("Ÿ�� ���� IDX : %d\n", idx);
//	return 0;
//}


//--------------------------------------
//���� Ž��
//--------------------------------------

//#include <stdio.h>
//
//int BSearch(int ar[], int len, int target)
//{
//	int First = 0;
//	int Last = len - 1;
//	int mid = 0;
//	//Ž���� ���Ǵ� �ݺ���
//	while (First <= Last)
//	{
//		mid = (First + Last) / 2;  //<--�ڵ��Է� (hint : Mid Index ����)
//
//		//�迭�� mid��° ��Ұ��� target�� ��ġ�Ѵٸ�
//		if (ar[mid] == target)
//		{
//			//�ش� ��ġ idx�� return 
//			return mid;
//		}
//		//�迭�� mid��° ��Ұ��� target���� ũ�ٸ� 
//		if (ar[mid] > target)
//		{
//			//Last�� mid���� 1 ���� ��ġ�� idx�� ����
//			Last = mid - 1;
//		
//		}
//
//		//�迭�� mid��° ��Ұ��� target���� �۴ٸ� 
//		if (ar[mid] < target)
//		{
//			//First�� mid���� 1 ū ��ġ�� idx�� ����
//			First = mid + 1;
//			
//		}
//
//	}
//
//	return -1;	//�ݺ����� ��� ������ First>Last ���� Ŀ�����
//				//target�� �迭�� �����Ƿ� -1�� ���� 
//
//}
//
//int main(void)
//{
//	int arr[] = { 1, 3, 5, 7, 9 };
//	int idx;
//
//	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
//	if (idx == -1)
//		printf("Ž�� ���� \n");
//	else
//		printf("Ÿ�� ���� �ε���: %d \n", idx);
//
//	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
//	if (idx == -1)
//		printf("Ž�� ���� \n");
//	else
//		printf("Ÿ�� ���� �ε���: %d \n", idx);
//
//	return 0;
//}