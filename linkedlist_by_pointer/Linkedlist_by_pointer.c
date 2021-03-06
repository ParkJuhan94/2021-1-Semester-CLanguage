#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc함수를 이용하기 위한 헤더 파일
struct list* create();
void print(struct list* head);

struct list {
	int data;
	struct list* next;
};

struct list* create()
{
	struct list* a, * b, * c;
	a = (struct list*)malloc(sizeof(struct list)); //포인터에는 따로 메모리가 없으니 메모리 할당
	b = (struct list*)malloc(sizeof(struct list));
	c = (struct list*)malloc(sizeof(struct list));

	a->data = 10;
	b->data = 20;
	c->data = 30;
	a->next = b;
	b->next = c;
	c->next = NULL;
	return a;
}

void print(struct list* head)
{
	while (head) {
		printf("%d\n", head->data);
		head = head->next;
	}
}

void main()
{
	struct list* head; //첫번째 노드를 저장하는 구조체 포인터. 맨 처음 가르키는 구조체가 무엇인지 저장하는 빈 구조체를 선언했습니다
	head = create();//head 도 struct 형의 포인터이니,create도 struct형의 포인터 함수로 해줘야만 한다
	print(head);
}