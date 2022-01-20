#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf(" %d", score[i]);
	}
	printf("\n");
	for (int i = 9; i > 0; i--) {
		score[i] = score[i - 1];
	}
	score[0] = 0;
	for (int i = 0; i < 10; i++) {
		printf(" %d", score[i]);
	}
	printf("\n");
}