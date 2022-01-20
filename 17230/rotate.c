#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[10];
	int room[10];

	printf("10개의 정수를 입력하시오:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");
	for (int j = 0; j < 10; j++) {
		room[j] = score[j];
		score[j] = score[j + 1];
		if (j >= 10 - 1) {
			score[j] = room[9 - j];
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");
}