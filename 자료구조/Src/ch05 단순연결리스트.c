//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 단순 연결 리스트의 노드 구조를 구조체로 정의
//typedef struct ListNode {
//	char data[4];
//	struct ListNode* link;
//} listNode;
//
//// 리스트의 시작
//listNode* L;	//전역변수
//
//// 연결 리스트의 전체 메모리를 해제하는 연산
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
//// 연결 리스트를 순서대로 출력하는 연산
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
//// 첫 번째 노드로 삽입하는 연산
//void insertFirstNode(char* x) {
//	
//	//1 노드 생성 데이터 값 링크 NULL
//	
//	listNode* new = (listNode *)malloc(sizeof(listNode));
//	
//	if (new == NULL)
//	{
//		printf("동적할당 실패!\n");
//		exit(1);
//	}
//
//	strcpy_s(new->data, sizeof(new->data), x);
//
//	new->link = NULL;
//	
//	if (L==NULL)	//노드 X
//	{
//		L = new;
//	}
//	else {//노드 O
//		new->link = L;
//		L = new;
//	}
//
//}
//// 마지막 노드로 삽입하는 연산
//void insertLastNode(char* x) {
//	//1 노드 생성 데이터 값 링크 NULL
//	
//	listNode* new = (listNode*)malloc(sizeof(listNode));
//	
//	if (new == NULL)
//	{
//		printf("동적할당 실패!\n");
//		exit(1);
//	}
//	
//	strcpy_s(new->data, sizeof(new->data), x);
//	
//	new->link = NULL;
//
//	if (L == NULL)//노드 X
//	{
//		L = new;
//	}
//	else {//노드 O
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
//// 리스트에서 x 노드를 탐색하는 연산
//listNode* searchNode(char* x) {
//
//	listNode* cur = L;
//
//	if (cur == NULL)
//	{
//		printf("현재노드 없음\n");
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
//	//1) 노드탐색성공 cur에는 노드의 주소가 담김
//	//2) 노드탐색실패 cur에는 NULL이담김
//	return cur;
//	
//
//}
//// 노드를 pre 뒤에 삽입하는 연산
//void insertMiddleNode(listNode* pre, char* x) {
//	
//	//p가 NULL인경우 조회실패...
//	if (pre == NULL)
//	{
//		printf("앞 노드가 검색되지 않습니다\n");
//		return;
//	}
//
//	listNode* new = (listNode*)malloc(sizeof(listNode));
//
//	if (new == NULL)
//	{
//		printf("동적할당 실패!\n");
//		exit(1);
//	}
//
//	strcpy_s(new->data, sizeof(new->data), x);
//
//	new->link = NULL;
//
//	//p가 NULL이 아닌경우 -> 뒤에 연결
//
//	new->link = pre->link;
//	
//	pre->link = new;
//}
//
//// 리스트에서 노드 p를 삭제하는 연산
//void deleteNode(listNode* p) {
//	
//	//p가 NULL 인지 아닌지
//	
//	if (p == NULL)
//	{
//		printf("삭제 노드가 존재하지 않습니다.\n");
//		return;
//	}
//
//	//p가 첫노드를 가르킨다면
//
//	if (p == L)
//	{
//		L = p->link;
//		free(p);
//	}
//
//	//p가 첫노드가 아니라면
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
//		//전노드 찾음
//		
//		pre->link = p->link;
//		free(p);
//	}
//
//}
//
//int main() {
//	listNode* p;
//	L = NULL;               //공백 리스트 생성
//
//	// ---------------------------------------------
//	// 데이터 삽입(첫노드)
//	// ---------------------------------------------
//
//	printf("----------(1) 첫노드에 삽입 [월][수] ----------\n");
//	insertFirstNode("수");
//	insertFirstNode("월");
//	printList();
//
//	// ---------------------------------------------
//	// 데이터 삽입(끝노드)
//	// ---------------------------------------------
//	printf("\n----------(2) 마지막 노드에 삽입 [목][토][일] ----------\n");
//	insertLastNode("목");
//	insertLastNode("토");
//	insertLastNode("일");
//	printList();
//
//	// ---------------------------------------------
//	// 데이터 탐색
//	// ---------------------------------------------
//	printf("\n----------(4) 리스트에서 [금] 노드 탐색하기!----------\n");
//	p = searchNode("금");
//	if (p == NULL)
//		printf("찾는 데이터가 없습니다.\n");
//	else
//		printf("[%s]를 찾았습니다.\n", p->data);
//
//	printf("\n----------(3) 리스트에서 [목] 노드 탐색하기! ----------\n");
//	p = searchNode("목");
//	if (p == NULL)
//		printf("찾는 데이터가 없습니다.\n");
//	else
//		printf("[%s]를 찾았습니다.\n", p->data);
//
//	// ---------------------------------------------
//	// 데이터 삽입 (중간 노드)
//	// ---------------------------------------------
//	printf("\n----------(5) 리스트의 [목] 뒤에 [금] 노드 삽입하기!----------\n");
//	insertMiddleNode(p, "금");
//	printList();
//
//	// ---------------------------------------------
//	// 데이터 삭제
//	// ---------------------------------------------
//	printf("\n----------(6) 리스트에서 [일]노드 삭제하기!----------\n");
//	p = searchNode("일");		// 삭제할 노드 위치 p를 찾음
//	deleteNode(p);				// 포인터 p 노드 삭제
//	printList();
//
//	printf("\n----------(7) 리스트에서 [월]노드 삭제하기!----------\n");
//	p = searchNode("월");
//	deleteNode(p);
//	printList();
//
//	printf("\n----------(8) 리스트에서 [목]노드 삭제하기!----------\n");
//	p = searchNode("목");
//	deleteNode(p);
//	printList();
//
//	freeLinkedList();               //리스트 메모리 해제
//	return 0;
//}