#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char data;
	unsigned mask = 0x80;

	printf("16���� ���ڸ� �Է��ϼ���:\n");
	scanf("%hhx", &data);

	printf("��Ʈ����: ");
	for (int i = 0; i < 8; i++) {
		if ((data & mask >> i) == mask >> i) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
}