#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_change(char** a, char** b) {
    // ���⼭ �ΰ��� ��Ʈ���� �ٲ�� �Ѵ�.
    char* tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    char* apple = "apple";
    char* banana = "banananananananana";

    // �Ʒ� 4���� ���ְ� �Լ� ȣ��� �ذ��ϵ��� �Ѵ�.
    //char *t;
    //t = apple;
    //apple = banana;
    //banana = t;

    string_change(&apple, &banana);   //�Լ�ȣ��

    printf("%s %s\n", apple, banana);
}


