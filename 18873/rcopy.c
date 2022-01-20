#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void rcpy(char _copy[], char _org[]) {
    int len = 0;
    int j;
    for (int i = 0; _org[i] != 0; i++) {
        len++;
    }
   
    for (j = 0; _org[j] != 0; j++) {
        _copy[j] = _org[len - j - 1];
    }
    _copy[j] = 0;
}


int main() {
    char org[80], copy[80];
    scanf("%s", org);
    rcpy(copy, org);
    printf("원 스트링: %s, 뒤집힌 스트링: %s\n", org, copy);
}