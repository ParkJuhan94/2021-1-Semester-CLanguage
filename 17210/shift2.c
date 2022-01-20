#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[10];
	int n;

	printf("10개의 정수를 입력하시오:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
	scanf("%d", &n);
	if ( n > 0) {
		for (int j = 9; j >= n; j--) {
			score[j] = score[j - n];
		}
		for (int k = 0; k < n;k++) {
			score[k] = 0;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", score[i]);
	}
}