#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[2][3], b[2][3], c[2][3];

	printf("행렬 a를 입력하세요 :\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("행렬 b를 입력하세요 :\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	printf("행렬a와 행렬b를 더한 행렬c :\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}