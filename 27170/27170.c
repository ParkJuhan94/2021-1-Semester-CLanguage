#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mystrlen(char* s) {
    // strlen �Լ��� ���� �ʰ� �����͸� ����Ͽ� ���̸� ���Ѵ�.
    // �迭 ��ȣ�� ���� �ʰ� ������ �������θ� ���Ѵ�.
    int cnt = 0;
    for (; *(s + cnt) != '\0'; cnt++) {
    }
    return cnt;
}
/*
int mystrlen(char* s) {
    // strlen �Լ��� ���� �ʰ� �����͸� ����Ͽ� ���̸� ���Ѵ�.
    // �迭 ��ȣ�� ���� �ʰ� ������ �������θ� ���Ѵ�.
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

    printf("�Էµ� ��Ʈ���� ���̴�: %d �Դϴ�.\n", n);
    return 0;
}
