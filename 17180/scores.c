#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int score[100] = { 0 };
	int n;
	int cnt = 0;
	printf("������ �Է��Ͻÿ� :\n");

	for (int i = 0; i < 100; i++) {
		n = scanf("%d", &score[i]);
		if (n == 1) {
			cnt++;
		}
	}
	printf("�л� ���� %d��\n", cnt);
	for (int j = cnt - 1; j >= 0; j--) {
		printf("%d ", score[j]);
	}
}