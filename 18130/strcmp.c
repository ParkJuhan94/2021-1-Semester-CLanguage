#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];
	char str2[100];
	int cmp;

	while (scanf("%s", str1) == 1) {
		scanf("%s", str2);
		cmp = strcmp(str1, str2);
		if (cmp <= 0) {
			printf("%s\n", str1);
		}
		else {
			printf("%s\n", str2);
		}
	}
}