//28610 동적 구조체의 포인터배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct stu {
    int id;
    char name[20];
    float gpa;
};

struct stu* getStudent() {
    struct stu temp;  // 지역변수로 임시 구조체를 할당
    if (scanf("%d %s %f", &temp.id, temp.name, &temp.gpa) == 3) {
        struct stu* p = (struct stu*)malloc(sizeof(struct stu));
        *p = temp;
        return p;
    }
    return (struct stu*)0;
}

void printStudent(struct stu* _p) {
    printf("학번 : %d\n", _p->id);
    printf("이름 : %s\n", _p->name);
    printf("평점 : %f\n", _p->gpa);
}

int main() {
    struct stu* q[3];

    for (int i = 0; i < 3; i++) {
        q[i] = getStudent();        
    }

    for (int i = 0; i < 3; i++) {        
        printStudent(q[i]);
    }
 }