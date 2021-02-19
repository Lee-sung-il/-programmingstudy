//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
//typedef struct ListNode {
//	char data[4];
//	struct ListNode* link;
//} listNode;
//
//// ����Ʈ�� ����
//listNode* L;	//��������
//
//// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
//void freeLinkedList() {
//	listNode* p;
//	listNode* cur = L;
//
//	while (cur != NULL) {
//		p = cur;
//		cur = cur->link;
//		free(p);
//	}
//
//	L = NULL;
//}
//
//// ���� ����Ʈ�� ������� ����ϴ� ����
//void printList() {
//	listNode* cur = L;
//
//	printf("L = (");
//	while (cur != NULL) {
//		printf("%s", cur->data);
//		cur = cur->link;
//		if (cur != NULL)
//			printf(", ");
//	}
//	printf(") \n");
//}
//// ù ��° ���� �����ϴ� ����
//void insertFirstNode(char* x) {
//	
//	//1 ��� ���� ������ �� ��ũ NULL
//	
//	listNode* new = (listNode *)malloc(sizeof(listNode));
//	
//	if (new == NULL)
//	{
//		printf("�����Ҵ� ����!\n");
//		exit(1);
//	}
//
//	strcpy_s(new->data, sizeof(new->data), x);
//
//	new->link = NULL;
//	
//	if (L==NULL)	//��� X
//	{
//		L = new;
//	}
//	else {//��� O
//		new->link = L;
//		L = new;
//	}
//
//}
//// ������ ���� �����ϴ� ����
//void insertLastNode(char* x) {
//	//1 ��� ���� ������ �� ��ũ NULL
//	
//	listNode* new = (listNode*)malloc(sizeof(listNode));
//	
//	if (new == NULL)
//	{
//		printf("�����Ҵ� ����!\n");
//		exit(1);
//	}
//	
//	strcpy_s(new->data, sizeof(new->data), x);
//	
//	new->link = NULL;
//
//	if (L == NULL)//��� X
//	{
//		L = new;
//	}
//	else {//��� O
//		
//		listNode* cur = L;
//
//		while (cur->link != NULL)
//		{
//			cur = cur->link;
//		}
//
//		cur->link = new;
//	
//	}
//	
//
//}
//// ����Ʈ���� x ��带 Ž���ϴ� ����
//listNode* searchNode(char* x) {
//
//	listNode* cur = L;
//
//	if (cur == NULL)
//	{
//		printf("������ ����\n");
//		return 0;
//	}
//
//	while (cur != NULL)
//	{
//		if (strcmp(cur->data,x) == 0)
//		{
//			break;
//		}
//		cur = cur->link;
//	}
//	//1) ���Ž������ cur���� ����� �ּҰ� ���
//	//2) ���Ž������ cur���� NULL�̴��
//	return cur;
//	
//
//}
//// ��带 pre �ڿ� �����ϴ� ����
//void insertMiddleNode(listNode* pre, char* x) {
//	
//	//p�� NULL�ΰ�� ��ȸ����...
//	if (pre == NULL)
//	{
//		printf("�� ��尡 �˻����� �ʽ��ϴ�\n");
//		return;
//	}
//
//	listNode* new = (listNode*)malloc(sizeof(listNode));
//
//	if (new == NULL)
//	{
//		printf("�����Ҵ� ����!\n");
//		exit(1);
//	}
//
//	strcpy_s(new->data, sizeof(new->data), x);
//
//	new->link = NULL;
//
//	//p�� NULL�� �ƴѰ�� -> �ڿ� ����
//
//	new->link = pre->link;
//	
//	pre->link = new;
//}
//
//// ����Ʈ���� ��� p�� �����ϴ� ����
//void deleteNode(listNode* p) {
//	
//	//p�� NULL ���� �ƴ���
//	
//	if (p == NULL)
//	{
//		printf("���� ��尡 �������� �ʽ��ϴ�.\n");
//		return;
//	}
//
//	//p�� ù��带 ����Ų�ٸ�
//
//	if (p == L)
//	{
//		L = p->link;
//		free(p);
//	}
//
//	//p�� ù��尡 �ƴ϶��
//	
//	else
//	{
//		listNode* pre = L;
//		while (pre != NULL)
//		{
//			if (pre->link == p)
//			{
//				break;
//			}
//
//			pre = pre->link;
//		}
//	
//		//����� ã��
//		
//		pre->link = p->link;
//		free(p);
//	}
//
//}
//
//int main() {
//	listNode* p;
//	L = NULL;               //���� ����Ʈ ����
//
//	// ---------------------------------------------
//	// ������ ����(ù���)
//	// ---------------------------------------------
//
//	printf("----------(1) ù��忡 ���� [��][��] ----------\n");
//	insertFirstNode("��");
//	insertFirstNode("��");
//	printList();
//
//	// ---------------------------------------------
//	// ������ ����(�����)
//	// ---------------------------------------------
//	printf("\n----------(2) ������ ��忡 ���� [��][��][��] ----------\n");
//	insertLastNode("��");
//	insertLastNode("��");
//	insertLastNode("��");
//	printList();
//
//	// ---------------------------------------------
//	// ������ Ž��
//	// ---------------------------------------------
//	printf("\n----------(4) ����Ʈ���� [��] ��� Ž���ϱ�!----------\n");
//	p = searchNode("��");
//	if (p == NULL)
//		printf("ã�� �����Ͱ� �����ϴ�.\n");
//	else
//		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
//
//	printf("\n----------(3) ����Ʈ���� [��] ��� Ž���ϱ�! ----------\n");
//	p = searchNode("��");
//	if (p == NULL)
//		printf("ã�� �����Ͱ� �����ϴ�.\n");
//	else
//		printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);
//
//	// ---------------------------------------------
//	// ������ ���� (�߰� ���)
//	// ---------------------------------------------
//	printf("\n----------(5) ����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�!----------\n");
//	insertMiddleNode(p, "��");
//	printList();
//
//	// ---------------------------------------------
//	// ������ ����
//	// ---------------------------------------------
//	printf("\n----------(6) ����Ʈ���� [��]��� �����ϱ�!----------\n");
//	p = searchNode("��");		// ������ ��� ��ġ p�� ã��
//	deleteNode(p);				// ������ p ��� ����
//	printList();
//
//	printf("\n----------(7) ����Ʈ���� [��]��� �����ϱ�!----------\n");
//	p = searchNode("��");
//	deleteNode(p);
//	printList();
//
//	printf("\n----------(8) ����Ʈ���� [��]��� �����ϱ�!----------\n");
//	p = searchNode("��");
//	deleteNode(p);
//	printList();
//
//	freeLinkedList();               //����Ʈ �޸� ����
//	return 0;
//}