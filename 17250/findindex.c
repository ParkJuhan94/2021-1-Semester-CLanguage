#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int minimumIndex(int a[]) {
	int minimum;
	int index;
	minimum = a[0];

	for (int i = 0; i < 10; i++) {
		if (a[i] < minimum) {
			minimum = a[i];
		}
	}
	for (index = 0; index < 10; index++) {
		if (minimum == a[index]) {
			printf("%d", index);
			break;
		}
	}
	return index;
}

int main() {
	int score[10];

	printf("10���� ������ �Է��Ͻÿ�:\n");

	for (int i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
	minimumIndex(score);
}