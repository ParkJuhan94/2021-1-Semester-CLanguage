#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char data;
	unsigned mask = 0x80;

	printf("16진수 숫자를 입력하세요:\n");
	scanf("%hhx", &data);

	printf("비트열은: ");
	for (int i = 0; i < 8; i++) {
		if ((data & mask >> i) == mask >> i) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
}