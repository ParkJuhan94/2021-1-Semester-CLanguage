#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printString(char* s) {
    for (; *s != '\0'; s++) {
        putchar(*s);
    }  
    return;
}

int main() {
    char buf[80];
    scanf("%s", buf);
    printString(buf);
    return 0;
}
