#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char data;
	
	printf("16���� ���ڸ� �Է��ϼ���:\n");
	scanf("%hhx", &data);

	printf("��Ʈ����: ");
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