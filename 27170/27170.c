#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mystrlen(char* s) {
    // strlen 함수를 쓰지 않고 포인터를 사용하여 길이를 구한다.
    // 배열 기호를 쓰지 않고 포인터 연산으로만 구한다.
    int cnt = 0;
    for (; *(s + cnt) != '\0'; cnt++) {
    }
    return cnt;
}
/*
int mystrlen(char* s) {
    // strlen 함수를 쓰지 않고 포인터를 사용하여 길이를 구한다.
    // 배열 기호를 쓰지 않고 포인터 연산으로만 구한다.
    int len = 0;
    while (*s++) {
        len++;
    }
    return len;
}
*/

int main() {
    char buf[80];

    scanf("%s", buf);    

    for (int i = 0; i < 10; i++) {
        printf("%c\t", buf[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\t", buf[i]);
    }
    printf("\n");

    int n = mystrlen(buf);

    printf("입력된 스트링의 길이는: %d 입니다.\n", n);
    return 0;
}
