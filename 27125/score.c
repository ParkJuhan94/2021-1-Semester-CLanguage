#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getSize(int *s, int *c) {
    printf("학생 수를 입력하세요 :\n");
    if ( (scanf("%d", s)) == 1) {               
            for (int i = 0; *s <= 0 || 100 < *s; i++) {
                printf("틀렸습니다.\n");
                scanf("%d", s);
            }
    }   
    else {
        return 0;
    }
    
    printf("과목 수를 입력하세요 :\n");
    if ((scanf("%d", c)) == 1) {
        for (int i = 0; *c <= 0 || 10 < *c; i++) {
            printf("틀렸습니다.\n");
            scanf("%d", c);
        }
        return 1;
    }
    else {
        return 0;
    }
    
}


int main() {
    int numStu; //학생 수
    int numCourse; // 과목 수 

    if (getSize(&numStu, &numCourse) == 1) {
        printf("학생 수: %d 과목 수: %d\n", numStu, numCourse);
    }
    else {
        printf("실패\n");
    }

}