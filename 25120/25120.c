#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char data;
	scanf("%hhx", &data);

	if ((data & 0x80) == 0x80) {
		printf("남자\t");
	}
	else {
		printf("여자\t");
	}

	if ((data & 0x40) == 0x40) {
		printf("사병\t");
	}
	else {
		printf("장교\t");
	}

	if ((data & 0x20) == 0x20) {
		printf("현역\t");
	}
	else {
		printf("예비역\t");
	}
}