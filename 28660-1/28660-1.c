#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�л� ���� ����ü
typedef struct {
	char* name;
	char id[9];
	int year;
} stu_t;

//��ü�� �ƿ츣�� ����ü ����� :
struct stlist {
	int numStu;  // �л� ��
	stu_t** stulist;  // ���� �Ҵ��� ���� �л� ����ü���� ����Ű�� ������ �迭�� ���.
};

//getStudent�� ������Ÿ���� ������ ����.
//struct student * getStudent();
//getStudent �Լ��� ȣ���Ͽ� ������ �л� �����͸� �Է��ϰ� �Ѵ�.
//�� �л��� �̸��� �ִ� 200����Ʈ(null - termination����)�� ���� �ʴ� ������ �����ϵ�,
//�����Ҵ����� �ּ� �޸𸮸� ����Ѵ�.

//struct student�� �Է� �޾Ƽ� �����ϴ� �Լ� 
stu_t* getStudent() {
	stu_t* p;
	char name[200];
	p = (stu_t*)malloc(sizeof(stu_t));
	scanf("%s", name);
	p->name = (char*)malloc(strlen(name) + 1);
	strcpy(p->name, name);
	scanf("%s%d", p->id, &p->year);
	return p;
}

//������Ÿ���� struct stlist * getStuList();
//�־��� ������ ����(student.data)ó�� �л� ���� �л� �����Ͱ� ��� ���� ��,
//�Ʒ��� ���� ������ ���� �л� ��� ����ü��(���� �����Ҵ� �ʿ�)
//�����͸� �Է��ؼ� �����ִ� �Լ� getStuList �� �ۼ��϶�.
//getStuList(..) �Լ� �ȿ�����
//ó���� �л� ���� �о���� ���� �ʿ��� ��ŭ ������ �迭�� �����Ҵ��ϰ�,
//getStudent �Լ��� ȣ���Ͽ� ������ �л� �����͸� �Է��ϰ� �Ѵ�.

//struct stlist�� �����Ҵ��ϰ� �Է¹��� �����Ͱ�����ŭ stulist�� �����Ҵ� ���ְ� getStudent �Լ��� ȣ���ϴ� �Լ� 
struct stlist* getStuList() {
	struct stlist* p;
	//int n;
	int i;
	p = (struct stlist*)malloc(sizeof(struct stlist));
	scanf("%d", &p->numStu); //�Է� ���� ������ ����
	p->stulist = (stu_t**)malloc(sizeof(stu_t*) * p->numStu);
	for (i = 0; i < p->numStu; i++) {
		p->stulist[i] = getStudent();
	}
	return p;
}

//�̸������� �������� ���� �ϴ� �Լ� 
void sort(struct stlist* p) {
	int i, j;
	stu_t* temp;
	//��������
	for (i = 0; i < p->numStu; i++) {
		for (j = p->numStu - 1; j > i; j--) {
			if (strcmp(p->stulist[j]->name, p->stulist[j - 1]->name) < 1) {
				temp = p->stulist[j];
				p->stulist[j] = p->stulist[j - 1];
				p->stulist[j - 1] = temp;
			}
		}
	}
}

//�Է� ���� ������ ��� ���� �Լ� 
void printAll(struct stlist* p) {
	int i;
	for (i = 0; i < p->numStu; i++) {
		printf("%s %s %d\n", p->stulist[i]->name, p->stulist[i]->id, p->stulist[i]->year);
	}
}

int main() {
	struct stlist* theStList;
	int i; //�ݺ��� ����

	theStList = getStuList();
	printAll(theStList);
	printf("\n\n");
	sort(theStList);  // �̸��� �������� �������� ����
	printAll(theStList);

	for (i = 0; i < theStList->numStu; i++) {
		free(theStList->stulist[i]->name);
		free(theStList->stulist[i]);
	}
	free(theStList->stulist);
	free(theStList);
	return 0;
}