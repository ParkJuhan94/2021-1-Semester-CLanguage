//26610 ��������� ��Ʈ���� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�Լ��� ȿ���� printf("%s\n", s); �� ����.
//putchar�� �ѱ��ھ� ����ϵ�, �ݺ��� ���� ��������� �ذ��϶�.
//��Ʈ: 1. ù ���ڸ� ����ϰ�, �������� ���� �𿡰� �ñ��. 
//      2. ����� ���� ���� ���� �����ϸ� �ȴ�.
void printStr(char* s) {         
    if (*s != '\0') {   
        putchar(*s);
        printStr(s + 1);      
    }
    else {
        return;
    }
}

int main() {
    char buf[100];
    scanf("%s", buf);
    printStr(buf);
}