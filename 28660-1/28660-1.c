#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//학생 정보 구조체
typedef struct {
	char* name;
	char id[9];
	int year;
} stu_t;

//전체를 아우르는 구조체 생김새 :
struct stlist {
	int numStu;  // 학생 수
	stu_t** stulist;  // 동적 할당을 받은 학생 구조체들을 가리키는 포인터 배열로 사용.
};

//getStudent의 프로토타입은 다음과 같다.
//struct student * getStudent();
//getStudent 함수를 호출하여 각각의 학생 데이터를 입력하게 한다.
//각 학생의 이름은 최대 200바이트(null - termination포함)를 넘지 않는 것으로 가정하되,
//동적할당으로 최소 메모리만 사용한다.

//struct student를 입력 받아서 리턴하는 함수 
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

//프로토타입은 struct stlist * getStuList();
//주어진 데이터 파일(student.data)처럼 학생 수와 학생 데이터가 들어 있을 때,
//아래와 같은 구조를 가진 학생 목록 구조체에(물론 동적할당 필요)
//데이터를 입력해서 돌려주는 함수 getStuList 를 작성하라.
//getStuList(..) 함수 안에서는
//처음에 학생 수를 읽어들인 다음 필요한 만큼 포인터 배열을 동적할당하고,
//getStudent 함수를 호출하여 각각의 학생 데이터를 입력하게 한다.

//struct stlist를 동적할당하고 입력받을 데이터갯수만큼 stulist를 동적할당 해주고 getStudent 함수를 호출하는 함수 
struct stlist* getStuList() {
	struct stlist* p;
	//int n;
	int i;
	p = (struct stlist*)malloc(sizeof(struct stlist));
	scanf("%d", &p->numStu); //입력 받을 데이터 갯수
	p->stulist = (stu_t**)malloc(sizeof(stu_t*) * p->numStu);
	for (i = 0; i < p->numStu; i++) {
		p->stulist[i] = getStudent();
	}
	return p;
}

//이름순으로 오름차순 정렬 하는 함수 
void sort(struct stlist* p) {
	int i, j;
	stu_t* temp;
	//버블정렬
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

//입력 받은 데이터 출력 받은 함수 
void printAll(struct stlist* p) {
	int i;
	for (i = 0; i < p->numStu; i++) {
		printf("%s %s %d\n", p->stulist[i]->name, p->stulist[i]->id, p->stulist[i]->year);
	}
}

int main() {
	struct stlist* theStList;
	int i; //반복문 변수

	theStList = getStuList();
	printAll(theStList);
	printf("\n\n");
	sort(theStList);  // 이름을 기준으로 오름차순 정렬
	printAll(theStList);

	for (i = 0; i < theStList->numStu; i++) {
		free(theStList->stulist[i]->name);
		free(theStList->stulist[i]);
	}
	free(theStList->stulist);
	free(theStList);
	return 0;
}