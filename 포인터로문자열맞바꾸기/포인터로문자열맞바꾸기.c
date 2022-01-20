#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_change(char** a, char** b) {
    // 여기서 두개의 스트링이 바뀌게 한다.
    char* tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    char* apple = "apple";
    char* banana = "banananananananana";

    // 아래 4줄을 없애고 함수 호출로 해결하도록 한다.
    //char *t;
    //t = apple;
    //apple = banana;
    //banana = t;

    string_change(&apple, &banana);   //함수호출

    printf("%s %s\n", apple, banana);
}


