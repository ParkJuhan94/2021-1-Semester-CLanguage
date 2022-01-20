//28660 학생 데이터 구조체의 동적할당 다루기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
    char* name;     //이름
    char id[9];     //학번 (60191234 처럼)
    int year;       //학년
} stu_t;

struct stlist {
    int numStu;         // 학생 수
    stu_t** stulist;    // 동적 할당을 받은 학생 구조체들을 가리키는 포인터 배열로 사용.
};
// 한명의 데이터를 만들어 준다. 주소를 반환함!!
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
// getStudent를 호출하여 여러명 데이터의 리스트를 만들어 준다. 주소를 반환함!!
struct stlist* getStuList() {
    struct stlist* p;
    p = (struct stlist*)malloc(sizeof(struct stlist));
    scanf("%d", &p->numStu);   //입력 데이터의 갯수
    p->stulist = (stu_t**)malloc(sizeof(stu_t*) * p->numStu);
    for (int i = 0; i < p->numStu; i++) {
        p->stulist[i] = getStudent();
    }
    return p;
}
//버블정렬 함수
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
//출력 함수
void printAll(struct stlist* p) {
    for (int i = 0; i < p->numStu; i++) {
        printf("%s %s %d\n", p->stulist[i]->name, p->stulist[i]->id, p->stulist[i]->year);
    }
}

int main() {
    struct stlist* theStList;

    theStList = getStuList();
    printAll(theStList);

    // 이름을 기준으로 오름차순 정렬
    sort(theStList);  
    printAll(theStList);
    return 0;
}
