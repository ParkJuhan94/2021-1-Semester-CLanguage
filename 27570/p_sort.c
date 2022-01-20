//27570 포인터배열을 이용한 정렬

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[20][100];
	char* ptr[20];
	char* tmp;
	int cnt;

	for (cnt = 0; cnt < 20 && scanf("%s", &str[cnt]) == 1; cnt++) {
		ptr[cnt] = str[cnt];
	}
	for (int i = 0; i < cnt - 1; i++) {
		for (int i = 0; i < cnt - 1; i++) {
			if (strcmp(ptr[i], ptr[i + 1]) > 0) {
				tmp = ptr[i];
				ptr[i] = ptr[i + 1];
				ptr[i + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < cnt; i++) {
		printf("%s\n", str[i]);
	}
	printf("====================\n");
	for (int i = 0; i < cnt; i++) {
		printf("%s\n", ptr[i]);
	}
}