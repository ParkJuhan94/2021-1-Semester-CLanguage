#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct stu {
    int id;
    char name[20];
    float gpa;
};

//prototype�� :  struct stu * getStudent();
struct stu* getStudent() {
    struct stu temp;  // ���������� �ӽ� ����ü�� �Ҵ�
    if (scanf("%d %s %f", &temp.id, temp.name, &temp.gpa) == 3) {
        struct stu* p = (struct stu*)malloc(sizeof(struct stu));
        *p = temp;
        return p;
    }
    return (struct stu*) 0;
}

void printStudent(struct stu* _p) {
    printf("�й� : %d\n", _p->id);
    printf("�̸� : %s\n", _p->name);
    printf("���� : %f\n", _p->gpa);
}


int main() {
    struct stu* kim;
    kim = getStudent();
    printStudent(kim);  // �й�, �̸�, ������ ����ϴ� �Լ��� �ۼ��϶�.
}