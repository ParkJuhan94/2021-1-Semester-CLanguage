#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[100] = { 0 };
	int scoreCnt[10] = { 0 };
	double scoreRatio[10] = { 0 };
	int scoreNum;

	printf("�Է��� ������ ������ :\n");
	scanf("%d", &scoreNum);
	printf("������ �Է��Ͻÿ�:\n");
	for (int i = 0; i < scoreNum; i++) {
		scanf("%d", &score[i]);
		scoreCnt[(score[i] - 1) / 10]++;
	}
	for (int i = 0; i < 10; i++) {
		scoreRatio[i] = (double) scoreCnt[i] / scoreNum * 100;
	}
	printf("����  ��  ����\n");
	for (int i = 0; i < 10; i++) {
		printf("%d-%d %d    %.1lf%%\n", i * 10 + 1, i * 10 + 10, scoreCnt[i], scoreRatio[i]);
	}
}