#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[100] = { 0 };
	int scoreCnt[10] = { 0 };
	double scoreRatio[10] = { 0 };
	int scoreNum;

	printf("입력할 점수의 개수는 :\n");
	scanf("%d", &scoreNum);
	printf("점수를 입력하시오:\n");
	for (int i = 0; i < scoreNum; i++) {
		scanf("%d", &score[i]);
		scoreCnt[(score[i] - 1) / 10]++;
	}
	for (int i = 0; i < 10; i++) {
		scoreRatio[i] = (double) scoreCnt[i] / scoreNum * 100;
	}
	printf("범위  빈도  비율\n");
	for (int i = 0; i < 10; i++) {
		printf("%d-%d %d    %.1lf%%\n", i * 10 + 1, i * 10 + 10, scoreCnt[i], scoreRatio[i]);
	}
}