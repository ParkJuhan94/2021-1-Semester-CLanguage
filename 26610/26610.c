//26610 재귀적으로 스트링을 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//함수의 효과는 printf("%s\n", s); 와 같다.
//putchar로 한글자씩 출력하되, 반복문 없이 재귀적으로 해결하라.
//힌트: 1. 첫 글자만 출력하고, 나머지는 다음 놈에게 맡긴다. 
//      2. 출력할 것이 없는 경우는 종료하면 된다.
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