#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[100] = { 0 };
	int n;
	int cnt = 0;
	printf("성적을 입력하시오 :\n");

	for (int i = 0; i < 100; i++) {
		n = scanf("%d", &score[i]);
		if (n == 1) {
			cnt++;
		}
	}
	printf("학생 수는 %d명\n", cnt);
	for (int j = cnt - 1; j >= 0; j--) {
		printf("%d ", score[j]);
	}
}