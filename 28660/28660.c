//28660 �л� ������ ����ü�� �����Ҵ� �ٷ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
    char* name;     //�̸�
    char id[9];     //�й� (60191234 ó��)
    int year;       //�г�
} stu_t;

struct stlist {
    int numStu;         // �л� ��
    stu_t** stulist;    // ���� �Ҵ��� ���� �л� ����ü���� ����Ű�� ������ �迭�� ���.
};
// �Ѹ��� �����͸� ����� �ش�. �ּҸ� ��ȯ��!!
stu_t* getStudent() {   
    stu_t* p;
    char namebuf[200];
    p = (stu_t*)malloc(sizeof(stu_t)); 
    scanf("%s", namebuf);
    p->name = (char*)malloc(strlen(namebuf) + 1);
    strcpy(p->name, namebuf);
    scanf("%s %d", p->id, &p->year);
    return p;
}
// getStudent�� ȣ���Ͽ� ������ �������� ����Ʈ�� ����� �ش�. �ּҸ� ��ȯ��!!
struct stlist* getStuList() {
    struct stlist* p;
    p = (struct stlist*)malloc(sizeof(struct stlist));
    scanf("%d", &p->numStu);   //�Է� �������� ����
    p->stulist = (stu_t**)malloc(sizeof(stu_t*) * p->numStu);
    for (int i = 0; i < p->numStu; i++) {
        p->stulist[i] = getStudent();
    }
    return p;
}
//�������� �Լ�
void sort(struct stlist* p) {
    stu_t* tmp;
    for (int i = 0; i < p->numStu; i++) {
        for (int j = p->numStu - 1; j > i; j--) {
            if (strcmp(p->stulist[j]->name, p->stulist[j - 1]->name) < 1) {
                tmp = p->stulist[j];
                p->stulist[j] = p->stulist[j - 1];
                p->stulist[j - 1] = tmp;
            }
        }
    }
}
//��� �Լ�
void printAll(struct stlist* p) {
    for (int i = 0; i < p->numStu; i++) {
        printf("%s %s %d\n", p->stulist[i]->name, p->stulist[i]->id, p->stulist[i]->year);
    }
}

int main() {
    struct stlist* theStList;

    theStList = getStuList();
    printAll(theStList);

    // �̸��� �������� �������� ����
    sort(theStList);  
    printAll(theStList);
    return 0;
}
