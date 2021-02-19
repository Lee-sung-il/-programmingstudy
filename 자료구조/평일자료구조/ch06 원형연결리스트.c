#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
}Node;

typedef struct CList
{
	Node* tail;		// ���� ��ġ ������
	int NodeCnt;	// ������ ���� Ȯ��
}List;

//�ʱ�ȭ�Լ�
void ListInit(List* plist)
{
	plist->tail = NULL;	// ���������� �ʱ�ȭ
	plist->NodeCnt = 0;	// ������ ���� �ʱ�ȭ
}

//����Ʈ ����Ʈ �Լ� 
void PrintList(List* plist)
{
	Node* head = plist->tail->next;
	if (plist->NodeCnt != 0)
	{
		for (int i = 0; i < plist->NodeCnt; i++)
		{
			printf("%d ", head->data);
			head = head->next;
		}
		printf("\n");
	}
}
//�������� ����
void LInsert(List* plist, int data)
{
	//1 ������
	Node* new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		printf("�����Ҵ� ����!\n");
		exit(1);
	}
	//2 ������ ���ֱ�
	new->data = data;
	//3 ��ũ�� �ʱ�ȭ
	new->next = NULL;

	if (plist->tail == NULL)//4-1 ��尡 �ϳ��� ������
	{
		plist->tail = new;
		plist->tail->next = new;
		
	}
	else//4-2 ��尡 �ϳ��̻� ������
	{
		new->next = plist->tail->next;
		plist->tail->next = new;
		plist->tail = new;

	}

	//5 ������ ���� ����
	plist->NodeCnt++;

}

//ó���� ����
void LInsertFront(List* plist, int data)
{
	//1 ������(NULLüũ) + �����Ͱ� �ֱ� + ��ũNULL �ʱ�ȭ
	Node* new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		printf("�����Ҵ� ����!\n");
		exit(1);
	}
	new->data = data;
	new->next = NULL;
	if (plist->tail == NULL)//2-1 ��� X
	{
		plist->tail = new;
		plist->tail->next = new;
	}
	else//2-2 ��尡 O
	{
		new->next = plist->tail->next;
		plist->tail->next = new;

	}

	//5 ������ ���� ����
	plist->NodeCnt++;
}


//��ȸ �Լ�
Node* SearchNode(List* plist, int target)
{
	// NodeCnt�� �̿��ؼ�(�ݺ������)
	//target�� ��ġ�ϴ� �����͸� ������ ����� �ּҸ� ��ȯ
	//target�� ��ġ�ϴ� �����Ͱ� ������ NULL�� ��ȯ(����)




}

//���� �Լ�
int LRemove(List* plist, int target)
{


}

int main(void)
{
	//-----------------------------------
	// ���� ���� ����Ʈ�� ���� �� �ʱ�ȭ 
	//-----------------------------------
	List list;
	int data, i, nodeNum;
	ListInit(&list);
	int num;

	//-----------------------------------
	// ����忡 ���� /////// 
	//-----------------------------------
	printf("\n--------(1) �� ��忡 ���� ---------\n");
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	PrintList(&list);

	//-----------------------------------
	// ù��忡 ���� /////// 
	//-----------------------------------
	printf("\n--------(2) ù ��忡 ���� ---------\n");
	LInsertFront(&list, 2);
	LInsertFront(&list, 1);
	PrintList(&list);

	//-----------------------------------
	//����� ������ ��ȸ///////
	//-----------------------------------
	printf("\n--------(3) ������ ��ȸ ---------\n");
	printf("�� �Է�[��ȸ] : ");
	scanf_s("%d", &num);
	Node* cur = SearchNode(&list, num);
	if (cur == NULL)
		printf("�Է��� ���� ��ġ�ϴ� �����ʹ� �����ϴ�\n");
	else
		printf("�Է��� �� %d �� �����մϴ�\n", cur->data);
	return 0;
}