#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[80];
	char str_store[80] = { 0 };

	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++) {
		str_store[i] = str[i];
	}
	for (int j = 0; str_store[j] != 0; j++) {
		putchar(str_store[j]);
	}
}