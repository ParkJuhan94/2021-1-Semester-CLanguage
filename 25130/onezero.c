#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char data;
	
	printf("16진수 숫자를 입력하세요:\n");
	scanf("%hhx", &data);

	printf("비트열은: ");
	if ((data & 0x80) == 0x80) {
		printf("1");
	}
	else {
		printf("0");
	}

	if ((data & 0x40) == 0x40) {
		printf("1");
	}
	else {
		printf("0");
	}

	if ((data & 0x20) == 0x20) {
		printf("1");
	}
	else {
		printf("0");
	}

	if ((data & 0x10) == 0x10) {
		printf("1");
	}
	else {
		printf("0");
	}
}