#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc�Լ��� �̿��ϱ� ���� ��� ����
struct list* create();
void print(struct list* head);

struct list {
	int data;
	struct list* next;
};

struct list* create()
{
	struct list* a, * b, * c;
	a = (struct list*)malloc(sizeof(struct list)); //�����Ϳ��� ���� �޸𸮰� ������ �޸� �Ҵ�
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
	struct list* head; //ù��° ��带 �����ϴ� ����ü ������. �� ó�� ����Ű�� ����ü�� �������� �����ϴ� �� ����ü�� �����߽��ϴ�
	head = create();//head �� struct ���� �������̴�,create�� struct���� ������ �Լ��� ����߸� �Ѵ�
	print(head);
}