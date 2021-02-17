#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
} listNode;

// 리스트의 시작
listNode* L;	//전역변수

// 연결 리스트의 전체 메모리를 해제하는 연산
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

// 연결 리스트를 순서대로 출력하는 연산
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

// 첫 번째 노드로 삽입하는 연산
void insertFirstNode(char* x) {

	//1 new 노드 생성(구조체+동적할당+포인터)-> Null체크 
	listNode* new = (listNode*)malloc(sizeof(listNode));
	if (new == NULL) {
				printf("동적할당 실패");
				exit(1);
			}
	//2 데이터 부분 값삽입
	strcpy_s(new->data, sizeof(new->data), x);
	//3 링크 Null 삽입
	new->link = NULL;


	if (L != NULL) {//4-1 노드가 하나이상 있는경우 -> 처음위치에 연결
		new->link = L;
		L = new;
	}
	else {//4-2 노드가 하나도 없는경우 -> 전역L포인터에 노드 바로연결 
		L = new;
	}


}


// 마지막 노드로 삽입하는 연산
void insertLastNode(char* x) {
	//1 new 노드 생성(구조체+동적할당+포인터)-> Null체크 
	listNode* new = (listNode*)malloc(sizeof(listNode));
	if (new == NULL) {
		printf("동적할당 실패");
		exit(1);
	}
	//2 데이터 부분 값삽입
	strcpy_s(new->data, sizeof(new->data), x);
	//3 링크 Null 삽입
	new->link = NULL;

	//4-1 노드가 하나도 없는경우 -> 전역L포인터에 노드 바로연결 
	//4-2 노드가 하나이상 있는경우 -> 마지막 위치에 연결 코드 작성 

	//5 tmp 포인터를 만들어서 각 노드를 순회(tmp=tmp->link)하면서 마지막위치(link가 NULL) 인지 확인
	//6 마지막위치에서 새노드를 연결	

}

// 리스트에서 x 노드를 탐색하는 연산
listNode* searchNode(char* x) {


}

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(listNode* pre, char* x) {

}

// 리스트에서 노드 p를 삭제하는 연산
void deleteNode(listNode* p) {

}


int main() {
	listNode* p;
	L = NULL;               //공백 리스트 생성

	// ---------------------------------------------
	// 데이터 삽입(첫노드)
	// ---------------------------------------------

	printf("----------(1) 첫노드에 삽입 [월][수] ----------\n");
	insertFirstNode("수");
	insertFirstNode("월");
	printList();

	// ---------------------------------------------
	// 데이터 삽입(끝노드)
	// ---------------------------------------------
	printf("\n----------(2) 마지막 노드에 삽입 [목][토][일] ----------\n");
	insertLastNode("목");
	insertLastNode("토");
	insertLastNode("일");
	printList();



	freeLinkedList();               //리스트 메모리 해제
	return 0;
}