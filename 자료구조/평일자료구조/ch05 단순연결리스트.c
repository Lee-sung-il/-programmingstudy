#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

// ����Ʈ�� ����
listNode* L;	//��������

// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList() {
	listNode* p;
	listNode* cur = L;

	while (cur != NULL) {
		p = cur;
		cur = cur->link;
		free(p);
	}

	L = NULL;
}

// ���� ����Ʈ�� ������� ����ϴ� ����
void printList() {
	listNode* cur = L;

	printf("L = (");
	while (cur != NULL) {
		printf("%s", cur->data);
		cur = cur->link;
		if (cur != NULL)
			printf(", ");
	}
	printf(") \n");
}

// ù ��° ���� �����ϴ� ����
void insertFirstNode(char* x) {

	//1 new ��� ����(����ü+�����Ҵ�+������)-> Nullüũ 
	listNode* new = (listNode*)malloc(sizeof(listNode));
	if (new == NULL) {
				printf("�����Ҵ� ����");
				exit(1);
			}
	//2 ������ �κ� ������
	strcpy_s(new->data, sizeof(new->data), x);
	//3 ��ũ Null ����
	new->link = NULL;


	if (L != NULL) {//4-1 ��尡 �ϳ��̻� �ִ°�� -> ó����ġ�� ����
		new->link = L;
		L = new;
	}
	else {//4-2 ��尡 �ϳ��� ���°�� -> ����L�����Ϳ� ��� �ٷο��� 
		L = new;
	}


}


// ������ ���� �����ϴ� ����
void insertLastNode(char* x) {
	//1 new ��� ����(����ü+�����Ҵ�+������)-> Nullüũ 
	listNode* new = (listNode*)malloc(sizeof(listNode));
	if (new == NULL) {
		printf("�����Ҵ� ����");
		exit(1);
	}
	//2 ������ �κ� ������
	strcpy_s(new->data, sizeof(new->data), x);
	//3 ��ũ Null ����
	new->link = NULL;
	
	if (L != NULL) {//4-1 ��尡 �ϳ��̻� �ִ°�� -> ó����ġ�� ����
		
					//5 tmp �����͸� ���� �� ��带 ��ȸ(tmp=tmp->link)�ϸ鼭 ��������ġ(link�� NULL) ���� Ȯ��
		listNode* tmp = L;
		while (tmp->link != NULL)
		{
			tmp = tmp->link;
		}
		//�ݺ����� ����ٴ� �ǹ̴�  tmp�� ��������带 ����Ű�� �ִ� ����
		tmp->link = new;//6 ��������ġ���� ����带 ����	
			
			
	}
	else {//4-2 ��尡 �ϳ��� ���°�� -> ����L�����Ϳ� ��� �ٷο��� 
		L = new;
	}


}

// ����Ʈ���� x ��带 Ž���ϴ� ����
listNode* searchNode(char* x) {
	//1 Ž���� ����ü ������(tmp) ����
	//2 ����� �����ּҸ� tmp�����Ϳ� ����
	listNode* tmp = L;
	//1) ��尡 �ϳ��� ���� ��� 
	if (L == NULL)
	{
		return NULL;
	}
	//��尡 ������ 
	while (tmp != NULL)//3 ����带 ��ȸ(tmp=tmp->link)�ϸ鼭 ã�� ���ڿ��� ��ġ�ϴ� ���ڿ� Ȯ��(strcmp(�ּ�1,�ּ�2))
	{
		if (strcmp(tmp->data,x)==0) // �����Ͱ� ��ġ
		{
			break;
		}
		tmp = tmp->link;
	}
	
	return tmp;//1) ������ �����Ͱ��� �ּҰ� tmp�� ��ܼ� break���
			   //2) ����� ���������� �̵��� ��� (��ġ�ϴ� �����Ͱ� ����)
	


}

// ��带 pre �ڿ� �����ϴ� ����
void insertMiddleNode(listNode* pre, char* x) {

}

// ����Ʈ���� ��� p�� �����ϴ� ����
void deleteNode(listNode* p) {

}


int main() {
	listNode* p;
	L = NULL;               //���� ����Ʈ ����

	// ---------------------------------------------
	// ������ ����(ù���)
	// ---------------------------------------------

	printf("----------(1) ù��忡 ���� [��][��] ----------\n");
	insertFirstNode("��");
	insertFirstNode("��");
	printList();

	// ---------------------------------------------
	// ������ ����(�����)
	// ---------------------------------------------
	printf("\n----------(2) ������ ��忡 ���� [��][��][��] ----------\n");
	insertLastNode("��");
	insertLastNode("��");
	insertLastNode("��");
	printList();


	// ---------------------------------------------
	// ������ Ž��
	// ---------------------------------------------
	printf("\n----------(4) ����Ʈ���� [��] ��� Ž���ϱ�!----------\n");
	p = searchNode("��");
	if (p == NULL)
		printf("ã�� �����Ͱ� �����ϴ�.\n");
	else
		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("\n----------(3) ����Ʈ���� [��] ��� Ž���ϱ�! ----------\n");
	p = searchNode("��");
	if (p == NULL)
		printf("ã�� �����Ͱ� �����ϴ�.\n");
	else
		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);



	freeLinkedList();               //����Ʈ �޸� ����
	return 0;
}