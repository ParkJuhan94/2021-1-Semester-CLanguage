#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char data;
	scanf("%hhx", &data);

	if ((data & 0x80) == 0x80) {
		printf("����\t");
	}
	else {
		printf("����\t");
	}

	if ((data & 0x40) == 0x40) {
		printf("�纴\t");
	}
	else {
		printf("�屳\t");
	}

	if ((data & 0x20) == 0x20) {
		printf("����\t");
	}
	else {
		printf("����\t");
	}
}